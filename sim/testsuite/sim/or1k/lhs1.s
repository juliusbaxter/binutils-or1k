/* load short sign-extended test */
# mach(): all
	.include "testutils.inc"

	start
	l.movhi	r0, 0
	l.ori	r4,r0,0x1000
	l.lhs	r3,0(r4)
#	l.nop	2
	test_h_gr r3, -2

	l.lhs	r3,2(r4)
#	l.nop	2
	test_h_gr r3, 0x7ffe

	pass

	.org 	0x1000
	.short	0xfffe
	.short	0x7ffe

