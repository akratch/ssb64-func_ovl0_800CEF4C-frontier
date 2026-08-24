# SSB64 `func_ovl0_800CEF4C` frontier

Private handoff repository for the final unmatched function in
`ssb-decomp-re`.

## Current frontier

The hosted `Rom0j` frontier scores **10 / 99.9947644%**. Relocation-aware local
comparison reduces the residual to exactly **one instruction word**: row 49
uses `addiu t3,v1,-250`, while the target uses `addiu t3,v0,-250`. All 1,868
instructions, opcodes, floating-point registers, branch/gap structure, and the
`-168` stack frame otherwise match.

Compiler-phase capture shows UGEN already emits the target register. Stock
IDO 7.1 `as1` alone propagates the preceding `v1 -> v0` copy back into the
high-range subtraction. `FABLE_HANDOFF.md` v4 records the exact phase proof,
the zero-output Binasm barriers that reproduce the ROM, and the 3,654-variant
source corpus. No proper zero-word C source is claimed yet.

`scratch/source.c` is paste-ready. Use IDO 7.1 with `-O2 -mips2`.

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
