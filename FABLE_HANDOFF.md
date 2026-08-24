# Continuation handoff v3: `func_ovl0_800CEF4C`

## Current truth (2026-08-24)

- Hosted challenger: decomp.me `Rom0j`, parent `S4NAi`, score **10 / 191000
  (99.9947644%)** with IDO 7.1 and `-O2 -mips2`.
- Relocation-aware local comparison is stronger than the hosted weighted score:
  the residual is exactly **one generated instruction word**, not ten words.
- Candidate row 49: `addiu t3,v1,-250` (`0x246BFF06`).
- Target row 49: `addiu t3,v0,-250` (`0x244BFF06`).
- All 1,868 instructions, opcodes, FP registers, scheduling/gaps, and the `-168`
  frame otherwise match. Local metrics are `words=1`, `regs=1`, `fp=0`,
  `opcodes=0`, `gaps=0`, `norm=1`, `raw=7`.
- `scratch/source.c` and `decomp.me-export/code.c` preserve the challenger
  source byte-for-byte. The source SHA-256 is
  `323eeb5eb7b632399d5c0e3896ac28385a2a1eefa4715c9f6e58a41e816357b7`.

The supplied `(5).zip` SHA-256 is
`5384a739ebe88e731a55735d21032fec250a543086a80e6d3fb29e5e706cb4e8`.
Its target object is byte-identical to the established campaign target
(`a50945f4dfa8ec988445ae92b6b2517eddaaf69096087f640af75b844fc1c122`).

## Why this remains plausibly solvable

The candidate already emits `move v0,v1` on row 48, exactly like the target.
Only the following switch-range `addiu` consumes the old `v1` representative;
the target consumes the new `v0` copy. This is an IDO UGEN/copy-coalescing
choice, not an opcode, scheduling, floating-point, or frame mismatch.

Adding `if (!command);` immediately before `switch (opcode)` makes row 49 use
the correct `v0`, proving that source shape can select the target copy. Its
collateral is a fixed nine-word `v1`/`a1` rotation on rows 36, 38, 40, 41, 43,
44, 45, 46, and 48. The remaining task is therefore to keep that healed copy
choice while restoring the two integer web colors.

Allocator traces explain the rotation:

- Baseline: web 35 priority 20 pops to color 2 (`v1`); webs 23 and 48 have
  priority 15 and take colors 3/4.
- Donor: web 48 remains priority 15 and pops first to color 2; webs 23 and 35
  fall to priority 13.333 and take colors 3/4.

## Exhausted probes on the score-10 source

Three bounded, serial, low-priority campaigns compiled and statically compared
796 variants without executing generated objects:

1. 84 switch spellings, types, local carriers, normalization spellings,
   declaration adjacency variants, and junction donor pairs.
2. 269 Pokemon Snap-style declaration positions, command types, CFG read
   placements, carrier widths, and placement crosses.
3. 443 repeated/distinct opcode expressions, compound donor expressions,
   multiplicity probes, and early-opcode/pre-switch-command crosses.

The important invariant is sharp: reads before the first opcode mask retain the
one-word baseline; command reads from the first mask onward heal row 49 but
enter the same nine-word integer rotation. Repeated reads are allocator-
idempotent. All useful donor basins retain `opcodes=0`, `gaps=0`, and `fp=0`.

Late dead reads of `sx3` or `angle_id` are not useful on this source family;
they disrupt the otherwise exact vortex schedule.

## Recommended next attack

Focus on changing SSA formation rather than adding more empty reads:

- Fold the first assignment into the condition:
  `if ((opcode = (command & 0xF8)) > 0x98)`.
- Fold the second assignment into the first inner comparison.
- Test `opcode = command; opcode &= 0xF8` and the analogous `0xF0` form.
- Split the raw command through a temporary at the load, selectively using the
  alias for normalization versus case-flag reads.
- Test zero-code label/goto junction shapes that can alter UGEN block identity
  without adding a condition web.

Do not disturb the vortex tail unless a candidate first retains the exact FP
schedule. The previous 25/27/21-word research families are obsolete as
frontiers; they remain useful only for allocator archaeology.

## Promotion protocol

Promote only a genuine zero-word local result followed by hosted confirmation.
For exact 100%, use the commit subject exactly:

`EXACT 100%: match func_ovl0_800CEF4C`
