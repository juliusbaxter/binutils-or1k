 .data
foodata: .word 42
 .text
footext:
	.text
	.global l_j
l_j:
	l.j -4
	l.j -4
	l.j foodata
	l.j 4
	l.j -4
	l.j foodata
	l.j -4
	l.j footext
	.text
	.global l_jal
l_jal:
	l.jal -4
	l.jal foodata
	l.jal footext
	l.jal footext
	l.jal 4
	l.jal foodata
	l.jal foodata
	l.jal footext
	.text
	.global l_jr
l_jr:
	l.jr r0
	l.jr r31
	l.jr r16
	l.jr r15
	l.jr r1
	l.jr r27
	l.jr r14
	l.jr r22
	.text
	.global l_jalr
l_jalr:
	l.jalr r0
	l.jalr r31
	l.jalr r16
	l.jalr r15
	l.jalr r1
	l.jalr r0
	l.jalr r11
	l.jalr r29
	.text
	.global l_bnf
l_bnf:
	l.bnf 4
	l.bnf foodata
	l.bnf foodata
	l.bnf footext
	l.bnf foodata
	l.bnf footext
	l.bnf foodata
	l.bnf footext
	.text
	.global l_bf
l_bf:
	l.bf 4
	l.bf 4
	l.bf -4
	l.bf 4
	l.bf foodata
	l.bf -4
	l.bf -4
	l.bf foodata
	.text
	.global l_trap
l_trap:
	l.trap 0
	l.trap 65535
	l.trap 32768
	l.trap 32767
	l.trap 1
	l.trap 53583
	l.trap 32636
	l.trap 53834
	.text
	.global l_sys
l_sys:
	l.sys 0
	l.sys 65535
	l.sys 32768
	l.sys 32767
	l.sys 1
	l.sys 53893
	l.sys 58133
	l.sys 33018
	.text
	.global l_rfe
l_rfe:
	l.rfe
	.text
	.global l_nop
l_nop:
	l.nop
	.text
	.global l_movhi
l_movhi:
	l.movhi r0,0
	l.movhi r31,-1
	l.movhi r16,-32768
	l.movhi r15,32767
	l.movhi r1,1
	l.movhi r28,-32306
	l.movhi r23,-5972
	l.movhi r19,-10048
	.text
	.global l_mfspr
l_mfspr:
	l.mfspr r0,r0,0
	l.mfspr r31,r31,65535
	l.mfspr r16,r16,32768
	l.mfspr r15,r15,32767
	l.mfspr r1,r1,1
	l.mfspr r23,r29,54424
	l.mfspr r19,r20,4481
	l.mfspr r26,r2,63446
	.text
	.global l_mtspr
l_mtspr:
	l.mtspr r0,r0,0
	l.mtspr r31,r31,-1
	l.mtspr r16,r16,-32768
	l.mtspr r15,r15,32767
	l.mtspr r1,r1,1
	l.mtspr r30,r6,15223
	l.mtspr r9,r7,-21300
	l.mtspr r25,r7,-645
	.text
	.global l_lwz
l_lwz:
	l.lwz r0,0(r0)
	l.lwz r31,-1(r31)
	l.lwz r16,-32768(r16)
	l.lwz r15,32767(r15)
	l.lwz r1,1(r1)
	l.lwz r15,2933(r25)
	l.lwz r17,-799(r21)
	l.lwz r0,-17595(r18)
	.text
	.global l_lws
l_lws:
	l.lws r0,0(r0)
	l.lws r31,-1(r31)
	l.lws r16,-32768(r16)
	l.lws r15,32767(r15)
	l.lws r1,1(r1)
	l.lws r1,-17606(r21)
	l.lws r14,26891(r31)
	l.lws r8,27552(r0)
	.text
	.global l_lbz
l_lbz:
	l.lbz r0,0(r0)
	l.lbz r31,-1(r31)
	l.lbz r16,-32768(r16)
	l.lbz r15,32767(r15)
	l.lbz r1,1(r1)
	l.lbz r19,25635(r20)
	l.lbz r15,-3416(r9)
	l.lbz r3,17748(r1)
	.text
	.global l_lbs
