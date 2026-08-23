# SSB64 `func_ovl0_800CEF4C` frontier

Private handoff repository for the final unmatched function in
`ssb-decomp-re`.

## Current frontier

This Codex-race source scores **165 / 99.9136%** with decomp.me's current
`asm-differ` scorer, advancing the user-confirmed hosted frontier of 177. The
scorer was calibrated by reproducing that 177 result exactly. The local
whole-section comparison remains at 25 differing instruction words. It has the
exact 1,868-instruction shape, opcode sequence, branch/gap structure, and
`-168` stack frame. The residual is 24 floating-point register sites and one
integer register site; all four prior stack-home mismatches are exact.

This is the current site-faithful scoring frontier; direct hosted paste
confirmation is pending. `source.c` is paste-ready. Use IDO 7.1 with
`-O2 -mips2`.

## Contents

- [`FABLE_HANDOFF.md`](FABLE_HANDOFF.md) is the full continuation brief,
  including local artifact paths, allocator evidence, exhausted campaigns, and
  the next staged experiments.
- [`scratch/`](scratch/) is a strictly flat, checksum-verified
  `decomp-workbench` scratch bundle. Its README also explains how to create a
  fresh decomp.me scratch from the included target assembly and context.
- [`frontier-metrics.json`](frontier-metrics.json) records the verified local comparison.
- [`decomp.me-export/`](decomp.me-export/) contains the equivalent exported
  source, context, target/current objects, assembly, and original metadata.

The two source copies are byte-identical.
