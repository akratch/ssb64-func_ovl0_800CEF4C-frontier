# Complete IDO 7.1 globalcolor model for `func_ovl0_800CEF4C`

Session 2026-08-23 (Fable). Frontier unchanged at 25 words / hosted 177, but
the allocator is now fully reverse-engineered and the exact winning
configuration is characterized. All instrumentation lives in the main
checkout under `.workbench/cef4c/ido71-instrumented/` (`uopt-trace2.c`,
`build/uopt2`; swap into `toolchain/uopt` around `trace-one.sh` runs).

## The model (all validated against 20+ traces)

IDO 7.1 `uopt` global register allocation is Chow-style priority coloring:

- `priority = save / units`; `units = raw < 3 ? raw : ((raw-2)>>2)+2` with
  `raw = refnodes + cardbv-count` (cardbv = bvect at web+0x0c; live-block
  bvect at web+0x14). Both dumpable with the v2 instrumentation.
- Pop order: max priority first; **ties broken by ascending sym**, where sym
  order = order of first textual occurrence in the source.
- Color: lowest-free among f0,f2,f12,f14,f16,f18 (24..29); a popped web's
  color is OR'd into every uncolored **block-granular** neighbor's forbidden
  mask (interference = live-block-bvect overlap).
- Splits fire when a web's colors-left hits 0 or it pops uncolorable; the
  split head takes a color valid for its sub-range and spill stores land at
  the split boundary. **The target's two spill pairs (swc1 f16,84(sp) rows
  1696/98; swc1 f12,80(sp) rows 1751/53) are consequences of the target
  coloring** — cx1 splits at block 243 exactly because temp2 holds f16 there.

## Exact requirement for 100% (proven by exhaustive order enumeration)

With measured adjacency, **all** feasible pop orders share:

1. **Sever the web-87 edge to temp2.** Web 87 is the alias-class web
   (address-escaped `sp7C` ∪ `this_ptcl->vel.z` field caches). The current
   double field-read (temp2 def at line 692 + field re-read in the sp70 line)
   keeps a block-243 cache segment alive that forbids f16 for temp2 forever
   (invariant across all 20+ traces). Any single-tail-read spelling severs it
   — but every such junction respelling breaks the schedule equilibrium.
2. **Pop chain f1(→f12) → temp1(→f14) → temp2(→f16) → sx3(→f18)**, i.e.
   p(f1) > p(temp1) > p(temp2) > p(sx3=8/3≈2.667), with 662(cx4)→24 before
   664(f0-product)→25 preserved.
3. cx2 and cx1 then split naturally into the target spill structure.

## Measured impossibility results (the walls)

- Natural saves cap f1/temp1 at 3/2. Empty-if read boosts: any equilibrium
  tolerates ≤ 2-4 specific reads (more breaks the schedule), and **any third
  read block poisons cx4** (halves its priority via card growth → 664 takes
  24 → the whole ladder shifts). Poison is fatal (662=24/664=25 required).
- sx3 monolith floor ≈ 2.0 (schedule caps macro-expansion slots at 2).
  Distinct-sx4 is dead: both sine webs need f18 but interfere via block 243;
  a block-cut severs them but removes sx3a's f16-provider.
- Bare labels, bare expression statements, self-assigns, casts: all pruned
  before uopt (no refs, no blocks). Declaration moves: FP-inert.
- Macro hand-expansion is byte-equivalent **only if emitted on one physical
  line** (line-number effect); the reconstructed macro body is byte-locked
  (ternary and empty-else forms break).
- No phase=2 recoloring round ever triggers in this function.
- op-score conflates schedule and allocation: variants with "broken" op can
  carry the right coloring (e.g. `g4__reads_a3b2c1_in` achieves temp2=f16 and
  both splits). Fitness must be the 6-column heal signature
  (r49/cx2/sx3/tm2/tm1/f1) from `score_wave.py`, not op.

## Schedule equilibria found

1. Original 25w (2 reads {f0,temp2}; unpoisoned; wrong webs).
2. vt2-champion (`sources-vt2-retune/vt2r10__b1-AB__b2-CDFE__rd-f1t1t2f0.c`,
   +defswap in `sources-grand3/g3__defswap.c`): junction severed, op=29
   floor (444+171-variant sweeps confirm), but 4 reads → poisoned.
3. sum-capture: op=111 floor. Dead.

The op=29 residual of (2) is precisely the missing cx1 split + shuttle
rotation — i.e. the missing coloring, not an independent schedule problem.

## Open attack lines

- Joint enumeration with signature-fitness over (junction × statement order ×
  defswap × read multiset × c3 slots): `gen_mega.py` (576-variant grid) +
  `score_wave.py`.
- Instrument the scheduler/branch-likely machinery (ugen/as1) the way uopt
  was instrumented, to understand and widen equilibrium tolerance.
- Find the natural source shape whose refnode/card structure yields the
  chain without reads (Nintendo's actual spelling). The sincos macro body,
  junction, and pos-expression shapes are the remaining free dimensions.
