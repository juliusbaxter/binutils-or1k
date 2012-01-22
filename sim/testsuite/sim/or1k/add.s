	/*
	 add test. 1+2 should = 3 
	# mach(): all

	*/
	.include "testutils.inc"

	start
	mvi_h_gr r4, 1
	mvi_h_gr r5, 2
	l.add 	r4, r5, r4
	test_h_gr r4, 3
	pass
	
