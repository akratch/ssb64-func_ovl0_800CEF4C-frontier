# Scratch bundle

`source.c` is the matched source; `context.c` is the compilation context.
Compiler: **IDO 7.1**, flags: **`-O2 -mips2`**, language C.

No target is included — this repository ships no ROM-derived material. Use
a target extracted by [ssb-decomp-re](https://github.com/vetritheretri/ssb-decomp-re)'s
tooling from your own ROM, or an existing decomp.me scratch for
`func_ovl0_800CEF4C`. If your target scores this source at 5 rather than 0,
read [../docs/target-rodata-defect.md](../docs/target-rodata-defect.md):
the target is missing the function's 20-byte literal pool.

## decomp.me steps

1. <https://decomp.me/new>: platform `n64`, preset Custom, compiler
   `ido7.1`, flags `-O2 -mips2`, language C.
2. Diff label `func_ovl0_800CEF4C`; supply your target.
3. Paste `context.c` into the context tab, `source.c` into the source tab.
4. Compile. Against a correctly scoped target the score is 0.

## Local build

```sh
cat context.c source.c > flat.c
cc -c -G 0 -non_shared -Xfullwarn -Xcpluscomm -Wab,-r4300_mul \
   -woff 649,838,712 -O2 -mips2 -o flat.o flat.c
```

with `cc` from the IDO 7.1 recompiled toolchain, then compare `flat.o`
against your extracted target object.