l_lbs:
	l.lbs r0,0(r0)
	l.lbs r31,-1(r31)
	l.lbs r16,-32768(r16)
	l.lbs r15,32767(r15)
	l.lbs r1,1(r1)
	l.lbs r26,17606(r8)
	l.lbs r22,-31072(r16)
	l.lbs r6,17440(r9)
	.text
	.global l_lhz
l_lhz:
	l.lhz r0,0(r0)
	l.lhz r31,-1(r31)
	l.lhz r16,-32768(r16)
	l.lhz r15,32767(r15)
	l.lhz r1,1(r1)
	l.lhz r5,-5667(r4)
	l.lhz r24,5848(r4)
	l.lhz r10,31675(r7)
	.text
	.global l_lhs
l_lhs:
	l.lhs r0,0(r0)
	l.lhs r31,-1(r31)
	l.lhs r16,-32768(r16)
	l.lhs r15,32767(r15)
	l.lhs r1,1(r1)
	l.lhs r6,-142(r11)
	l.lhs r20,-5306(r29)
	l.lhs r15,4178(r21)
	.text
	.global l_sw
l_sw:
	l.sw 0(r0),r0
	l.sw -1(r31),r31
	l.sw -32768(r16),r16
	l.sw 32767(r15),r15
	l.sw 1(r1),r1
	l.sw -7967(r17),r10
	l.sw 1824(r30),r10
	l.sw 31566(r15),r4
	.text
	.global l_sb
l_sb:
	l.sb 0(r0),r0
	l.sb -1(r31),r31
	l.sb -32768(r16),r16
	l.sb 32767(r15),r15
	l.sb 1(r1),r1
	l.sb 22200(r10),r0
	l.sb 9995(r16),r27
	l.sb -28260(r14),r31
	.text
	.global l_sh
l_sh:
	l.sh 0(r0),r0
	l.sh -1(r31),r31
	l.sh -32768(r16),r16
	l.sh 32767(r15),r15
	l.sh 1(r1),r1
	l.sh 10685(r21),r25
	l.sh -13066(r28),r5
	l.sh -26800(r9),r29
	.text
	.global l_sll
l_sll:
	l.sll r0,r0,r0
	l.sll r31,r31,r31
	l.sll r16,r16,r16
	l.sll r15,r15,r15
	l.sll r1,r1,r1
	l.sll r31,r16,r8
	l.sll r31,r17,r22
	l.sll r15,r14,r5
	.text
	.global l_slli
l_slli:
	l.slli r0,r0,0
	l.slli r31,r31,63
	l.slli r16,r16,32
	l.slli r15,r15,31
	l.slli r1,r1,1
	l.slli r11,r14,49
	l.slli r7,r27,23
	l.slli r30,r16,11
	.text
	.global l_srl
l_srl:
	l.srl r0,r0,r0
	l.srl r31,r31,r31
	l.srl r16,r16,r16
	l.srl r15,r15,r15
	l.srl r1,r1,r1
	l.srl r15,r25,r13
	l.srl r19,r0,r17
	l.srl r13,r0,r23
	.text
	.global l_srli
l_srli:
	l.srli r0,r0,0
	l.srli r31,r31,63
	l.srli r16,r16,32
	l.srli r15,r15,31
	l.srli r1,r1,1
	l.srli r15,r30,13
	l.srli r13,r3,63
	l.srli r2,r18,30
	.text
	.global l_sra
l_sra:
	l.sra r0,r0,r0
	l.sra r31,r31,r31
	l.sra r16,r16,r16
	l.sra r15,r15,r15
	l.sra r1,r1,r1
	l.sra r3,r26,r0
	l.sra r29,r18,r27
	l.sra r27,r29,r3
	.text
	.global l_srai
l_srai:
	l.srai r0,r0,0
	l.srai r31,r31,63
	l.srai r16,r16,32
	l.srai r15,r15,31
	l.srai r1,r1,1
	l.srai r10,r11,28
	l.srai r23,r15,48
	l.srai r16,r15,38
	.text
	.global l_ror
