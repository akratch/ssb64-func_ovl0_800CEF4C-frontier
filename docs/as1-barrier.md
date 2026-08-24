# The assembler copy-propagation wall and the branch-to-next barrier

This document covers the single instruction that separated an idiomatic
source from a byte-exact match, why it is an assembler problem rather than a
compiler problem, and the mechanism that fixes it at zero instruction cost.

## The residual

With a plain `switch`, the compiled function differs from the target in one
word:

```
target:     addiu t3, v0, -250     ; high-table index off the selector copy
candidate:  addiu t3, v1, -250     ; same index off the original register
```

The instruction sits immediately after `move v0, v1` (the selector copy,
scheduled into the range branch's delay slot) at the head of the switch's
high-cluster dispatch.

## Attribution: ugen emits the right register; as1 rewrites it

Capturing the ugen→as1 stream (Binasm, fixed 16-byte records) shows ugen
already emits the target sequence: `move $2,$3; blt $2,209,…;
addu $11,$2,-250`. Running stock `as1` with `-peepdbg 2` logs the rewrite:

```
Peepreg (INST 1) changed rs 2 => 3
```

`as1`'s `peep_reg` peephole (in the original SGI 7.1 binary at
`0x4180dc`–`0x418d33`) performs path-local copy propagation: after
`move v0, v1`, later uses of `v0` are rewritten to `v1` while the fact
holds. Its `update_ctnt` bookkeeping carries a copy fact into a following
basic block only when that block has exactly one predecessor and is entered
by fallthrough; branch-target blocks start with no facts. The high dispatch
is the single-predecessor fallthrough after the range branch, so the fact
survives into it and the rewrite fires.

The behavior is deterministic and closed against alternatives:

* Decoding the assembler's complete 109-entry option table shows the only
  peephole gate is `-nopeep`, which disables the whole pass (1,866 differing
  words). The adjacent narrow gates (`-no_const_opts`, `-no_lui_opts`,
  `-nobopt`, `-noxbb`, …) either leave the residual or damage the function
  broadly.
* A 24-way phase-provenance matrix (cfe/uopt/ugen/as1 crossed between
  IDO 7.1 variants and IDO 5.3) shows cfe and uopt versions have no effect
  on this basin; ugen+as1 determine it, every 7.1 `as1` build makes the same
  choice, and 5.3 `as1` rewrites the identical stream far more aggressively.
* 7.1 cfe's complete pragma table contains no inline-assembly or
  per-region optimization pragma; `asm` spellings parse as ordinary calls.

Since the shipped ROM has `v0`, the original build's assembler input must
have contained something at this boundary that ended the copy fact.

## The twelve artificial barriers

Inserting any of the following directly into the Binasm stream immediately
before the `addu`, then assembling with stock `as1`, produces a byte-exact
object with the instruction count unchanged:

* `.set nomove`/`.set move`, `.set volatile`/`.set novolatile`,
  `.set noreorder`/`.set reorder` spans around the `addu`;
* an assembler pseudo-`nop`, a physical `move $3,$3`, or `or $3,$3,$0`
  before it (all removed by `as1` after the fact is dead);
* a branch to its immediately following label, in `b`, always-true `beq`,
  self-`beq`, and never-taken `bnez $0` forms — the transient basic-block
  boundary clears the fact, then the branch is deleted as removable.

The same records placed before the `move`, between the `move` and the range
branch, or after the `addu` do nothing. Every non-instruction directive
family observed in the real function (source-location records, section and
function metadata, `.option`, alias records, local labels) was duplicated at
the boundary; none blocks the rewrite.

## Why source code could not reach the boundary — and the exception

In a single `switch`, the range guard and the table subtraction are built
as one atomic expression tree by the code generator; no statement position
exists between them. Patching the *compiler's* intermediate code (uopt's
output Ucode) at the equivalent boundary with unconditional `Uujp`/`Ulab`
barriers — bare, or separated by location records, no-ops, or extra labels —
produces byte-identical Binasm: ugen erases them all.

The exception is conditional. ugen's branch-to-next eliminator removes
unconditional jumps to the next label without limit, but removes **at most
two** conditional branches at one boundary. Measured by inserting
`Ulod var; Uldc 0; Uneq; Ufjp L; …; Ulab L` groups into the retained Ucode
and running stock ugen+as1:

| inserted conditional branches | surviving in Binasm | differing words |
|---:|---:|---:|
| 1 | 0 | 1 (unchanged) |
| 2 | 0 | 1 (unchanged) |
| **3** | **1** | **0** |
| 4 | 2 | 1,822 |

Three chained conditional branch-to-next jumps therefore leave exactly one
branch in the assembler's input at the boundary. `as1` ends the copy fact
at its block boundary, then deletes it as a jump to the next instruction:
zero instructions added, `addiu t3, v0, -250` preserved, and the full
comparison reads zero differing words. The compared variable, comparison
operator, and branch sense are all irrelevant; only the surviving boundary
matters. Raw measurements: [results/fjp-minimality-results.json](results/fjp-minimality-results.json).

In C, three chained tests of a defined variable in one empty-bodied
statement — `if (x && x && x);` — compile to exactly this record group, and
a source position at the boundary exists once the range partition is written
in source. That construction is covered in
[layout-and-partition.md](layout-and-partition.md); what it costs and what
would replace it is in [../MATCH_NOTES.md](../MATCH_NOTES.md).
