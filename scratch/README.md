# decomp.me scratch bundle

Project: `ssb-decomp-re`.

## Frontier status

This source scores **177 / 99.91%** on decomp.me, advancing the exported
`FDgt8` scratch (hosted score 190). The local whole-section comparison is down
to 25 differing instruction words. It has the
exact 1,868-instruction shape, opcode sequence, branch/gap structure, and
`-168` stack frame. The residual is 20 floating-point register sites, one
integer register site, and four stack-home offsets.

This is the current hosted and local research frontier. `source.c` is
paste-ready.
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
