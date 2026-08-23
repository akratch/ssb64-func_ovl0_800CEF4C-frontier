# Fable handoff: `func_ovl0_800CEF4C`

## Mission and current truth

Finish the last unmatched function in `ssb-decomp-re` with an exact IDO 7.1
match. Do not declare victory until both the local object comparison is exact
and decomp.me reports 100%.

- Authoritative hosted frontier: **177 / 99.91%** (lower score is better),
  reported by the user after pasting the source in this repository.
- Local frontier: **25 differing instruction words**: raw 37, normalized 21,
  21 register sites, 20 FP sites, four constant/stack-home sites, zero opcode
  mismatches, zero alignment gaps, 1,868 instructions, frame `-168`.
- Local verdict: `allocation-mismatch`; first divergent row is 49.
- Private frontier repository: <https://github.com/akratch/ssb64-func_ovl0_800CEF4C-frontier>
- Hosted-score metadata revision: `7ba50e8`; use the current `main` tip for
  this handoff.
- Paste-ready frontier: `scratch/source.c`.
- Target/context: `scratch/target.s` and `scratch/context.c`.

Pinned identities:

```text
source.c  85be7a0a1063bb6f62a909f8cdf5805fca56840b15c684fc2edc9838c1e26d3d
context.c 2801f1a6da7f6dfadce31ea13360260241585cf4ff77ddabb78a8c9298671cd8
target.s  d30e57c65ca1be9f94a9c137fb1155ca90c217b0aa3e59e9bc313d7cd397a0b1
target.o  a50945f4dfa8ec988445ae92b6b2517eddaaf69096087f640af75b844fc1c122
```

## Local workstation state

The main checkout is:

```text
/Users/adamkratch/Desktop/dev/decomp_playground/ssb-decomp-re
```

It is dirty with unrelated user changes and is six commits behind its remote.
Do not reset, clean, overwrite, or integrate into `src/lb/lbparticle.c` before
an exact match. All research artifacts are under `.workbench/cef4c/`.

The exact locally compilable 25-word source is:

```text
.workbench/cef4c/agent-fp-tail/sources-25-ast-fp22-combo/astfp22combo__hybrid0562__posy-cba__posz-c-negb-a.c
```

Its already-built object is:

```text
.workbench/cef4c/agent-fp-tail/objects/astfp22combo__hybrid0562__posy-cba__posz-c-negb-a.o
```

The comparison target is:

```text
.workbench/cef4c/ref5/target.o
```

Reproduce the current local result from the main checkout with:

```sh
decomp-workbench compare \
  .workbench/cef4c/ref5/target.o \
  .workbench/cef4c/agent-fp-tail/objects/astfp22combo__hybrid0562__posy-cba__posz-c-negb-a.o \
  --json | jq '{accepted,words,raw,norm,regs,fp,gaps,opcodes,insns,frame,first_divergent_row,verdict}'
```

Compile candidates from the main checkout with the exact command shape below.
Use `nice -n 10` and never exceed two compiler jobs globally:

```sh
nice -n 10 tools/ido-recomp/7.1/cc \
  -c -G 0 -non_shared -Xfullwarn -Xcpluscomm \
  -Wab,-r4300_mul -woff 649,838,712 \
  -O2 -mips2 -o CANDIDATE.o CANDIDATE.c
```

Candidate sources in `.workbench` include `../../ref5/ctx.c` and are directly
compilable. The flat `scratch/source.c` is intended for decomp.me/workbench
scratch import alongside `scratch/context.c`.

## Residual allocator problem

The program shape is already exact. The hard part is IDO `uopt` global-color
allocation around the final transform. The 25-word source currently colors
the important FP webs as follows:

| Web/value | Current | Target |
|---|---:|---:|
| `cx2` | `$f18` | `$f12` |
| shared third/fourth sine `sx3` | `$f12` | `$f18` |
| saved `temp2` | `$f14` | `$f16` |
| `temp1` / negated product | `$f16` | `$f14` |
| `f1` tail product | `$f18` | `$f12` |

The tail uses `pos.y` term order C+B+A and `pos.z` C-negB-A, plus the two
intentional empty reads `if (!f0); if (!temp2);`. Those spellings heal tail
identity/tie behavior, but they do not alter the three core allocation
priorities: `cx2`, `sx3`, and `temp2`.

The remaining integer mismatch is row 49: target uses `$v0` in
`addiu t3,v0,-250`; current uses `$v1`. A self-equality donor can heal this,
but the cleanest known healed basin is 37 local words with 13 collateral
integer sites. The cleanest near-basin is 33 words with nine integer sites but
still uses `$v1`. Do not trade the 25-word frontier for either yet.

## Instrumented allocator evidence

An isolated, faithful IDO 7.1 `uopt` trace toolchain exists at:

```text
.workbench/cef4c/ido71-instrumented/
```

Read these first:

```text
.workbench/cef4c/ido71-instrumented/README.md
.workbench/cef4c/ido71-instrumented/canonical-class2-map.md
.workbench/cef4c/ido71-instrumented/traces/fp20-ast-cba/fp20-ast-cba.a71
```

