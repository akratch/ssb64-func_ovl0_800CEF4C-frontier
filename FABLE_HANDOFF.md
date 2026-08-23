# Fable handoff v2: `func_ovl0_800CEF4C`

## Current truth (2026-08-23, post-allocator-campaign)

- Hosted frontier: **177 / 99.91%** (unchanged; `scratch/source.c` = the
  25-word family). Local: 25 words, raw 37.
- **The 25-word family is a proven dead end**: its remaining mirror
  (cx2/sx3/temp2/temp1/f1 register webs) is unreachable — exhaustive pop-order
  enumeration over the measured interference graph shows every feasible
  ordering requires the alias-class edge (web 87 → temp2) severed, and that
  edge is structural to the family's double vel.z read. See ALLOCATOR_MODEL.md.
- **New research basin** (`research-basin/basin27-champion.c`): op=0, gaps=0,
  insns=1868, frame -168, **27 words**, with temp2=f16, temp1=f14, f1=f12,
  cx1=f16+correct spill placement all healed. Remaining: the two sine webs
  (want f18), cx2-head (want f12), the 1/32768 const web (want f14),
  f0-product (want f2), one integer web pair (a0/v1), row 49.

## What the 27-word basin is made of

vt2 junction (`sp70[0] += temp2 * (sx3 / cx3);` — single tail vel.z read),
f1-def before temp1-def, phase reads {f1,f1,temp1,temp1,f0}, call3
hand-expanded on ONE physical line with two `if (!var_f14);` slots before
`angle_id_2 += 0x400;`, distinct sx4 in call4, pos.y order C,B,A / pos.z
order B,C,A. Every listed element is load-bearing; ~2600 variants around it
have been scored (sources-grid*/sources-mega* under
`.workbench/cef4c/agent-fp-tail/`).

## The remaining problem, precisely

1. The two sine webs need f18(29), which requires them popping after
   f1/temp1/temp2 with full masks; their priorities floor at 1.33/2.0 and the
   pack ceilings at 1.25/1.0 — every block-adding dial in rows [1700-1745]
   breaks the schedule in every equilibrium tested.
2. Three of the remaining webs (f0p, sx4, const) are separated from their
   mask-providers by block boundaries created by the 5-read phase structure —
   the hypothesis is that the winning source uses ≤3 phase reads (matching
   the target's block layout) with compensating structure elsewhere.
3. Integer side: `if (!command);` before the switch heals row 49 at +8
   collateral (a v1/a1 web-pair swap that resists all tested donors).

## Tooling (in the main checkout)

- `.workbench/cef4c/ido71-instrumented/uopt-trace2.c` + `build/uopt2`: the
  deep-instrumented uopt (interference events, live/card bvects, exact
  priorities). Swap into `toolchain/uopt` around `trace-one.sh`.
- `.workbench/cef4c/agent-fp-tail/score_wave.py <dir> <jobs>`: compile+score
  with the 6-column heal signature (r49 cx2 sx3 tm2 tm1 f1).
- `.workbench/cef4c/agent-fp-tail/gen_mega.py` and sources-mega*/: the
  grid-search corpus.

## Promotion protocol (unchanged)

Only promote on genuine hosted improvement (raw < 37 territory); at exact
100% use commit subject `EXACT 100%: match func_ovl0_800CEF4C`.
