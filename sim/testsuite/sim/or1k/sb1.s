/* store byte test (actually also uses load byte ) */
# mach(): all
	.include "testutils.inc"

        start

	l.movhi	r0, 0
	l.ori	r1,r0,0x1000
	l.ori	r2,r0,0xaa
	l.sb	0(r1),r2
	l.ori	r2,r0,0xbb
	l.sb	1(r1),r2
	l.ori	r2,r0,0xcc
	l.sb	2(r1),r2
	l.ori	r2,r0,0xdd
	l.sb	3(r1),r2
	
	/*now load the bytes back and check them */
	l.lwz	r4,0(r1)
	test_h_gr r4, 0xaabbccdd
	pass

	
