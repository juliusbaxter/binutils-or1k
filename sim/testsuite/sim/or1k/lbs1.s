/* load byte sign-extended test */
# mach(): all
	.include "testutils.inc"

	start
	l.movhi	r0, 0
	l.ori	r4,r0,0x1000
	l.lbs	r3,0(r4)
#	l.nop	2
	test_h_gr r3, -1

	l.lbs	r3,1(r4)
#	l.nop	2
	test_h_gr r3, 0x7f

	pass

	.org 	0x1000
	.byte	0xff
	.byte	0x7f
	
