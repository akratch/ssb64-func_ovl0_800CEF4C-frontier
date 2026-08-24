# Match notes: what each non-idiomatic construct does and why it is there

Terms used here are defined in [docs/glossary.md](docs/glossary.md).

`scratch/source.c` compiles byte-exactly to the target with IDO 7.1 at
`-O2 -mips2` — all 1,868 instructions, registers, branch structure, and the
−168 stack frame. It reaches that result with four constructs no original
developer would have written. This document explains each one precisely
enough that a future maintainer can attempt to remove it, and states what its
removal costs today.

The honest framing first: **this is a fakematch in the usual community
sense.** The constructs below are not a guess at HAL's source. Each one is a
deliberate, measured way of forcing a specific decision out of a specific
compiler pass, and each decision was verified at the phase-stream level
before the source spelling for it existed. The bytes are exact; the
spellings are scaffolding.

## Background: the shape of the function

The function is a bytecode interpreter. Its core is one large `switch` on a
`u8` opcode with two dense clusters of cases: a low cluster (`0x80`–`0xD0`)
and a high cluster (`0xFA`–`0xFF`). IDO lowers this as a two-level dispatch:

```
row 46   slti  at, v1, 209        ; range test: below 209 → low cluster
row 47   bnez  at, <low dispatch>
row 48   move  v0, v1             ; selector copy, in the branch delay slot
row 49   addiu t3, v0, -250       ; high-table index
row 50   sltiu at, t3, 6          ; high-table bounds guard
...
row 59   addiu t4, v0, -128       ; low-table index (at the branch target)
row 60   sltiu at, t4, 81         ; low-table bounds guard
```

A plain, idiomatic `switch` reproduces every byte of this function except
one: row 49 comes out as `addiu t3, v1, -250`. The assembler (`as1`), not
the code generator, rewrites the register: its `peep_reg` peephole sees the
`move v0, v1` copy and propagates `v1` into the subtraction. The rewrite is
deterministic — every IDO 7.1 `as1` build tested does it, and no command-line
option disables only this transform (see
[docs/as1-barrier.md](docs/as1-barrier.md)). The original ROM has `v0`
there, so the original build's assembler input must have contained something
that broke the copy chain. Everything below exists to recreate that break,
and to keep every other codegen decision unchanged while doing so.

## The four constructs

The dispatch region of `source.c` looks like this (simplified):

```c
if (opcode >= 209) goto high_range;                    /* 1 */
goto low_dispatch;                                     /* 1 */
high_range:;                                           /* 1 */
switch (opcode && opcode && opcode ? opcode : opcode)  /* 3 */
{
low_dispatch:
    if (opcode && opcode && opcode);                  /* 4 */
    switch (opcode)                                   /* 2 */
    {
    /* ...all low cases, verbatim... */
    }
    break;
/* ...all high cases, verbatim... */
}
```

### 1. The goto-pair range partition

```c
if (opcode >= 209) goto high_range;
goto low_dispatch;
high_range:;
```

**What it does.** Writes the compiler's own low/high cluster split in
source, so that a statement position exists on the high-cluster edge — the
region between the range test and the high-table subtraction. In a single
`switch`, that region is synthesized inside the compiler and no source
construct can reach it: the range guard and the table subtraction are built
as one atomic expression tree, and patching the intermediate representation
directly confirmed that labels and unconditional jumps inserted there are
erased before they matter (see
[docs/as1-barrier.md](docs/as1-barrier.md)).

**Why this exact spelling.** `uopt` normalizes `if (c) goto L` by making the
goto target the fallthrough and inverting the branch onto the other path,
consuming the second `goto`. Applied here, that yields exactly the target's
parity: `slti/bnez` to the low dispatch, high dispatch as the fallthrough,
and — because the fallthrough carries the selector copy in the branch delay
slot — the same `move v0, v1` placement as the target. The obvious
alternative, a braced `if/else`, is not equivalent: it changes the low
cluster's lowering entirely (measured at ~1,797 differing words and four
instructions short).

### 2. The nested inner switch, entered by `goto`

```c
switch (...) {          /* high cases live here */
low_dispatch:
    switch (opcode) {   /* all low cases, with their bodies */
    ...
    }
    break;
...high cases...
}
```

**What it does.** Controls block layout. The target places code as
`[range test][high dispatch][low dispatch][low case bodies][high case
bodies]`. When the two switches are written separately, `uopt` relocates
`goto`-labeled, table-referenced body blocks to sit immediately after the
table that references them, which puts the high bodies in the middle of the
function (~1,787 differing words). Nesting the low switch *inside* the high
switch's body — entered through the label, which is legal C — makes every
block's natural position identical to the target layout, so no relocation
occurs. Jumping into a switch block is the same language feature Duff's
device uses.

**Semantics.** For `opcode < 209` control enters at `low_dispatch` and
dispatches through the low table; the `break` exits the outer switch. For
`opcode >= 209` the outer switch dispatches directly; values 209–249 match
no case and fall out. Behavior is identical to the original single switch.

### 3. The selector ternary with three chained tests

```c
switch (opcode && opcode && opcode ? opcode : opcode)
```

The value is `opcode` on every path, so the selector is semantically just
`opcode`. The spelling does two unrelated jobs at once.

