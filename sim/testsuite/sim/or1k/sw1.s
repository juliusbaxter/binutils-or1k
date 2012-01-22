/* store byte test (actually also uses load byte ) */
# mach(): all
	.include "testutils.inc"

        start

	/* store half test (actually also uses load byte ) */
	l.movhi	r0, 0
	mvi_h_gr r4, 0x1000
	mvi_h_gr r2, 0xaabbccdd
	l.sw	0(r4),r2
	/*now load the bytes back and check them */
	l.lbz	r2,0(r4)
	test_h_gr r2, 0xaa
	l.lbz	r2,1(r4)
	test_h_gr r2, 0xbb
	l.lbz	r2,2(r4)
	test_h_gr r2, 0xcc
	l.lbz	r2,3(r4)
	test_h_gr r2, 0xdd
	pass
