# Superseded intermediate sources

Kept as evidence for the documents in `../docs/`; none of these is the
match. Each was the best result of an approach that was later replaced.

| File | What it was |
|---|---|
| `fp-registers-27words.c` | Best result of an earlier approach focused on floating-point register assignment: 27 differing instruction words, all register-only, with an otherwise exact instruction schedule. It proved four specific register assignments reachable that earlier variants of that approach provably could not produce, and was retired when a simpler baseline turned out to be only one word away. |
| `integer-registers-3words.c` | The source demonstrating that a single empty statement can produce the target's complete integer register assignment (`docs/register-steering.md`): three differing words. |
| `first-assembler-barrier.c` | The first source to prevent the assembler's register rewrite from C (`docs/as1-barrier.md`), written before the block-layout construction existed: the first 58 instructions match exactly, but the high-value case bodies sit in the wrong place. |