**Job one: it breaks the assembler's copy chain (the actual fix for row
49).** The three `opcode && opcode && opcode` tests compile to three
conditional branch-to-next jumps. UGEN's branch-to-next eliminator removes
**at most two** conditional branches at one boundary (and unboundedly many
unconditional ones) — so exactly one conditional branch survives into the
assembler's input, positioned between the range branch and the high-table
subtraction. `as1` processes it in two steps that happen in the right
order: the branch's transient basic-block boundary ends the `move v0, v1`
copy fact (its `update_ctnt` carries a fact only into a single-predecessor
fallthrough block), and *then* the branch is deleted as a jump to the next
instruction. Net effect: zero instructions added, and row 49 keeps `v0`.

The count is sharp and was measured directly at the intermediate-code
level, independent of any source spelling: one or two tests are fully
erased (no effect), three is exact, four is catastrophic (1,822 differing
words). The compared variable and branch sense are irrelevant; only the
surviving boundary matters. See
[docs/as1-barrier.md](docs/as1-barrier.md) for the stream-level proof.

**Job two: the ternary's result temporary reproduces the target's stack
layout.** With a plain `opcode` selector, two spilled temporaries in a
far-away region of the function sit four bytes lower than the target's
(eight differing load/store words around rows 1202–1253). The ternary's
merge temporary occupies the slot that shifts them back. This effect is
independent of job one: a one-test ternary fixes the slots without healing
row 49, and a statement-form barrier heals row 49 without fixing the slots.

### 4. The ballast statement

```c
low_dispatch:
    if (opcode && opcode && opcode);
```

**What it does.** Rebalances `uopt`'s fallthrough choice. The construct-1
normalization picks which arm of the partition becomes the fallthrough, and
extra control flow attached to the high arm (which is what construct 3
introduces) flips the choice: the branch sense inverts and the two dispatch
clusters swap positions (five differing words: the row-47 branch and the
`−250/6` / `−128/81` constant pairs exchanging). An equal empty statement on
the low arm restores the target parity. The statement itself is erased (its
reads are of a defined variable; see the reaching-definition law in the
project's law book) and is idempotent — one, two, or three copies produce
byte-identical output.

## Removal costs: what each construct is worth

Each row removes one construct from the final composition and keeps the
rest. "Words" is the number of differing 4-byte instruction words against
the target (relocation-equivalent sites excluded), with instruction count
and stack frame unchanged unless noted.

| Change | Words | What breaks |
|---|---:|---|
| Final composition (all four) | **0** | — |
| Drop the ballast (4) | 5 | branch parity flips; dispatch clusters swap |
| Barrier as a statement instead of the ternary (3, job two) | 8 | two stack temp slots shift by 4 bytes |
| Drop the barrier tests entirely (3, job one) | 9 | row 49 reverts to `v1`; register rotation returns |
| `if/else` instead of the goto pair (1) | ~1,797 | low-cluster lowering changes; 4 instructions short |
| Separate switches instead of nesting (2) | ~1,787 | high case bodies relocate next to their table |

Six spellings of the final composition produce identical zero-word objects
(barrier in the selector vs. as a statement, one-test vs. three-test
ternary in either switch, ballast multiplicity); the committed source is the
one with the fewest constructs.

## What removing the scaffolding would take

The de-fake question is well-posed. Any candidate replacement must
reproduce three measured properties, and each can be checked in one
compile:

1. **A surviving conditional branch-to-next** between the range branch and
   the high-table subtraction in the assembler's input — the only
   source-reachable way found to stop `peep_reg` (twelve artificial
   assembler-level barriers work; all C-reachable ones reduce to this one).
2. **High-cluster fallthrough parity** — `slti/bnez` to the low dispatch
   with the selector copy in the delay slot.
3. **The extra selector temporary** occupying the stack slot that positions
   the two spilled temporaries at rows ~1202–1253.

Because `as1` is deterministic, the original source must have produced
property 1 organically — some construct in HAL's code created a block
boundary there that the plain reconstruction does not. Finding that natural
spelling is the remaining open problem. Two known partial points on the
curve: the natural single switch with only `switch (command ? opcode :
opcode)` heals row 49 at 9 words (a pure two-register rotation that
resisted a 700+-variant closure), and the natural switch with no changes is
1 word away. Anything that beats 0-words-with-less-scaffolding, or matches
the three properties from idiomatic code, replaces this file's constructs.

## Evidence index

| Topic | Document |
|---|---|
| `as1` `peep_reg`, the copy-fact carry rule, the twelve barriers, the ≤2-conditional eliminator, the stream-level zero-word proof | [docs/as1-barrier.md](docs/as1-barrier.md) |
| The partition, layout, and parity findings; the relocation of labeled bodies | [docs/layout-and-partition.md](docs/layout-and-partition.md) |
| The register-allocator model: the priority formula, tie-breaks, block-level interference, and the arithmetic of steering it with empty statements | [docs/allocator-model.md](docs/allocator-model.md) |
| Two zero-cost statements that steer register assignment, and the measured reason they cannot be combined | [docs/register-steering.md](docs/register-steering.md) |
| Why a correct source still scored nonzero on the hosted target (the target's own `.rodata` extraction defect) | [docs/target-rodata-defect.md](docs/target-rodata-defect.md) |
| Raw minimality measurements for the barrier arity | [docs/results/fjp-minimality-results.json](docs/results/fjp-minimality-results.json) |
