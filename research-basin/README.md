# Research basin: 27-word schedule-perfect alternate family

`basin27-champion.c` (sha256 bc2b6bf625ee498fbf755cb70f6f87773a700e8a48d97255503fff556ce7ab13) compiles (with `../../ref5/ctx.c` include
resolution from the main checkout's `.workbench/cef4c/agent-fp-tail/<dir>/`
depth) to op=0 / gaps=0 / insns=1868 / frame=-168 / **27 words** against
`ref5/target.o` — two words behind the hosted 25-word frontier, but with
temp2=f16, temp1=f14, f1=f12, cx1=f16+correct-spill all HEALED (the four webs
provably unreachable from the 25-word family). See ALLOCATOR_MODEL.md.

Remaining: sx3a/sx4 (want f18), cx2-head (want f12), const-web (want f14),
f0-product (want f2), integer a0/v1 family, row 49. The row-49 integer site
heals with `if (!command);` before the switch at +8 collateral (net 35).

Not promoted: hosted metric tracks raw bytes; 27w raw=39 > frontier raw=37.