l_ror:
	l.ror r0,r0,r0
	l.ror r31,r31,r31
	l.ror r16,r16,r16
	l.ror r15,r15,r15
	l.ror r1,r1,r1
	l.ror r29,r12,r5
	l.ror r18,r6,r4
	l.ror r2,r16,r17
	.text
	.global l_rori
l_rori:
	l.rori r0,r0,0
	l.rori r31,r31,63
	l.rori r16,r16,32
	l.rori r15,r15,31
	l.rori r1,r1,1
	l.rori r17,r0,23
	l.rori r16,r31,42
	l.rori r13,r21,12
	.text
	.global l_add
l_add:
	l.add r0,r0,r0
	l.add r31,r31,r31
	l.add r16,r16,r16
	l.add r15,r15,r15
	l.add r1,r1,r1
	l.add r29,r7,r4
	l.add r29,r10,r18
	l.add r18,r22,r23
	.text
	.global l_sub
l_sub:
	l.sub r0,r0,r0
	l.sub r31,r31,r31
	l.sub r16,r16,r16
	l.sub r15,r15,r15
	l.sub r1,r1,r1
	l.sub r23,r26,r14
	l.sub r10,r24,r15
	l.sub r11,r4,r18
	.text
	.global l_and
l_and:
	l.and r0,r0,r0
	l.and r31,r31,r31
	l.and r16,r16,r16
	l.and r15,r15,r15
	l.and r1,r1,r1
	l.and r0,r31,r25
	l.and r30,r7,r19
	l.and r19,r2,r26
	.text
	.global l_or
l_or:
	l.or r0,r0,r0
	l.or r31,r31,r31
	l.or r16,r16,r16
	l.or r15,r15,r15
	l.or r1,r1,r1
	l.or r17,r10,r2
	l.or r7,r19,r29
	l.or r3,r17,r17
	.text
	.global l_xor
l_xor:
	l.xor r0,r0,r0
	l.xor r31,r31,r31
	l.xor r16,r16,r16
	l.xor r15,r15,r15
	l.xor r1,r1,r1
	l.xor r31,r5,r17
	l.xor r22,r4,r5
	l.xor r30,r20,r26
	.text
	.global l_addc
l_addc:
	l.addc r0,r0,r0
	l.addc r31,r31,r31
	l.addc r16,r16,r16
	l.addc r15,r15,r15
	l.addc r1,r1,r1
	l.addc r8,r26,r24
	l.addc r18,r6,r4
	l.addc r29,r0,r18
	.text
	.global l_mul
l_mul:
	l.mul r0,r0,r0
	l.mul r31,r31,r31
	l.mul r16,r16,r16
	l.mul r15,r15,r15
	l.mul r1,r1,r1
	l.mul r8,r25,r13
	l.mul r8,r21,r29
	l.mul r27,r3,r17
	.text
	.global l_mulu
l_mulu:
	l.mulu r0,r0,r0
	l.mulu r31,r31,r31
	l.mulu r16,r16,r16
	l.mulu r15,r15,r15
	l.mulu r1,r1,r1
	l.mulu r26,r14,r16
	l.mulu r1,r18,r11
	l.mulu r14,r18,r17
	.text
	.global l_div
l_div:
	l.div r0,r0,r0
	l.div r31,r31,r31
	l.div r16,r16,r16
	l.div r15,r15,r15
	l.div r1,r1,r1
	l.div r0,r2,r28
	l.div r26,r7,r31
	l.div r2,r18,r20
	.text
	.global l_divu
l_divu:
	l.divu r0,r0,r0
	l.divu r31,r31,r31
	l.divu r16,r16,r16
	l.divu r15,r15,r15
	l.divu r1,r1,r1
	l.divu r5,r4,r25
	l.divu r8,r11,r29
	l.divu r11,r19,r2
	.text
	.global l_addi
l_addi:
	l.addi r0,r0,0
	l.addi r31,r31,-1
	l.addi r16,r16,-32768
	l.addi r15,r15,32767
	l.addi r1,r1,1
	l.addi r14,r0,7020
	l.addi r13,r14,14131
	l.addi r14,r16,-26821
	.text
	.global l_andi
