# The IDO 7.1 global register allocator, measured

Before the residual narrowed to the assembler, the hard part of this
function was floating-point register allocation: a long phase of the work
was spent proving *why* particular register assignments were unreachable
from particular source families. The instrument was a rebuilt `uopt` whose
only change is trace output at five points in `globalcolor` (web pop,
interference propagation, live-block and transit bitvectors, the
`compute_save` priority calculation, and neighbor lists), verified to
produce byte-identical objects to stock. The model below held across every
trace taken.

## The coloring model

`globalcolor` is Chow-style priority coloring:

* **Priority** = `save / units`, where
  `units = raw < 3 ? raw : ((raw − 2) >> 2) + 2` and
  `raw = refnodes + cardbits` (cardbits = the transit bitvector's
  population; the live-block bitvector is separate).
* **Pop order**: maximum priority first; ties break by **ascending symbol
  number**, which follows first textual occurrence in the source. Moving a
  declaration is therefore a tie-break dial.
* **Color choice**: lowest free color. For the FP bank the order is
  `f0 f2 f12 f14 f16 f18` (colors 24–29).
* **Interference** is **block-granular**: two webs interfere when their
  live-block bitvectors overlap, not when their instruction ranges do. A
  single cached field read can keep a block segment alive and forbid a
  color permanently.
* A popped web's color is OR'd into every uncolored neighbor's forbidden
  mask. A web **splits** when it pops uncolorable; the split head takes a
  color valid for its sub-range, and spill stores land at the split
  boundary. The target's spill pairs in this function are consequences of
  its coloring, not independent facts to match.
* **Alias classes**: address-escaped locals and the field caches they
  overlap fuse into one web, dragging each other's interference along.
  In this function, one such class (an escaped stack local plus
  `vel.z` field caches) permanently forbade a color for a neighboring web
  in every trace of the two-field-read source family — the proof that that
  family could never reach the target coloring.

## The read-count dial

Empty-bodied conditional reads move priorities with fixed arithmetic:

* **+10 `save` per surviving reference**, with no discount for branch
  nesting. No loop-depth weighting is reachable: trip-count-1 and
  `while (0)` wrappers fold before `compute_save`, and a real loop changes
  the frame.
* **+1 cardbit per spanning statement** — each extra statement contributes
  a transient block to every web alive across it, which is what pushes
  `raw` over a units quantization step (`raw ≤ 6 → units 2`,
  `7–10 → 3`, `11–14 → 4`).
* **The steps are cliffs.** On one measured web: two references tied at
  15.0 (symbol order decided), three references in one statement gave
  70/4 = 17.5 and the wanted rotation, four collapsed code generation
  entirely. Branchless spellings (`x + x + x`, `x | x | x`, `x & x & x`)
  fold to a single reference.
* References are counted **before** the empty body is folded away — the
  reason a zero-instruction statement can rotate an allocation at all.

## When an empty read is free — the reaching-definition rule

A fixed-slot grid varying only the read target separates the outcomes on
**reaching definitions**, not liveness:

| read target at the same slot | outcome |
|---|---|
| defined and live (the switch selector itself) | erased; no observable effect |
| defined and live (other variables) | erased; allocation rotation only |
| **no reaching definition** (declared, never assigned on the path) | real schedule damage — up to a frame change |

Reads of defined variables cost zero instructions regardless of liveness;
a read with no reaching definition creates an upward-exposed web that drags
back through the control-flow graph with schedule collateral. Bare labels,
bare expression statements, self-assignments, and casts are all pruned
before `uopt` and have no effect of any kind.

## What the model bought

The model turned "try another spelling" into arithmetic: given a trace's
`save`/`units`/cardbits per web, the effect of adding a read at a given
slot is computable before compiling. It also produced the campaign's two
useful impossibility proofs — the alias-class bar above, and an exhaustive
enumeration over the measured interference graph showing every feasible pop
order for the target coloring shared structural preconditions the source
family under test could not produce. Both proofs redirected the search
instead of consuming it.

The integer-side application of the same dial — a donor-free rotation that
corrected an earlier assumption — is documented in
[o3and-counterdial.md](o3and-counterdial.md).
