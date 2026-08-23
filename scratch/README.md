# decomp.me scratch bundle

Project: `ssb-decomp-re`.

## Frontier status

This Codex-race source scores **165 / 99.9136%** with decomp.me's current
`asm-differ` scorer, advancing the user-confirmed hosted frontier of 177. The
scorer was calibrated by reproducing that 177 result exactly. The local
whole-section comparison remains at 25 differing instruction words. It has the
exact 1,868-instruction shape, opcode sequence, branch/gap structure, and
`-168` stack frame. The residual is 24 floating-point register sites and one
integer register site; all four prior stack-home mismatches are exact.

This is the current site-faithful scoring frontier; direct hosted paste
confirmation is pending. `source.c` is paste-ready.
`../decomp.me-export/code.c` is an identical convenience copy alongside the
exported context and object files.

This directory is upload-neutral: creating it does not contact decomp.me.

1. Open <https://www.decomp.me/new>.
2. Choose platform `n64`.
3. Set **Preset** to **Custom**.
4. Under **Compiler options**, select compiler `ido7.1` (canonical compiler id `ido7.1`).
5. Verify the language is `C`.

Then use diff label `func_ovl0_800CEF4C`, paste `target.s` into **Target
assembly**, paste `context.c` into **Context**, create the scratch, and paste
`source.c` into the source editor.

If a preset was not selected, use these compiler flags:

   ```text
   -O2 -mips2
   ```

Run `decomp-workbench check-scratch .` from this directory before sharing. It
verifies `SHA256SUMS`, the manifest, and the three copied inputs consistently
on every supported platform. `scratch.json` contains the same settings and
content identities in a machine-readable form.
