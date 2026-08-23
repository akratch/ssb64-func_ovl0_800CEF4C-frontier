# SSB64 `func_ovl0_800CEF4C` frontier

Private handoff repository for the final unmatched function in
`ssb-decomp-re`.

## Current frontier

This source advances the exported `FDgt8` scratch (hosted score 190): the local
whole-section comparison is down to 25 differing instruction words. It has the
exact 1,868-instruction shape, opcode sequence, branch/gap structure, and
`-168` stack frame. The residual is 20 floating-point register sites, one
integer register site, and four stack-home offsets.

This is the current local research frontier and has not yet been rescored on
decomp.me. `source.c` is paste-ready. Use IDO 7.1 with `-O2 -mips2`.

## Contents

- [`scratch/`](scratch/) is a strictly flat, checksum-verified
  `decomp-workbench` scratch bundle. Its README also explains how to create a
  fresh decomp.me scratch from the included target assembly and context.
- [`frontier-metrics.json`](frontier-metrics.json) records the verified local comparison.
- [`decomp.me-export/`](decomp.me-export/) contains the equivalent exported
  source, context, target/current objects, assembly, and original metadata.

The two source copies are byte-identical.