The instrumented compiler was proven section/relocation-identical to stock;
it only emits `[A71]` trace lines. The FP20 trace shows:

- `cx2`: web 572, save `0x3f19999a`, remains `$f18`.
- combined `sx3`: web 609, save `0x402aaaab`, remains `$f12`.
- `temp2`: web 637, save `0x3fd55556`, remains `$f14`.
- CBA only renumbers/equal-ties tail webs 674/676.

This proves more declaration/name/operand permutations are unlikely to move
the core. The next lever must change web formation or interference while
preserving the opcode sequence.

## Ready-to-run staged campaign

A new scalar-only lifetime-split wave was staged but deliberately not compiled
before handoff:

```text
sources:  .workbench/cef4c/agent-fp-tail/sources-ast25-scalar-lifetime-split/
manifest: .workbench/cef4c/agent-fp-tail/ast25-scalar-lifetime-split-manifest.json
generator:.workbench/cef4c/agent-fp-tail/gen_scalar_lifetime_split_wave.py
```

There are 24 candidates; compile only the manifest's 12 `priority_names`
first. They cross three `cx2` handoff boundaries with three `sx3` call-three /
call-four lifetime cuts, plus three dormant-carrier controls. They start from
the strict 25-word CBA source and add no arrays, new scalar locals, or statement
CFG. This nonlinear cross was not previously run on the FP20 base. Apply the
strict 1,868/opcode/gap/frame gates below and stop to trace any new basin.

## Best new campaign after the staged tranche

The strongest untried lead is an FP20-specific **update-web formation** matrix.
Make only equivalent assignment-spelling changes on the 25-word source:

1. Change `cx2 *= (1.0F / 32768.0F)` to
   `cx2 = cx2 * (1.0F / 32768.0F)` first, then try the 4-bit matrix over the
   four `sx1/cx1/sx2/cx2` normalizations.
2. Independently try historical `/= 32768.0F` spelling, `cx2` alone first,
   then selected normalization combinations.
3. On survivors that remain 1,868/opcode-exact, cross the two `sp70[0]`
   updates:
   - `sp70[0] += vel.z * (sx3 / cx3)` versus explicit
     `sp70[0] = sp70[0] + ...`.
   - `sp70[0] *= vel.y` versus explicit `sp70[0] = sp70[0] * vel.y`.
4. Only retain candidates with frame `-168`, 1,868 instructions, zero opcode
   mismatches, and zero gaps. Trace any new allocation basin before expanding
   it.

Useful old transformation examples, which must be rebased onto the FP20 source
rather than copied wholesale:

```text
.workbench/cef4c/agent-allocator/gen_lifetime_wave.py
.workbench/cef4c/agent-allocator/sources-lifetime-wave/normalize-simple-*.c
.workbench/cef4c/agent-allocator/sources-archive-formation/archive-exact-decls__scale-divide.c
```

The inventory helper can prove a compiled object was not overlooked:

```sh
python3 .workbench/cef4c/index_text_distances.py \
  .workbench/cef4c/ref5/target.o .workbench/cef4c \
  --sort raw --limit 100
```

It previously scanned about 4,300 unique `.text` bodies and found no hidden
same-length result below 25 local real words.

## Experiments to avoid repeating

These have already been broadly exhausted or were structurally harmful:

- declaration order, scope, aliases, `register` qualifiers, macro/line tricks;
- operand/term permutations, normalization order, internal/precomputed product
  forms, direct-tail and archive declaration bundles;
- empty-read/deadread phase campaigns and their compositions;
- field/storage representations and one/two-element array matrices;
- distinct call-four `sx4`, new `sx5`, call-three copy, and dormant-donor sine
  splits;
- statement-CFG/split-live composition (the dual composition was 283 words,
  231 opcode mismatches, 24 gaps, and 1,872 instructions);
- row-49 self-equality/cross-boundary campaigns beyond the two known basins;
- composing the 46-op and 58-op sine-split basins: effects are non-additive.

The distinct sine split can obtain desired `cx2=$f12` and call-four
`sx=$f18`, or desired `temp2=$f16` and call-four `sx=$f18`, but it leaves the
old sine web wrong and costs 46-58 opcode sites. It is evidence about the
allocator, not a frontier to extend directly.

## Promotion protocol

For every genuine hosted improvement below 177:

1. Replace both `scratch/source.c` and `decomp.me-export/code.c` with identical
   bytes.
2. Update checksums and `frontier-metrics.json` with local and hosted evidence.
3. Commit and push `main` to the private frontier repository immediately.
4. Do not modify the main project's `src/lb/lbparticle.c` until exact.

At exact 100%, verify zero local word/opcode/gap/register/FP differences and a
100% decomp.me result. Use this unmistakable commit subject:

```text
EXACT 100%: match func_ovl0_800CEF4C
```

Then push the private repository and report the commit and URL loudly.

## Workstation guardrails

This Mac is an occupied interactive workstation. Do not run test runners,
generated test executables, ROMs, browsers, GUI apps, emulators, simulators,
or browser automation. Source inspection, object comparison, compiler tracing,
and bounded compilation are allowed. Run compilation at low priority with no
more than two jobs, and never execute generated objects/binaries.
