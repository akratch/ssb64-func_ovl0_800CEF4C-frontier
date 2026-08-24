# The IDO 7.1 global register allocator, measured

Terms: [glossary.md](glossary.md). This page describes how IDO 7.1's
`uopt` assigns registers, as reconstructed by instrumenting the compiler
itself, and the practical consequences for matching. The instrument was a
rebuilt `uopt` whose only change is added trace printing at five points in
its allocation routine (`globalcolor`); it was verified to produce
byte-identical objects to the stock compiler, so every number below comes
from watching the real allocator run on this function.

## How the allocator decides

`uopt` performs priority coloring over webs (see glossary):

* **Each web gets a priority** = `save / units`.
  `save` is the estimated benefit of keeping the web in a register —
  in practice it increases by 10 for every reference to the web, with no
  extra weight for references inside branches.
  `units` grows with the web's size: `raw` = the web's reference count
  plus the number of basic blocks it spans, and
  `units = raw` when `raw < 3`, otherwise `((raw − 2) >> 2) + 2`.
  Because of the integer shift, `units` moves in steps: `raw` up to 6
  gives 2, 7–10 gives 3, 11–14 gives 4. Small changes in reference or
  block counts therefore either do nothing or jump the priority
  substantially — there is no smooth middle.
* **Webs are processed in priority order**, highest first. Ties break by
  which web's variable appears **first in the source text** — so moving a
  declaration or first use can change the outcome of a tie without
  changing any priority.
* **Each web takes the lowest-numbered free register** among those not
  already taken by an overlapping web. For floating point the order is
  `f0, f2, f12, f14, f16, f18`.
* **Overlap is counted in whole basic blocks**, not instructions: two webs
  conflict if any block appears in both webs' live sets. One cached field
  read near the end of a block can therefore extend a web across the
  entire block and create a conflict that looks impossible from the
  instruction listing.
* **When a web cannot be colored, it splits**: part of it gets a register,
  the rest is spilled, and the spill stores land at the split point. The
  target's spill instructions in this function are consequences of its
  register assignment, not independent facts — reproduce the assignment
  and the spills follow.
* **Variables whose address is taken fuse with everything they might
  alias** into a single web. In this function, one stack variable whose
  address escapes fuses with cached reads of a structure field; that fused
  web's block overlaps permanently blocked one register for a neighboring
  web in every variant of one whole source approach — the proof that that
  approach could never match, no matter how it was rearranged.

## Steering the allocator with empty statements

An empty-bodied conditional read — `if (!x);` — compiles to no
instructions but still counts as a reference to `x` in the priority
formula, as long as `x` has been assigned a value on that code path.
This gives a small set of usable, predictable effects:

* one extra reference adds 10 to `save`;
* one extra *statement* adds one to the spanned-block count of every web
  alive across it (each statement briefly forms its own block, and the
  block count is taken before empty blocks are cleaned up);
* whether the total helps or hurts depends entirely on which side of a
  `units` step the web lands on — see the steps above.

Reads of a variable that has **no assignment on the path** (declared but
never written before this point) are not free: they force the allocator to
treat the variable as live all the way back through the control-flow
graph, which changes scheduling and, in the worst measured case, the
stack-frame layout. Reads of defined variables cost nothing; reads of
undefined ones are destructive. Bare expression statements (`x;`),
self-assignments (`x = x;`), and casts are discarded by the front end
before the allocator ever sees them and have no effect at all.

Two worked examples of these effects — including the exact
reference-count arithmetic for the statement used in the final source —
are in [register-steering.md](register-steering.md).

## Why this page exists

Matching normally treats the allocator as a black box: try a spelling,
look at the diff. On this function that loop stopped converging — several
register assignments looked reachable but never appeared, and the reason
was invisible from the outside. Instrumenting the allocator replaced
guessing with arithmetic: given the traced priorities, the effect of an
added read at a given position is computable before compiling, and two
approaches were proven dead (rather than merely unlucky) — one by the
address-aliasing fusion above, one by enumerating every processing order
consistent with the measured overlaps and showing the wanted assignment
required conditions the source shape could not produce.
