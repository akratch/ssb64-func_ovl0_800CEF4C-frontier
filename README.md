# SSB64 `func_ovl0_800CEF4C` frontier

Private handoff repository for the final unmatched function in
`ssb-decomp-re`.

## Current frontier

This is a measurable improvement over exported scratch `3Qcp4` (hosted score
999): the local whole-section comparison drops from 162 differing instruction
words to 116. The generated code has the exact 1,868-instruction shape, opcode
sequence, branch/gap structure, and `-168` stack frame. The remaining local
differences are register allocation (115 floating-point sites and one integer
site).

The hosted decomp.me score for this frontier has deliberately not been guessed.
Paste [`scratch/source.c`](scratch/source.c) into the existing scratch to
measure it. Use IDO 7.1 with `-O2 -mips2`.

## Contents

- [`scratch/`](scratch/) is a strictly flat, checksum-verified
  `decomp-workbench` scratch bundle. Its README also explains how to create a
  fresh decomp.me scratch from the included target assembly and context.
- [`frontier-metrics.json`](frontier-metrics.json) records the local comparison.
- [`decomp.me-export/`](decomp.me-export/) contains the equivalent exported
  source, context, target/current objects, assembly, and original metadata.

The two source copies are byte-identical.
