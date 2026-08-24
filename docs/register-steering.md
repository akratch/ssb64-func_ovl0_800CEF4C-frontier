# Two zero-cost statements that change register assignment

Terms: [glossary.md](glossary.md). This page documents two empty statements
that alter which registers IDO assigns — without adding any instructions —
and the measured result that they cannot be combined. Both matter for
anyone attempting to simplify the final source: they look like promising
simpler fixes for the one wrong instruction, and each one fails for a
specific, now-understood reason.

## Background: the one wrong instruction

With an idiomatic `switch`, the compiled function differs from the target
in a single instruction (row 49, the high jump table's index computation):
the assembler rewrites `addiu t3, v0, -250` to use `v1`, because its
peephole knows `v0` was just copied from `v1`
([as1-barrier.md](as1-barrier.md)). Separately, the function's integer
temporaries are assigned to registers by the allocator's priority order,
and that order has to come out exactly right or groups of instructions
differ only in their register numbers (a register rotation — see the
glossary).

## Statement one: an extra read of `command`

```c
if (!command);   /* empty body; compiles to no instructions */
```

Placed between the opcode masking and the `switch`, this statement is
erased from the generated code but still counts as a *reference* to
`command` inside the register allocator, which changes the priority order
of three integer webs. One consequence: the code generator picks a
different temporary for the dispatch, and row 49 comes out with the
correct `v0`.

The cost: the changed priority order mis-assigns three webs relative to
the target — nine instructions now differ, all register-only. Several
hundred variants of this statement were tested (different positions,
different variables, compound conditions, combinations); every variant
that fixed row 49 produced this same nine-instruction rotation. Fixing
row 49 this way and then fixing the rotation with further statements does
not converge: each addition perturbs the same priority order it is trying
to repair.

## Statement two: three reads of `opcode`

```c
if (opcode && opcode && opcode);   /* also compiles to no instructions */
```

Three references in one statement raise the *selector's* web priority just
past the two webs it must outrank (the arithmetic is in
[allocator-model.md](allocator-model.md): the third reference crosses a
quantization step in the priority formula, landing at 17.5 against their
15.0). Result: the **entire integer register assignment matches the
target** — the nine-instruction rotation from statement one never happens.
The count is exact: two reads tie at 15.0 and lose the tie-break, three
separate single-read statements overshoot (each statement also adds a
block-count term to the formula), and four reads change the generated code
wholesale.

The cost: with the registers now assigned exactly as in the target, the
copy that the assembler propagates through is also exactly as in the
target — so row 49 reverts to the wrong register. This statement also
lands its (temporary) block boundary on a branch pairing, changing one
branch from its branch-likely form.

## The measured incompatibility

| Approach | Row 49 | Register assignment | Net differing words |
|---|---|---|---:|
| Idiomatic switch, no statements | wrong | correct | 1 |
| `if (!command);` | correct | 3 webs rotated | 9 |
| `if (opcode && opcode && opcode);` | wrong | correct | 3 |
| Both statements together | one or the other, never both | — | ≥ 9 |

Fixing row 49 through the allocator *requires* the register assignment to
be wrong, because the correct assignment recreates the exact copy sequence
the assembler's peephole rewrites. This is why no combination of empty
reads reaches zero: the two goals are coupled through the assembler, not
independent. The zero-word solution instead leaves the allocator's correct
assignment alone and blocks the assembler's rewrite directly, with a
surviving branch-to-next at the right block boundary — the construction in
[as1-barrier.md](as1-barrier.md) and
[layout-and-partition.md](layout-and-partition.md).

The three-read spelling recurs in the final source for a different reason
there (its three conditional branches are exactly one more than the code
generator's branch-to-next eliminator removes); the fact that the same
count is optimal for two unrelated mechanisms is coincidence, not design.

Intermediate sources from this line of work are kept in
[../history/](../history/).
