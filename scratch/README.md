# decomp.me scratch bundle

Project: `ssb-decomp-re`.

## Frontier status

This is a measurable improvement over exported scratch `3Qcp4` (hosted score
999): the local whole-section comparison drops from 162 differing instruction
words to 90. The generated code has the exact 1,868-instruction shape, opcode
sequence, branch/gap structure, and `-168` stack frame. The remaining local
differences are register allocation (89 floating-point sites and one integer
site).

The preceding 116-word frontier scored **934 / 191000** on decomp.me. This
90-word frontier is awaiting a hosted score. `source.c` is paste-ready.
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
