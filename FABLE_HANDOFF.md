# Continuation handoff v4: `func_ovl0_800CEF4C`

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

## Decisive compiler-phase result

The candidate already emits `move v0,v1` on row 48, exactly like the target.
Only the following switch-range `addiu` consumes the old `v1` representative;
the target consumes the new `v0` copy. Capturing IDO's intermediate Binasm
stream isolates the residual more tightly than the object diff:

- UGEN already emits the target sequence:
  `move $2,$3; blt $2,209,...; addu $11,$2,-250`.
- Stock IDO 7.1 `as1` rewrites only the fallthrough `addu` source from `$2`
  to `$3` by path-local copy propagation.
- IDO 7.1-t4 behaves identically. Feeding the same stream to IDO 5.3 `as1`
  also performs the row-49 propagation (and changes unrelated late code).

This is therefore an assembler copy-propagation problem, not UGEN scheduling,
FP allocation, opcode selection, or frame layout.

At the Binasm boundary, inserting a zero-output barrier only around the `addu`
produces a literal zero-word object while retaining all 1,868 instructions.
The following diagnostic-only insertions each prove that result:

- `.set nomove` / `.set move` around the `addu`;
- `.set volatile` / `.set novolatile` around the `addu`;
- `.set noreorder` / `.set reorder` around the `addu`;
- an assembler pseudo-`nop` immediately before the `addu` (removed by `as1`);
- a physical `move $3,$3` or `or $3,$3,$0` immediately before the `addu`
  (also removed by `as1`).

The same no-op records before the generated `move`, between the `move` and
branch, or after the `addu` do not work. The barrier must occur on the high
switch edge after the range branch and before subtraction. These patched
streams are proof of the phase and exact target, not acceptable C solutions.

## Source-level donor evidence

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

The local result corpus now contains 3,654 successfully compiled and statically
compared variants (plus 32 rejected compilations), with no generated object
executed. It includes the earlier 796-candidate campaigns plus:

1. 84 switch spellings, types, local carriers, normalization spellings,
   declaration adjacency variants, and junction donor pairs.
2. 269 Pokemon Snap-style declaration positions, command types, CFG read
   placements, carrier widths, and placement crosses.
3. 443 repeated/distinct opcode expressions, compound donor expressions,
   multiplicity probes, and early-opcode/pre-switch-command crosses.
4. SSA/junction, line-packing, missing-case, case-local read, donor-cross,
   explicit-default, forwarding-case, and high-case value grids.
5. Explicit high/low switch partitioning and edge-local carrier/no-op shapes.
6. `u16` dispatch webs crossed with RHS/use-site narrowing, join narrowing,
   donor order, and scalarized struct/union/bitfield representations.
7. Compiler-only pragma, source-location, local-label, assembler-mode,
   identity-instruction, alias metadata, compiler-version, and debug-mode
   diagnostics.

The important invariant is sharp: reads before the first opcode mask retain the
one-word baseline; command reads from the first mask onward heal row 49 but
enter the same nine-word integer rotation. Repeated reads are allocator-
idempotent. All useful donor basins retain `opcodes=0`, `gaps=0`, and `fp=0`.

Late dead reads of `sx3` or `angle_id` are not useful on this source family;
they disrupt the otherwise exact vortex schedule.

## Current conclusion and next attack

The score-10 scratch is not mathematically proven C-impossible, but it is a
compiler-fixed frontier: stock C reaches an exact UGEN stream and loses one
register only in `as1`. Conventional C spellings tested so far cannot place an
optimizer-erased `$3` read inside the compiler-generated switch dispatcher.

The remaining credible source attack is to make UGEN retain a second coalesced
copy specifically on the high-range edge of a *single* switch. A useful
candidate must produce an identity record between the generated `blt` and
`addu` without changing the single-switch block/table order. More declaration,
empty-read, case-hole, split-switch, or ordinary cast grids are low value: those
dimensions are now experimentally saturated.

If project policy permits a source-to-assembly splice, the proven one-record
barrier gives an exact object immediately. It does not constitute a matching C
decomp.me scratch and must not be represented as 100% source decompilation.

Do not disturb the vortex tail unless a candidate first retains the exact FP
schedule. The previous 25/27/21-word research families are obsolete as
frontiers; they remain useful only for allocator archaeology.

## Promotion protocol

Promote only a genuine zero-word local result followed by hosted confirmation.
For exact 100%, use the commit subject exactly:

`EXACT 100%: match func_ovl0_800CEF4C`
