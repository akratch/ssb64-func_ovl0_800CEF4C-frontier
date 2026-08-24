# Glossary and background

Terms used throughout these documents, defined once here. Readers familiar
with N64 decompilation can skim; the IDO-specific entries matter even for
experienced contributors, because several findings live inside compiler
internals that normal matching work never touches.

## The compiler

**IDO** is SGI's MIPS compiler, used for most N64 games. It is a pipeline
of separate programs, each reading the previous one's output:

```
cfe  →  uopt  →  ugen  →  as1
```

* **cfe** — the C front end. Parses C and emits a binary intermediate
  representation called **Ucode**: a flat stream of typed records (load,
  store, jump, label, compare, …). cfe's output follows the source
  structure closely; it does very little optimization.
* **uopt** — the global optimizer. Reads Ucode, performs register
  allocation, common-subexpression elimination, jump simplification, and
  block reordering, and writes optimized Ucode.
* **ugen** — the code generator. Turns optimized Ucode into **Binasm**, a
  binary stream of fixed 16-byte records that each describe one MIPS
  instruction, label, or directive. This is the assembler's input.
* **as1** — the assembler. Schedules instructions, fills branch delay
  slots, runs its own peephole optimizations, and writes the final object
  file. Several findings here hinge on the fact that as1 makes real
  code-changing decisions of its own — it is not a passive translator.

"Phase capture" means saving the intermediate stream between two of these
programs (cfe's Ucode, uopt's Ucode, ugen's Binasm) so it can be decoded,
compared, or edited. "Patching a stream" means editing those records
directly and running only the later phases on the result — a way to test
what a compiler pass *would* do with an input no source code currently
produces.

## Comparison terms

* **Target** — the original function's machine code, extracted from the
  ROM as an object file. Matching means compiling C that reproduces it
  byte for byte.
* **Differing words** — the number of 4-byte instruction words that differ
  between the compiled function and the target, after aligning the two
  instruction streams. Zero differing words with equal instruction counts
  and stack frames is a byte-exact match. (Relocation entries — references
  to symbols the linker resolves — are compared by meaning, not raw bytes.)
* **Row** — an instruction's position in that aligned comparison. "Row 49"
  means the 49th instruction of the function. Rows are how a single
  differing instruction is referred to precisely.
* **Fakematch** — community term for source that compiles to the correct
  bytes using constructs the original developers plainly did not write —
  code shaped to steer the compiler rather than to express the original
  program. The opposite is a "natural" or idiomatic match.

## Machine-code terms

* **Basic block** — a straight-line run of instructions with one entry and
  one exit. Compilers and assemblers reason in blocks; several effects
  here depend on exactly where one block ends and the next begins.
* **Fallthrough** — reaching the next block by not taking a branch, as
  opposed to arriving as the target of a jump.
* **Branch delay slot** — on MIPS, the instruction immediately after a
  branch executes regardless of whether the branch is taken. Compilers
  place useful instructions there; which instruction lands in a delay slot
  is part of a match.
* **Branch-to-next** — a branch whose target is the instruction
  immediately after it. Executing it changes nothing, so assemblers delete
  such branches — but, as documented here, deleting one is not always free
  of side effects on the assembler's own bookkeeping.
* **Jump table / dispatch** — a dense `switch` compiles to: subtract the
  lowest case value from the selector, bounds-check the result, and jump
  through a table of addresses. This function has two such tables (a "low"
  and a "high" cluster of case values) behind one shared range test.
* **Selector** — the value a `switch` dispatches on.
* **Peephole** — an optimizer that rewrites short instruction sequences by
  pattern. as1's peephole tracks **copy facts**: after `move v0, v1` it
  records "v0 currently equals v1" and may rewrite later uses of `v0` to
  `v1` while that note remains valid. A copy fact dies at a basic-block
  boundary unless the next block is entered only by fallthrough from this
  one.

## Register-allocation terms

* **Web** (also called a live range) — the unit IDO's register allocator
  assigns registers to: one variable's connected set of definitions and
  uses. A single source variable can be split into several webs, and
  several values can fuse into one web.
* **Spill** — storing a value to the stack because no register is
  available; its stack address ("home") is part of a byte-exact match.
* **Register rotation** — a set of webs each receiving the wrong register
  in a consistent permutation (the code is otherwise identical). Rotations
  show up as clusters of differing words where only register numbers
  disagree.
* **Priority coloring** — the allocator ranks webs by a priority formula
  and assigns registers ("colors") in rank order; each web takes the
  lowest-numbered register not already claimed by a neighbor it overlaps
  with. The measured details are in
  [allocator-model.md](allocator-model.md).
