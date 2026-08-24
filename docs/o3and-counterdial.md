# The donor-free rotation: `if (opcode && opcode && opcode);`

A negative result that turned out to be scoped too broadly, and the
measurement that corrected it.

## The assumption

The one-word residual ([as1-barrier.md](as1-barrier.md)) can be healed
without any barrier by adding `if (!command);` before the switch — a
"donor" read that changes which temporary the code generator selects for
the dispatch. Every donor tested carried the same collateral: a fixed
nine-word rotation of three integer webs (the target's
`a0`/`v1`/`a1` assignments permuting), and hundreds of variants on the
donor family — positions, polarities, compound expressions, counter-reads —
always collapsed back to that same nine-word basin. The working conclusion
was that the donor rotation and the row-49 heal were inseparable: any
integer-web intervention paid the nine words.

## The correction

The single statement

```c
if (opcode && opcode && opcode);
```

placed before the switch produces the **complete target integer-web
rotation with no donor at all**, at three differing words. The mechanism is
the read-count dial ([allocator-model.md](allocator-model.md)): three
references in one statement raise the selector web's priority from
40/2 = 20 through the units cliff to 70/4 = 17.5 — above the two 15.0 webs
it must precede — while the single-statement spelling adds only one
cardbit. Two references tie at 15.0 and lose the tie-break; three separate
statements overshoot on cardbits; four references collapse codegen.

Its three-word residual is instructive: the same statement's transient
block boundary lands on a branch-likely edge (breaking one `beql` pairing)
and — because the correct rotation restores the exact copy structure the
assembler propagates through — row 49 reverts. **The heal and the rotation
are mutually exclusive in every single-switch family**: the donor healed
row 49 precisely because its rotation was wrong, and correcting the
rotation reinstates the assembler rewrite. That exclusivity, understood
mechanically, is what pushed the work toward a phase-level barrier instead
of further source search.

## What this changed

* The nine-word donor basin was never a floor — it was a property of the
  donor family, not of the search space. Negative results are only as wide
  as the family they were measured in.
* The three-test spelling proved out as the reference-count sweet spot two
  further times: as the ugen-surviving conditional barrier (three is
  exactly one more than the eliminator's limit), and as the selector-ternary
  condition in the final construction. One spelling, three distinct
  mechanisms, all load-bearing in the zero-word source.

The superseded intermediate sources for this line of work are kept in
[../history/](../history/).
