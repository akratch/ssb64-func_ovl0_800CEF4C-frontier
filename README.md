# func_ovl0_800CEF4C — byte-exact match and compiler findings

Matched C source and supporting research for `func_ovl0_800CEF4C`
(`lbParticleUpdateStruct`), the last unmatched function in
[ssb-decomp-re](https://github.com/vetritheretri/ssb-decomp-re), the Super Smash
Bros. (N64, US) decompilation.

## Result

[`scratch/source.c`](scratch/source.c) compiles with IDO 7.1 at
`-O2 -mips2` to a byte-exact reproduction of the target: all 1,868
instructions, every register, the branch and jump-table structure, and the
−168 stack frame. Local comparison reports zero differing instruction
words; the only remaining differences against a correctly extracted target
object are relocation symbol names, which resolve identically at link time.

**This is a fakematch.** The source contains four constructs written to
force specific compiler decisions, not to reconstruct the original code.
[`MATCH_NOTES.md`](MATCH_NOTES.md) documents each construct, the measurement
behind it, the cost of removing it, and the three-property specification any
de-faked replacement must satisfy. That file is the recommended starting
point for maintainers.

## The short version of why this function was hard

A plain, idiomatic `switch` gets 1,867 of 1,868 instructions right. The
last one is rewritten not by the code generator but by the assembler:
IDO 7.1 `as1`'s peephole propagates a register copy into the switch
dispatch's high-table index, and no compiler option, pragma, or ordinary
source spelling suppresses it. The fix that works — three chained empty
conditional tests whose one surviving branch-to-next breaks the assembler's
copy chain and is then deleted at zero instruction cost — was proven by
patching the compiler's intermediate stream before a source spelling for it
existed. Two further constructs reproduce the dispatch layout and branch
parity, and one reproduces a stack-slot assignment. The full mechanism
write-ups are in [`docs/`](docs/).

## Verifying the match

On [decomp.me](https://decomp.me): create an N64 scratch with compiler
`ido7.1` and flags `-O2 -mips2`, paste [`scratch/context.c`](scratch/context.c)
as the context and [`scratch/source.c`](scratch/source.c) as the source, and
supply the target for this function. See the note on target scope below and
[`scratch/README.md`](scratch/README.md) for step-by-step instructions.

Locally: build the object with the same flags against the ssb-decomp-re
context and compare it with the function extracted from a legitimately
obtained ROM by that project's tooling.

This repository ships **no ROM-derived material** — no target objects, no
disassembly listings. The target must come from your own extraction.

### A note on target scope

If a target for this function scores the source at 5 instead of 0, the
target itself is missing data: the function's `.rodata` ends with four
copies of the constant `2048/π` (its per-call-site literal pool,
immediately after the jump tables), and at least one extraction in
circulation truncates `.rodata` before them.
[`docs/target-rodata-defect.md`](docs/target-rodata-defect.md) has the
analysis and the one-line ROM check that confirms the pool belongs to the
function.

## Contents

| Path | What it is |
|---|---|
| [`MATCH_NOTES.md`](MATCH_NOTES.md) | Each non-idiomatic construct: what it does, why, ablation costs, and the de-fake specification |
| [`scratch/`](scratch/) | The matched source and context, paste-ready for decomp.me |
| [`docs/as1-barrier.md`](docs/as1-barrier.md) | The assembler copy-propagation wall and the branch-to-next barrier, proven at the phase-stream level |
| [`docs/layout-and-partition.md`](docs/layout-and-partition.md) | Range-partition parity, block layout, and the nested-switch construction |
| [`docs/allocator-model.md`](docs/allocator-model.md) | The IDO 7.1 global register allocator: priority formula, tie-breaks, interference granularity, and the read-count dial |
| [`docs/o3and-counterdial.md`](docs/o3and-counterdial.md) | A donor-free register-rotation result that corrected an earlier working assumption |
| [`docs/target-rodata-defect.md`](docs/target-rodata-defect.md) | The truncated-target analysis |
| [`docs/results/`](docs/results/) | Machine-readable measurement results |
| [`history/`](history/) | Superseded intermediate sources kept as evidence |
| [`frontier-metrics.json`](frontier-metrics.json) | The final local comparison, machine-readable |

## Toolchain and method notes

All measurements used the stock IDO 7.1 recompiled toolchain used by
ssb-decomp-re. Phase-level claims (which pass owns which decision) come
from capturing and diffing the compiler's intermediate streams — cfe's
Ucode output, uopt's optimized Ucode, ugen's Binasm — and, where stated,
from replaying patched streams through the stock later phases. Allocator
claims come from an instrumented `uopt` build whose only change is trace
output, verified to produce byte-identical objects. The generic tooling
that grew out of this work (phase capture, stream patch/replay, target
auditing) lives in the
[n64-decomp-workbench](https://github.com/akratch/n64-decomp-workbench)
project.
