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
  to `$3` by path-local copy propagation. Static reverse-engineering and
  `-peepdbg 2` identify the responsible routine specifically as `peep_reg`
  (original `as1` at `0x4180dc`--`0x418d33`), not the separate `repl_reg`
  routine. The decisive log line is
  `Peepreg (INST 1) changed rs 2 => 3`.
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
- a branch to its immediately following local label at the same boundary.
  `b`, always-true `beq`, register self-`beq`, and never-taken `bnez $0`
  forms all reduce to zero code while their transient basic-block boundary
  clears the copy fact.

The same no-op records before the generated `move`, between the `move` and
branch, or after the `addu` do not work. The barrier must occur on the high
switch edge after the range branch and before subtraction. These patched
streams are proof of the phase and exact target, not acceptable C solutions.

An exhaustive follow-up duplicated every distinct non-instruction Binasm
directive family observed in the real function at the pre-`addu` boundary.
None blocks the rewrite. This includes LOC/file/section/function metadata,
`.option O2`, alias/noalias and call metadata, mode-restoration records, frame
metadata, and local labels. The only exact artificial insertions remain the
three one-instruction mode spans, optimizer-erased physical identities, and
removable next-label edges listed above.

The corresponding source shortcut is also closed. IDO 7.1 CFE's complete
pragma table has no inline-assembly, assembler-mode, or per-region optimization
pragma. A 25-form source grid showed the accepted spellings emit byte-identical
UGEN streams; `asm`, `__asm`, and `__asm__` are parsed as ordinary implicit
function calls rather than inline assembly.

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

The local result corpus now contains at least 4,890 successfully compiled and
statically compared source variants (plus rejected compilations), with no
generated object executed. It includes the earlier 796-candidate campaigns plus:

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
8. 70 controlling-expression identity/conversion spellings, followed by a
   705-variant cast/donor cross. Ordinary identities fold to the one-word
   basin; narrowing conversions move normalization before the range branch
   and retain a 15-word structural residual.
9. 291 declaration/order/qualifier/dummy-symbol/read crosses on the healed
   donor basin. All row-49 healers collapse to the same nine-word `v1`/`a1`
   rotation; 101 variants are byte-identical to that basin.
10. 170 high-edge CFG variants covering out-of-domain cases, fallthroughs,
    impossible edges, and direct forwarding edges. None creates the required
    post-range predecessor/barrier; `case 256`/`257` stays closest at two
    words by extending the high range.

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

The active high-value searches are algebraically equivalent selector/case
transformations and static reconstruction of UGEN's switch partitioning. The
new branch-to-next result makes a removable source edge at the high-cluster
entry equally valuable. A secondary route is a source shape that gives the
high subtract block multiple predecessors: `as1`'s `update_ctnt` only carries
the `$2 := $3` fact into a new basic block when it has one immediately
preceding predecessor and no second predecessor.

## Reusable workbench improvement

`n64-decomp-workbench` main commit `b94d0c95e28280a76594d5695e72f1e66fbccfc8`
adds `decomp-workbench pass binasm`. It statically decodes retained Binasm,
prints an instruction window around a byte boundary, correlates `as1`
peephole-debug evidence, and summarizes artificial barrier probe results. It
was exercised against the real captured stream and correctly reports the
`move`/range-branch/`addu` sequence and all twelve exact artificial barriers.

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
