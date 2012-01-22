	/*check execution of immediate ALU ops, mainly that the sign extension
	on the immediates is done correctly */
# mach(): all
	.include "testutils.inc"

        start

	l.movhi	r0, 0

	mvi_h_gr r2,0x00800000
	mvi_h_gr r4,0x007ffff8

	l.addi	r2,r2,-8 /* should turn into r2 + 0xfffffff8 */
	l.sfeq	r2,r4
	test_h_condbit	1

	mvi_h_gr r2,0x00808000
	mvi_h_gr r4,0x00008000

	l.andi	r2,r2,0xffff /* should turn into r2 & 0x0000ffff */
	l.sfeq	r2,r4
	test_h_condbit	1


	/* Don't really need a test for l.ori, it's pretty clear it works */

	mvi_h_gr r2,0x00808000
	mvi_h_gr r4,0xff7f7fff

	l.xori	r2,r2,0xffff /* should turn into r2 ^ 0xffffffff */
	l.sfeq	r2,r4
	test_h_condbit	1

	mvi_h_gr r2,0x00000002
	mvaddr_h_gr r4,0xfffffff8

	l.muli	r2,r2,-4 /* should turn into r2 * 0xfffffffc */
	l.sfeq	r2,r4
	test_h_condbit	1

	
	pass