l_andi:
	l.andi r0,r0,0
	l.andi r31,r31,-1
	l.andi r16,r16,-32768
	l.andi r15,r15,32767
	l.andi r1,r1,1
	l.andi r27,r21,11927
	l.andi r21,r23,12059
	l.andi r30,r30,-31804
	.text
	.global l_ori
l_ori:
	l.ori r0,r0,0
	l.ori r31,r31,-1
	l.ori r16,r16,-32768
	l.ori r15,r15,32767
	l.ori r1,r1,1
	l.ori r22,r27,-10111
	l.ori r17,r31,128
	l.ori r13,r20,-12435
	.text
	.global l_xori
l_xori:
	l.xori r0,r0,0
	l.xori r31,r31,-1
	l.xori r16,r16,-32768
	l.xori r15,r15,32767
	l.xori r1,r1,1
	l.xori r18,r16,-4670
	l.xori r25,r13,-16331
	l.xori r12,r29,-32727
	.text
	.global l_muli
l_muli:
	l.muli r0,r0,0
	l.muli r31,r31,-1
	l.muli r16,r16,-32768
	l.muli r15,r15,32767
	l.muli r1,r1,1
	l.muli r27,r7,-4731
	l.muli r7,r20,-866
	l.muli r24,r21,23219
	.text
	.global l_addic
l_addic:
	l.addic r0,r0,0
	l.addic r31,r31,-1
	l.addic r16,r16,-32768
	l.addic r15,r15,32767
	l.addic r1,r1,1
	l.addic r6,r22,-32700
	l.addic r19,r9,-2458
	l.addic r27,r28,6891
	.text
	.global l_sfgtu
l_sfgtu:
	l.sfgtu r0,r0
	l.sfgtu r31,r31
	l.sfgtu r16,r16
	l.sfgtu r15,r15
	l.sfgtu r1,r1
	l.sfgtu r8,r4
	l.sfgtu r17,r21
	l.sfgtu r6,r5
	.text
	.global l_sfgeu
l_sfgeu:
	l.sfgeu r0,r0
	l.sfgeu r31,r31
	l.sfgeu r16,r16
	l.sfgeu r15,r15
	l.sfgeu r1,r1
	l.sfgeu r14,r12
	l.sfgeu r22,r7
	l.sfgeu r13,r1
	.text
	.global l_sfltu
l_sfltu:
	l.sfltu r0,r0
	l.sfltu r31,r31
	l.sfltu r16,r16
	l.sfltu r15,r15
	l.sfltu r1,r1
	l.sfltu r1,r13
	l.sfltu r22,r30
	l.sfltu r20,r6
	.text
	.global l_sfleu
l_sfleu:
	l.sfleu r0,r0
	l.sfleu r31,r31
	l.sfleu r16,r16
	l.sfleu r15,r15
	l.sfleu r1,r1
	l.sfleu r19,r8
	l.sfleu r27,r15
	l.sfleu r27,r3
	.text
	.global l_sfgts
l_sfgts:
	l.sfgts r0,r0
	l.sfgts r31,r31
	l.sfgts r16,r16
	l.sfgts r15,r15
	l.sfgts r1,r1
	l.sfgts r5,r5
	l.sfgts r31,r5
	l.sfgts r30,r18
	.text
	.global l_sfges
l_sfges:
	l.sfges r0,r0
	l.sfges r31,r31
	l.sfges r16,r16
	l.sfges r15,r15
	l.sfges r1,r1
	l.sfges r17,r18
	l.sfges r0,r9
	l.sfges r22,r25
	.text
	.global l_sflts
l_sflts:
	l.sflts r0,r0
	l.sflts r31,r31
	l.sflts r16,r16
	l.sflts r15,r15
	l.sflts r1,r1
	l.sflts r25,r24
	l.sflts r23,r13
	l.sflts r15,r8
	.text
	.global l_sfles
l_sfles:
	l.sfles r0,r0
	l.sfles r31,r31
	l.sfles r16,r16
	l.sfles r15,r15
	l.sfles r1,r1
	l.sfles r17,r13
	l.sfles r30,r25
	l.sfles r0,r12
	.text
	.global l_sfgtui
