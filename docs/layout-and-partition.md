# Range-partition parity, block layout, and the nested-switch construction

The barrier described in [as1-barrier.md](as1-barrier.md) needs a statement
position between the switch's range test and its high-table dispatch. A
single `switch` offers none, so the partition has to be written in source —
and every way of writing it perturbs three other compiler decisions that the
plain switch got right. This document records those decisions and the
construction that satisfies all of them at once.

Reference layout (the target's):

```
[range test: slti/bnez → low dispatch]     rows 46–47
[high dispatch: move/addiu −250/sltiu 6]   rows 48–58 (fallthrough)
[low dispatch: addiu −128/sltiu 81]        rows 59–69 (branch target)
[low case bodies, in source order]
[high case bodies]
```

## 1. Branch parity: the goto-target-becomes-fallthrough rule

`uopt` normalizes `if (c) goto L;` by making the goto target the
fallthrough and inverting the branch onto the other path. Comparing cfe's
output Ucode with uopt's for the same source shows cfe emits the naive
lexical form (conditional jump plus both explicit `goto`s, blocks in source
order) and uopt performs the inversion.

Consequences, all measured on this function:

* `if (opcode >= 209) goto high; goto low_entry; high:;` yields exactly the
  target parity — `slti/bnez` to the low dispatch, high as fallthrough, the
  selector copy in the branch delay slot. Comparison polarity does not
  matter: `>= 209`, `> 208`, and `!(opcode < 209)` compile identically.
* A braced `if/else` is **not** equivalent: the low cluster lowers with a
  different shape entirely (~1,797 differing words, four instructions
  short).
* Statements attached to the goto-target label flip the normalization: the
  branch sense inverts and the two dispatch clusters swap positions (five
  differing words — the row-47 branch plus the `−250/6` and `−128/81`
  constant pairs exchanging). An equal empty statement on the *other* arm
  restores the choice; this ballast is idempotent (one, two, and three
  copies are byte-identical). The barrier therefore rides inside the
  switch's selector expression, and the ballast sits at the low entry.

## 2. Body placement: labeled blocks migrate, nested switches do not

With the partition written as two sibling switches, the high cases' bodies
must live somewhere. Every arrangement that reaches them through plain
labels loses:

* Real bodies inside the high switch put them between the two dispatches
  (~1,790 differing words of pure block displacement).
* `case X: goto body_label;` trampolines with the labeled bodies placed
  textually later do not help: `uopt` relocates goto-labeled,
  jump-table-referenced body blocks to sit immediately after the table that
  references them. Phase captures attribute the motion to uopt — cfe's
  output keeps the bodies at their source positions (records ~2,665 of
  ~4,125 in the capture), uopt's output has them inlined behind the table
  (records ~178). Anchoring each body with an additional unused low-range
  `case` label gives it a second predecessor and blocks the move, but
  costs tail-duplicated instructions.

The arrangement with zero cost nests the low switch *inside* the high
switch's body, entered through a label — the same language feature as
Duff's device:

```c
if (opcode >= 209) goto high_range;
goto low_dispatch;
high_range:;
switch (opcode && opcode && opcode ? opcode : opcode)
{
low_dispatch:
    if (opcode && opcode && opcode);
    switch (opcode) { /* low cases, verbatim */ }
    break;
/* high cases, verbatim */
}
```

Every block's lexical position now coincides with the target layout, so
nothing migrates. Semantics are unchanged: low opcodes enter at the label
and dispatch through the inner switch; the `break` leaves the outer switch;
opcodes 209–249 match no case in the outer switch and fall out, exactly as
the original's shared default did.

A useful bonus of this shape: the *low* dispatch is entered as a branch
target, and the assembler's copy-fact carry rule
([as1-barrier.md](as1-barrier.md)) gives branch-target blocks no inherited
facts — so the low table's `addiu t4, v0, -128` keeps the selector copy
with no barrier needed. Only the fallthrough (high) side ever needed one.

## 3. The selector temporary and the stack slots

With a plain `opcode` selector on the outer switch, two spilled
temporaries far from the dispatch (loads/stores around rows 1202–1253) sit
four bytes below their target homes — eight differing words in an otherwise
unchanged −168 frame. Writing the selector as a value-preserving ternary
(`… ? opcode : opcode`) allocates a merge temporary whose stack slot
restores the layout. The effect is independent of the barrier: a one-test
ternary fixes the slots without healing the assembler rewrite, and a
statement-form barrier heals the rewrite while leaving the slots wrong.
Folding the three-test barrier into the ternary's condition does both jobs
in one construct.

## Ablation summary

| Configuration | Differing words |
|---|---:|
| Full construction | 0 |
| Without the low-entry ballast | 5 |
| Barrier as a statement, plain selector | 8 |
| No barrier tests at all | 9 |
| Two sibling switches (`if/else`) | ~1,797 |
| Trampolines + labeled bodies | ~1,787 |

Six spellings of the full construction (barrier in the selector or as a
statement, one- or three-test ternary on either switch, ballast ×1–×3)
produce byte-identical zero-word objects. The committed source uses the
fewest constructs. What any de-faked replacement must reproduce is
specified in [../MATCH_NOTES.md](../MATCH_NOTES.md).
