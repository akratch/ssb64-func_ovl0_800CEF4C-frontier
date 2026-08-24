# The truncated target: why a correct source can still score 5

After the source reached zero differing instruction words locally, a hosted
comparison against one circulating target object for this function still
reported a score of 5. The five points are not code. They are data the
target is missing.

## The analysis

Comparing the compiled object with that target at the ELF level:

* `.text` — byte-identical. All 1,868 instructions, every relocation site
  equivalent.
* `.rodata` — **368 bytes in the compiled object, 348 in the target.**

The 20-byte difference is five words: four copies of `0x4422F983`
(651.8986…, which is `2048/π` — the sine-table index scale factor, one copy
per sincos call site, exactly as IDO emits per-use-site floating-point
literals) plus a four-byte alignment pad. The target's `.text` loads those
four constants through `$at` from four *external* symbols with consecutive
addresses; the compiled object loads them from its own `.rodata` at offsets
348–360.

## The ROM decides which is right

The function's jump tables occupy 348 bytes of `.rodata`. Reading the ROM
immediately after them — at the virtual address the four external symbols
name — gives:

```
4422F983 4422F983 4422F983 4422F983
```

contiguous with the tables, followed by unrelated data. The literal pool is
real, belongs to this function's compilation unit, and sits exactly where a
locally compiled object puts it. The extraction that produced the target
symbolized those four words as external data objects and cut the function's
`.rodata` off at the jump tables' end — 348 bytes instead of 368. The
truncation is invisible from the object alone because the section ends
exactly at a plausible boundary; the coincidence *is* the tell.

Source-level workarounds do not exist: replacing the literals with reads of
extern (or extern const) variables changes their optimization class from
constants to aliased memory loads, and the schedule breaks by hundreds of
words. The correct fix is to the target: extend its `.rodata` to the true
368 bytes (append the four literal words and the pad, repoint the section
header). Against a corrected target, the source scores exactly zero.

## For project integration

When this function lands in its project source file, the compiler will emit
the four literals in the translation unit's own `.rodata`, matching the
ROM. Any symbol map entries treating those four words as separately
extracted data objects must be removed, or the build will duplicate them.

## The general lesson

A campaign target is data, not ground truth. This defect cost nothing until
the very end — every intermediate score was self-consistent — and then
surfaced as a phantom residual on a finished match. Checking a target's
section scope against the ROM before matching (is `.rodata` truncated
exactly at a jump-table boundary while `.text` loads consecutive external
constants through `$at`?) takes a minute and is now automated as
`target audit` in
[n64-decomp-workbench](https://github.com/akratch/n64-decomp-workbench).