l_sfgtui:
	l.sfgtui r0,0
	l.sfgtui r31,65535
	l.sfgtui r16,32768
	l.sfgtui r15,32767
	l.sfgtui r1,1
	l.sfgtui r5,19233
	l.sfgtui r23,37154
	l.sfgtui r17,9693
	.text
	.global l_sfgeui
l_sfgeui:
	l.sfgeui r0,0
	l.sfgeui r31,65535
	l.sfgeui r16,32768
	l.sfgeui r15,32767
	l.sfgeui r1,1
	l.sfgeui r17,60598
	l.sfgeui r15,16403
	l.sfgeui r6,61860
	.text
	.global l_sfltui
l_sfltui:
	l.sfltui r0,0
	l.sfltui r31,65535
	l.sfltui r16,32768
	l.sfltui r15,32767
	l.sfltui r1,1
	l.sfltui r3,52399
	l.sfltui r24,19709
	l.sfltui r10,830
	.text
	.global l_sfleui
l_sfleui:
	l.sfleui r0,0
	l.sfleui r31,65535
	l.sfleui r16,32768
	l.sfleui r15,32767
	l.sfleui r1,1
	l.sfleui r23,39782
	l.sfleui r17,46807
	l.sfleui r9,43137
	.text
	.global l_sfgtsi
l_sfgtsi:
	l.sfgtsi r0,0
	l.sfgtsi r31,-1
	l.sfgtsi r16,-32768
	l.sfgtsi r15,32767
	l.sfgtsi r1,1
	l.sfgtsi r13,-18814
	l.sfgtsi r13,-10657
	l.sfgtsi r28,-26667
	.text
	.global l_sfgesi
l_sfgesi:
	l.sfgesi r0,0
	l.sfgesi r31,-1
	l.sfgesi r16,-32768
	l.sfgesi r15,32767
	l.sfgesi r1,1
	l.sfgesi r12,2376
	l.sfgesi r9,32059
	l.sfgesi r13,20696
	.text
	.global l_sfltsi
l_sfltsi:
	l.sfltsi r0,0
	l.sfltsi r31,-1
	l.sfltsi r16,-32768
	l.sfltsi r15,32767
	l.sfltsi r1,1
	l.sfltsi r30,3021
	l.sfltsi r5,-27813
	l.sfltsi r28,-8816
	.text
	.global l_sflesi
l_sflesi:
	l.sflesi r0,0
	l.sflesi r31,-1
	l.sflesi r16,-32768
	l.sflesi r15,32767
	l.sflesi r1,1
	l.sflesi r18,11338
	l.sflesi r29,18873
	l.sflesi r28,26050
	.text
	.global l_sfeq
l_sfeq:
	l.sfeq r0,r0
	l.sfeq r31,r31
	l.sfeq r16,r16
	l.sfeq r15,r15
	l.sfeq r1,r1
	l.sfeq r28,r26
	l.sfeq r13,r6
	l.sfeq r26,r9
	.text
	.global l_sfeqi
l_sfeqi:
	l.sfeqi r0,0
	l.sfeqi r31,-1
	l.sfeqi r16,-32768
	l.sfeqi r15,32767
	l.sfeqi r1,1
	l.sfeqi r10,25887
	l.sfeqi r21,19894
	l.sfeqi r18,-13419
	.text
	.global l_sfne
l_sfne:
	l.sfne r0,r0
	l.sfne r31,r31
	l.sfne r16,r16
	l.sfne r15,r15
	l.sfne r1,r1
	l.sfne r18,r27
	l.sfne r6,r18
	l.sfne r0,r30
	.text
	.global l_sfnei
l_sfnei:
	l.sfnei r0,0
	l.sfnei r31,-1
	l.sfnei r16,-32768
	l.sfnei r15,32767
	l.sfnei r1,1
	l.sfnei r8,11410
	l.sfnei r6,-19239
	l.sfnei r20,-22783

	.global l_lo
l_lo:
	l.addi	r1, r1, lo(0xdeadbeef)
	.global	l_hi
l_hi:	
	l.movhi	r1, hi(0xdeadbeef)

