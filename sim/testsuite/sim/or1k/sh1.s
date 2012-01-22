/* store byte test (actually also uses load byte ) */
# mach(): all
	.include "testutils.inc"

        start

	/* store half test (actually also uses load byte ) */
	l.movhi	r0, 0
	l.ori	r4,r0,0x1000
	l.ori	r2,r0,0xaabb
	l.sh	0(r4),r2
	/*now load the bytes back and check them */
	l.lbz	r2,0(r4)
	test_h_gr r2, 0xaa

	l.lbz	r2,1(r4)
	test_h_gr r2, 0xbb
	pass
