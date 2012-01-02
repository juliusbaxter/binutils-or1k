#as:
#objdump: -dr
#name: allinsn

.*: +file format .*


Disassembly of section \.text:

00000000 <l_j>:
	\.\.\.
			8: R_OR1K_INSN_ABS_26	\.data
			14: R_OR1K_INSN_ABS_26	\.data
			1c: R_OR1K_INSN_ABS_26	\.text

00000020 <l_jal>:
  20:	04 00 00 00 	l\.jal 0 <l_j>
  24:	04 00 00 00 	l\.jal 0 <l_j>
			24: R_OR1K_INSN_ABS_26	\.data
  28:	04 00 00 00 	l\.jal 0 <l_j>
			28: R_OR1K_INSN_ABS_26	\.text
  2c:	04 00 00 00 	l\.jal 0 <l_j>
			2c: R_OR1K_INSN_ABS_26	\.text
  30:	04 00 00 00 	l\.jal 0 <l_j>
  34:	04 00 00 00 	l\.jal 0 <l_j>
			34: R_OR1K_INSN_ABS_26	\.data
  38:	04 00 00 00 	l\.jal 0 <l_j>
			38: R_OR1K_INSN_ABS_26	\.data
  3c:	04 00 00 00 	l\.jal 0 <l_j>
			3c: R_OR1K_INSN_ABS_26	\.text

00000040 <l_jr>:
  40:	44 00 00 00 	l\.jr r0
  44:	44 00 f8 00 	l\.jr r31
  48:	44 00 80 00 	l\.jr r16
  4c:	44 00 78 00 	l\.jr r15
  50:	44 00 08 00 	l\.jr r1
  54:	44 00 d8 00 	l\.jr r27
  58:	44 00 70 00 	l\.jr r14
  5c:	44 00 b0 00 	l\.jr r22

00000060 <l_jalr>:
  60:	48 00 00 00 	l\.jalr r0
  64:	48 00 f8 00 	l\.jalr r31
  68:	48 00 80 00 	l\.jalr r16
  6c:	48 00 78 00 	l\.jalr r15
  70:	48 00 08 00 	l\.jalr r1
  74:	48 00 00 00 	l\.jalr r0
  78:	48 00 58 00 	l\.jalr r11
  7c:	48 00 e8 00 	l\.jalr r29

00000080 <l_bnf>:
  80:	0c 00 00 01 	l\.bnf 84 <l_bnf\+0x4>
  84:	0c 00 00 00 	l\.bnf 84 <l_bnf\+0x4>
			84: R_OR1K_INSN_REL_26	\.data
  88:	0c 00 00 00 	l\.bnf 88 <l_bnf\+0x8>
			88: R_OR1K_INSN_REL_26	\.data
  8c:	0f ff ff dd 	l\.bnf 0 <l_j>
  90:	0c 00 00 00 	l\.bnf 90 <l_bnf\+0x10>
			90: R_OR1K_INSN_REL_26	\.data
  94:	0f ff ff db 	l\.bnf 0 <l_j>
  98:	0c 00 00 00 	l\.bnf 98 <l_bnf\+0x18>
			98: R_OR1K_INSN_REL_26	\.data
  9c:	0f ff ff d9 	l\.bnf 0 <l_j>

000000a0 <l_bf>:
  a0:	10 00 00 01 	l\.bf a4 <l_bf\+0x4>
  a4:	10 00 00 01 	l\.bf a8 <l_bf\+0x8>
  a8:	13 ff ff ff 	l\.bf a4 <l_bf\+0x4>
  ac:	10 00 00 01 	l\.bf b0 <l_bf\+0x10>
  b0:	10 00 00 00 	l\.bf b0 <l_bf\+0x10>
			b0: R_OR1K_INSN_REL_26	\.data
  b4:	13 ff ff ff 	l\.bf b0 <l_bf\+0x10>
  b8:	13 ff ff ff 	l\.bf b4 <l_bf\+0x14>
  bc:	10 00 00 00 	l\.bf bc <l_bf\+0x1c>
			bc: R_OR1K_INSN_REL_26	\.data

000000c0 <l_trap>:
  c0:	21 00 00 00 	l\.trap 0x0
  c4:	21 00 ff ff 	l\.trap 0xffff
  c8:	21 00 80 00 	l\.trap 0x8000
  cc:	21 00 7f ff 	l\.trap 0x7fff
  d0:	21 00 00 01 	l\.trap 0x1
  d4:	21 00 d1 4f 	l\.trap 0xd14f
  d8:	21 00 7f 7c 	l\.trap 0x7f7c
  dc:	21 00 d2 4a 	l\.trap 0xd24a

000000e0 <l_sys>:
  e0:	20 00 00 00 	l\.sys 0x0
  e4:	20 00 ff ff 	l\.sys 0xffff
  e8:	20 00 80 00 	l\.sys 0x8000
  ec:	20 00 7f ff 	l\.sys 0x7fff
  f0:	20 00 00 01 	l\.sys 0x1
  f4:	20 00 d2 85 	l\.sys 0xd285
  f8:	20 00 e3 15 	l\.sys 0xe315
  fc:	20 00 80 fa 	l\.sys 0x80fa

00000100 <l_rfe>:
 100:	24 00 00 00 	l\.rfe

00000104 <l_nop>:
 104:	15 00 00 00 	l\.nop

00000108 <l_movhi>:
 108:	18 00 00 00 	l\.movhi r0,0
 10c:	1b e0 ff ff 	l\.movhi r31,-1
 110:	1a 00 80 00 	l\.movhi r16,-32768
 114:	19 e0 7f ff 	l\.movhi r15,32767
 118:	18 20 00 01 	l\.movhi r1,1
 11c:	1b 80 81 ce 	l\.movhi r28,-32306
 120:	1a e0 e8 ac 	l\.movhi r23,-5972
 124:	1a 60 d8 c0 	l\.movhi r19,-10048

00000128 <l_mfspr>:
 128:	b4 00 00 00 	l\.mfspr r0,r0,0x0
 12c:	b7 ff ff ff 	l\.mfspr r31,r31,0xffff
 130:	b6 10 80 00 	l\.mfspr r16,r16,0x8000
 134:	b5 ef 7f ff 	l\.mfspr r15,r15,0x7fff
 138:	b4 21 00 01 	l\.mfspr r1,r1,0x1
 13c:	b6 fd d4 98 	l\.mfspr r23,r29,0xd498
 140:	b6 74 11 81 	l\.mfspr r19,r20,0x1181
 144:	b7 42 f7 d6 	l\.mfspr r26,r2,0xf7d6

00000148 <l_mtspr>:
 148:	c0 00 00 00 	l\.mtspr r0,r0,0
 14c:	c3 ff ff ff 	l\.mtspr r31,r31,-1
 150:	c2 10 80 00 	l\.mtspr r16,r16,-32768
 154:	c1 ef 7f ff 	l\.mtspr r15,r15,32767
 158:	c0 01 08 01 	l\.mtspr r1,r1,1
 15c:	c0 fe 33 77 	l\.mtspr r30,r6,15223
 160:	c2 a9 3c cc 	l\.mtspr r9,r7,-21300
 164:	c3 f9 3d 7b 	l\.mtspr r25,r7,-645

00000168 <l_lwz>:
 168:	84 00 00 00 	l\.lwz r0,0\(r0\)
 16c:	87 ff ff ff 	l\.lwz r31,-1\(r31\)
 170:	86 10 80 00 	l\.lwz r16,-32768\(r16\)
 174:	85 ef 7f ff 	l\.lwz r15,32767\(r15\)
 178:	84 21 00 01 	l\.lwz r1,1\(r1\)
 17c:	85 f9 0b 75 	l\.lwz r15,2933\(r25\)
 180:	86 35 fc e1 	l\.lwz r17,-799\(r21\)
 184:	84 12 bb 45 	l\.lwz r0,-17595\(r18\)

00000188 <l_lws>:
 188:	88 00 00 00 	l\.lws r0,0\(r0\)
 18c:	8b ff ff ff 	l\.lws r31,-1\(r31\)
 190:	8a 10 80 00 	l\.lws r16,-32768\(r16\)
 194:	89 ef 7f ff 	l\.lws r15,32767\(r15\)
 198:	88 21 00 01 	l\.lws r1,1\(r1\)
 19c:	88 35 bb 3a 	l\.lws r1,-17606\(r21\)
 1a0:	89 df 69 0b 	l\.lws r14,26891\(r31\)
 1a4:	89 00 6b a0 	l\.lws r8,27552\(r0\)

000001a8 <l_lbz>:
 1a8:	8c 00 00 00 	l\.lbz r0,0\(r0\)
 1ac:	8f ff ff ff 	l\.lbz r31,-1\(r31\)
 1b0:	8e 10 80 00 	l\.lbz r16,-32768\(r16\)
 1b4:	8d ef 7f ff 	l\.lbz r15,32767\(r15\)
 1b8:	8c 21 00 01 	l\.lbz r1,1\(r1\)
 1bc:	8e 74 64 23 	l\.lbz r19,25635\(r20\)
 1c0:	8d e9 f2 a8 	l\.lbz r15,-3416\(r9\)
 1c4:	8c 61 45 54 	l\.lbz r3,17748\(r1\)

000001c8 <l_lbs>:
 1c8:	90 00 00 00 	l\.lbs r0,0\(r0\)
 1cc:	93 ff ff ff 	l\.lbs r31,-1\(r31\)
 1d0:	92 10 80 00 	l\.lbs r16,-32768\(r16\)
 1d4:	91 ef 7f ff 	l\.lbs r15,32767\(r15\)
 1d8:	90 21 00 01 	l\.lbs r1,1\(r1\)
 1dc:	93 48 44 c6 	l\.lbs r26,17606\(r8\)
 1e0:	92 d0 86 a0 	l\.lbs r22,-31072\(r16\)
 1e4:	90 c9 44 20 	l\.lbs r6,17440\(r9\)

000001e8 <l_lhz>:
 1e8:	94 00 00 00 	l\.lhz r0,0\(r0\)
 1ec:	97 ff ff ff 	l\.lhz r31,-1\(r31\)
 1f0:	96 10 80 00 	l\.lhz r16,-32768\(r16\)
 1f4:	95 ef 7f ff 	l\.lhz r15,32767\(r15\)
 1f8:	94 21 00 01 	l\.lhz r1,1\(r1\)
 1fc:	94 a4 e9 dd 	l\.lhz r5,-5667\(r4\)
 200:	97 04 16 d8 	l\.lhz r24,5848\(r4\)
 204:	95 47 7b bb 	l\.lhz r10,31675\(r7\)

00000208 <l_lhs>:
 208:	98 00 00 00 	l\.lhs r0,0\(r0\)
 20c:	9b ff ff ff 	l\.lhs r31,-1\(r31\)
 210:	9a 10 80 00 	l\.lhs r16,-32768\(r16\)
 214:	99 ef 7f ff 	l\.lhs r15,32767\(r15\)
 218:	98 21 00 01 	l\.lhs r1,1\(r1\)
 21c:	98 cb ff 72 	l\.lhs r6,-142\(r11\)
 220:	9a 9d eb 46 	l\.lhs r20,-5306\(r29\)
 224:	99 f5 10 52 	l\.lhs r15,4178\(r21\)

00000228 <l_sw>:
 228:	d4 00 00 00 	l\.sw 0\(r0\),r0
 22c:	d7 ff ff ff 	l\.sw -1\(r31\),r31
 230:	d6 10 80 00 	l\.sw -32768\(r16\),r16
 234:	d5 ef 7f ff 	l\.sw 32767\(r15\),r15
 238:	d4 01 08 01 	l\.sw 1\(r1\),r1
 23c:	d7 91 50 e1 	l\.sw -7967\(r17\),r10
 240:	d4 1e 57 20 	l\.sw 1824\(r30\),r10
 244:	d5 ef 23 4e 	l\.sw 31566\(r15\),r4

00000248 <l_sb>:
 248:	d8 00 00 00 	l\.sb 0\(r0\),r0
 24c:	db ff ff ff 	l\.sb -1\(r31\),r31
 250:	da 10 80 00 	l\.sb -32768\(r16\),r16
 254:	d9 ef 7f ff 	l\.sb 32767\(r15\),r15
 258:	d8 01 08 01 	l\.sb 1\(r1\),r1
 25c:	d9 4a 06 b8 	l\.sb 22200\(r10\),r0
 260:	d8 90 df 0b 	l\.sb 9995\(r16\),r27
 264:	da 4e f9 9c 	l\.sb -28260\(r14\),r31

00000268 <l_sh>:
 268:	dc 00 00 00 	l\.sh 0\(r0\),r0
 26c:	df ff ff ff 	l\.sh -1\(r31\),r31
 270:	de 10 80 00 	l\.sh -32768\(r16\),r16
 274:	dd ef 7f ff 	l\.sh 32767\(r15\),r15
 278:	dc 01 08 01 	l\.sh 1\(r1\),r1
 27c:	dc b5 c9 bd 	l\.sh 10685\(r21\),r25
 280:	df 3c 2c f6 	l\.sh -13066\(r28\),r5
 284:	de 49 ef 50 	l\.sh -26800\(r9\),r29

00000288 <l_sll>:
 288:	e0 00 00 08 	l\.sll r0,r0,r0
 28c:	e3 ff f8 08 	l\.sll r31,r31,r31
 290:	e2 10 80 08 	l\.sll r16,r16,r16
 294:	e1 ef 78 08 	l\.sll r15,r15,r15
 298:	e0 21 08 08 	l\.sll r1,r1,r1
 29c:	e3 f0 40 08 	l\.sll r31,r16,r8
 2a0:	e3 f1 b0 08 	l\.sll r31,r17,r22
 2a4:	e1 ee 28 08 	l\.sll r15,r14,r5

000002a8 <l_slli>:
 2a8:	b8 00 00 00 	l\.slli r0,r0,0x0
 2ac:	bb ff 00 3f 	l\.slli r31,r31,0x3f
 2b0:	ba 10 00 20 	l\.slli r16,r16,0x20
 2b4:	b9 ef 00 1f 	l\.slli r15,r15,0x1f
 2b8:	b8 21 00 01 	l\.slli r1,r1,0x1
 2bc:	b9 6e 00 31 	l\.slli r11,r14,0x31
 2c0:	b8 fb 00 17 	l\.slli r7,r27,0x17
 2c4:	bb d0 00 0b 	l\.slli r30,r16,0xb

000002c8 <l_srl>:
 2c8:	e0 00 00 48 	l\.srl r0,r0,r0
 2cc:	e3 ff f8 48 	l\.srl r31,r31,r31
 2d0:	e2 10 80 48 	l\.srl r16,r16,r16
 2d4:	e1 ef 78 48 	l\.srl r15,r15,r15
 2d8:	e0 21 08 48 	l\.srl r1,r1,r1
 2dc:	e1 f9 68 48 	l\.srl r15,r25,r13
 2e0:	e2 60 88 48 	l\.srl r19,r0,r17
 2e4:	e1 a0 b8 48 	l\.srl r13,r0,r23

000002e8 <l_srli>:
 2e8:	b8 00 00 40 	l\.srli r0,r0,0x0
 2ec:	bb ff 00 7f 	l\.srli r31,r31,0x3f
 2f0:	ba 10 00 60 	l\.srli r16,r16,0x20
 2f4:	b9 ef 00 5f 	l\.srli r15,r15,0x1f
 2f8:	b8 21 00 41 	l\.srli r1,r1,0x1
 2fc:	b9 fe 00 4d 	l\.srli r15,r30,0xd
 300:	b9 a3 00 7f 	l\.srli r13,r3,0x3f
 304:	b8 52 00 5e 	l\.srli r2,r18,0x1e

00000308 <l_sra>:
 308:	e0 00 00 88 	l\.sra r0,r0,r0
 30c:	e3 ff f8 88 	l\.sra r31,r31,r31
 310:	e2 10 80 88 	l\.sra r16,r16,r16
 314:	e1 ef 78 88 	l\.sra r15,r15,r15
 318:	e0 21 08 88 	l\.sra r1,r1,r1
 31c:	e0 7a 00 88 	l\.sra r3,r26,r0
 320:	e3 b2 d8 88 	l\.sra r29,r18,r27
 324:	e3 7d 18 88 	l\.sra r27,r29,r3

00000328 <l_srai>:
 328:	b8 00 00 80 	l\.srai r0,r0,0x0
 32c:	bb ff 00 bf 	l\.srai r31,r31,0x3f
 330:	ba 10 00 a0 	l\.srai r16,r16,0x20
 334:	b9 ef 00 9f 	l\.srai r15,r15,0x1f
 338:	b8 21 00 81 	l\.srai r1,r1,0x1
 33c:	b9 4b 00 9c 	l\.srai r10,r11,0x1c
 340:	ba ef 00 b0 	l\.srai r23,r15,0x30
 344:	ba 0f 00 a6 	l\.srai r16,r15,0x26

00000348 <l_ror>:
 348:	e0 00 00 c8 	l\.ror r0,r0,r0
 34c:	e3 ff f8 c8 	l\.ror r31,r31,r31
 350:	e2 10 80 c8 	l\.ror r16,r16,r16
 354:	e1 ef 78 c8 	l\.ror r15,r15,r15
 358:	e0 21 08 c8 	l\.ror r1,r1,r1
 35c:	e3 ac 28 c8 	l\.ror r29,r12,r5
 360:	e2 46 20 c8 	l\.ror r18,r6,r4
 364:	e0 50 88 c8 	l\.ror r2,r16,r17

00000368 <l_rori>:
 368:	b8 00 00 c0 	l\.rori r0,r0,0x0
 36c:	bb ff 00 ff 	l\.rori r31,r31,0x3f
 370:	ba 10 00 e0 	l\.rori r16,r16,0x20
 374:	b9 ef 00 df 	l\.rori r15,r15,0x1f
 378:	b8 21 00 c1 	l\.rori r1,r1,0x1
 37c:	ba 20 00 d7 	l\.rori r17,r0,0x17
 380:	ba 1f 00 ea 	l\.rori r16,r31,0x2a
 384:	b9 b5 00 cc 	l\.rori r13,r21,0xc

00000388 <l_add>:
 388:	e0 00 00 00 	l\.add r0,r0,r0
 38c:	e3 ff f8 00 	l\.add r31,r31,r31
 390:	e2 10 80 00 	l\.add r16,r16,r16
 394:	e1 ef 78 00 	l\.add r15,r15,r15
 398:	e0 21 08 00 	l\.add r1,r1,r1
 39c:	e3 a7 20 00 	l\.add r29,r7,r4
 3a0:	e3 aa 90 00 	l\.add r29,r10,r18
 3a4:	e2 56 b8 00 	l\.add r18,r22,r23

000003a8 <l_sub>:
 3a8:	e0 00 00 02 	l\.sub r0,r0,r0
 3ac:	e3 ff f8 02 	l\.sub r31,r31,r31
 3b0:	e2 10 80 02 	l\.sub r16,r16,r16
 3b4:	e1 ef 78 02 	l\.sub r15,r15,r15
 3b8:	e0 21 08 02 	l\.sub r1,r1,r1
 3bc:	e2 fa 70 02 	l\.sub r23,r26,r14
 3c0:	e1 58 78 02 	l\.sub r10,r24,r15
 3c4:	e1 64 90 02 	l\.sub r11,r4,r18

000003c8 <l_and>:
 3c8:	e0 00 00 03 	l\.and r0,r0,r0
 3cc:	e3 ff f8 03 	l\.and r31,r31,r31
 3d0:	e2 10 80 03 	l\.and r16,r16,r16
 3d4:	e1 ef 78 03 	l\.and r15,r15,r15
 3d8:	e0 21 08 03 	l\.and r1,r1,r1
 3dc:	e0 1f c8 03 	l\.and r0,r31,r25
 3e0:	e3 c7 98 03 	l\.and r30,r7,r19
 3e4:	e2 62 d0 03 	l\.and r19,r2,r26

000003e8 <l_or>:
 3e8:	e0 00 00 04 	l\.or r0,r0,r0
 3ec:	e3 ff f8 04 	l\.or r31,r31,r31
 3f0:	e2 10 80 04 	l\.or r16,r16,r16
 3f4:	e1 ef 78 04 	l\.or r15,r15,r15
 3f8:	e0 21 08 04 	l\.or r1,r1,r1
 3fc:	e2 2a 10 04 	l\.or r17,r10,r2
 400:	e0 f3 e8 04 	l\.or r7,r19,r29
 404:	e0 71 88 04 	l\.or r3,r17,r17

00000408 <l_xor>:
 408:	e0 00 00 05 	l\.xor r0,r0,r0
 40c:	e3 ff f8 05 	l\.xor r31,r31,r31
 410:	e2 10 80 05 	l\.xor r16,r16,r16
 414:	e1 ef 78 05 	l\.xor r15,r15,r15
 418:	e0 21 08 05 	l\.xor r1,r1,r1
 41c:	e3 e5 88 05 	l\.xor r31,r5,r17
 420:	e2 c4 28 05 	l\.xor r22,r4,r5
 424:	e3 d4 d0 05 	l\.xor r30,r20,r26

00000428 <l_addc>:
 428:	e0 00 00 01 	l\.addc r0,r0,r0
 42c:	e3 ff f8 01 	l\.addc r31,r31,r31
 430:	e2 10 80 01 	l\.addc r16,r16,r16
 434:	e1 ef 78 01 	l\.addc r15,r15,r15
 438:	e0 21 08 01 	l\.addc r1,r1,r1
 43c:	e1 1a c0 01 	l\.addc r8,r26,r24
 440:	e2 46 20 01 	l\.addc r18,r6,r4
 444:	e3 a0 90 01 	l\.addc r29,r0,r18

00000448 <l_mul>:
 448:	e0 00 03 06 	l\.mul r0,r0,r0
 44c:	e3 ff fb 06 	l\.mul r31,r31,r31
 450:	e2 10 83 06 	l\.mul r16,r16,r16
 454:	e1 ef 7b 06 	l\.mul r15,r15,r15
 458:	e0 21 0b 06 	l\.mul r1,r1,r1
 45c:	e1 19 6b 06 	l\.mul r8,r25,r13
 460:	e1 15 eb 06 	l\.mul r8,r21,r29
 464:	e3 63 8b 06 	l\.mul r27,r3,r17

00000468 <l_mulu>:
 468:	e0 00 03 0b 	l\.mulu r0,r0,r0
 46c:	e3 ff fb 0b 	l\.mulu r31,r31,r31
 470:	e2 10 83 0b 	l\.mulu r16,r16,r16
 474:	e1 ef 7b 0b 	l\.mulu r15,r15,r15
 478:	e0 21 0b 0b 	l\.mulu r1,r1,r1
 47c:	e3 4e 83 0b 	l\.mulu r26,r14,r16
 480:	e0 32 5b 0b 	l\.mulu r1,r18,r11
 484:	e1 d2 8b 0b 	l\.mulu r14,r18,r17

00000488 <l_div>:
 488:	e0 00 03 09 	l\.div r0,r0,r0
 48c:	e3 ff fb 09 	l\.div r31,r31,r31
 490:	e2 10 83 09 	l\.div r16,r16,r16
 494:	e1 ef 7b 09 	l\.div r15,r15,r15
 498:	e0 21 0b 09 	l\.div r1,r1,r1
 49c:	e0 02 e3 09 	l\.div r0,r2,r28
 4a0:	e3 47 fb 09 	l\.div r26,r7,r31
 4a4:	e0 52 a3 09 	l\.div r2,r18,r20

000004a8 <l_divu>:
 4a8:	e0 00 03 0a 	l\.divu r0,r0,r0
 4ac:	e3 ff fb 0a 	l\.divu r31,r31,r31
 4b0:	e2 10 83 0a 	l\.divu r16,r16,r16
 4b4:	e1 ef 7b 0a 	l\.divu r15,r15,r15
 4b8:	e0 21 0b 0a 	l\.divu r1,r1,r1
 4bc:	e0 a4 cb 0a 	l\.divu r5,r4,r25
 4c0:	e1 0b eb 0a 	l\.divu r8,r11,r29
 4c4:	e1 73 13 0a 	l\.divu r11,r19,r2

000004c8 <l_addi>:
 4c8:	9c 00 00 00 	l\.addi r0,r0,0
 4cc:	9f ff ff ff 	l\.addi r31,r31,-1
 4d0:	9e 10 80 00 	l\.addi r16,r16,-32768
 4d4:	9d ef 7f ff 	l\.addi r15,r15,32767
 4d8:	9c 21 00 01 	l\.addi r1,r1,1
 4dc:	9d c0 1b 6c 	l\.addi r14,r0,7020
 4e0:	9d ae 37 33 	l\.addi r13,r14,14131
 4e4:	9d d0 97 3b 	l\.addi r14,r16,-26821

000004e8 <l_andi>:
 4e8:	a4 00 00 00 	l\.andi r0,r0,0
 4ec:	a7 ff ff ff 	l\.andi r31,r31,-1
 4f0:	a6 10 80 00 	l\.andi r16,r16,-32768
 4f4:	a5 ef 7f ff 	l\.andi r15,r15,32767
 4f8:	a4 21 00 01 	l\.andi r1,r1,1
 4fc:	a7 75 2e 97 	l\.andi r27,r21,11927
 500:	a6 b7 2f 1b 	l\.andi r21,r23,12059
 504:	a7 de 83 c4 	l\.andi r30,r30,-31804

00000508 <l_ori>:
 508:	a8 00 00 00 	l\.ori r0,r0,0
 50c:	ab ff ff ff 	l\.ori r31,r31,-1
 510:	aa 10 80 00 	l\.ori r16,r16,-32768
 514:	a9 ef 7f ff 	l\.ori r15,r15,32767
 518:	a8 21 00 01 	l\.ori r1,r1,1
 51c:	aa db d8 81 	l\.ori r22,r27,-10111
 520:	aa 3f 00 80 	l\.ori r17,r31,128
 524:	a9 b4 cf 6d 	l\.ori r13,r20,-12435

00000528 <l_xori>:
 528:	ac 00 00 00 	l\.xori r0,r0,0
 52c:	af ff ff ff 	l\.xori r31,r31,-1
 530:	ae 10 80 00 	l\.xori r16,r16,-32768
 534:	ad ef 7f ff 	l\.xori r15,r15,32767
 538:	ac 21 00 01 	l\.xori r1,r1,1
 53c:	ae 50 ed c2 	l\.xori r18,r16,-4670
 540:	af 2d c0 35 	l\.xori r25,r13,-16331
 544:	ad 9d 80 29 	l\.xori r12,r29,-32727

00000548 <l_muli>:
 548:	b0 00 00 00 	l\.muli r0,r0,0
 54c:	b3 ff ff ff 	l\.muli r31,r31,-1
 550:	b2 10 80 00 	l\.muli r16,r16,-32768
 554:	b1 ef 7f ff 	l\.muli r15,r15,32767
 558:	b0 21 00 01 	l\.muli r1,r1,1
 55c:	b3 67 ed 85 	l\.muli r27,r7,-4731
 560:	b0 f4 fc 9e 	l\.muli r7,r20,-866
 564:	b3 15 5a b3 	l\.muli r24,r21,23219

00000568 <l_addic>:
 568:	a0 00 00 00 	l\.addic r0,r0,0
 56c:	a3 ff ff ff 	l\.addic r31,r31,-1
 570:	a2 10 80 00 	l\.addic r16,r16,-32768
 574:	a1 ef 7f ff 	l\.addic r15,r15,32767
 578:	a0 21 00 01 	l\.addic r1,r1,1
 57c:	a0 d6 80 44 	l\.addic r6,r22,-32700
 580:	a2 69 f6 66 	l\.addic r19,r9,-2458
 584:	a3 7c 1a eb 	l\.addic r27,r28,6891

00000588 <l_sfgtu>:
 588:	e4 40 00 00 	l\.sfgtu r0,r0
 58c:	e4 5f f8 00 	l\.sfgtu r31,r31
 590:	e4 50 80 00 	l\.sfgtu r16,r16
 594:	e4 4f 78 00 	l\.sfgtu r15,r15
 598:	e4 41 08 00 	l\.sfgtu r1,r1
 59c:	e4 48 20 00 	l\.sfgtu r8,r4
 5a0:	e4 51 a8 00 	l\.sfgtu r17,r21
 5a4:	e4 46 28 00 	l\.sfgtu r6,r5

000005a8 <l_sfgeu>:
 5a8:	e4 60 00 00 	l\.sfgeu r0,r0
 5ac:	e4 7f f8 00 	l\.sfgeu r31,r31
 5b0:	e4 70 80 00 	l\.sfgeu r16,r16
 5b4:	e4 6f 78 00 	l\.sfgeu r15,r15
 5b8:	e4 61 08 00 	l\.sfgeu r1,r1
 5bc:	e4 6e 60 00 	l\.sfgeu r14,r12
 5c0:	e4 76 38 00 	l\.sfgeu r22,r7
 5c4:	e4 6d 08 00 	l\.sfgeu r13,r1

000005c8 <l_sfltu>:
 5c8:	e4 80 00 00 	l\.sfltu r0,r0
 5cc:	e4 9f f8 00 	l\.sfltu r31,r31
 5d0:	e4 90 80 00 	l\.sfltu r16,r16
 5d4:	e4 8f 78 00 	l\.sfltu r15,r15
 5d8:	e4 81 08 00 	l\.sfltu r1,r1
 5dc:	e4 81 68 00 	l\.sfltu r1,r13
 5e0:	e4 96 f0 00 	l\.sfltu r22,r30
 5e4:	e4 94 30 00 	l\.sfltu r20,r6

000005e8 <l_sfleu>:
 5e8:	e4 a0 00 00 	l\.sfleu r0,r0
 5ec:	e4 bf f8 00 	l\.sfleu r31,r31
 5f0:	e4 b0 80 00 	l\.sfleu r16,r16
 5f4:	e4 af 78 00 	l\.sfleu r15,r15
 5f8:	e4 a1 08 00 	l\.sfleu r1,r1
 5fc:	e4 b3 40 00 	l\.sfleu r19,r8
 600:	e4 bb 78 00 	l\.sfleu r27,r15
 604:	e4 bb 18 00 	l\.sfleu r27,r3

00000608 <l_sfgts>:
 608:	e5 40 00 00 	l\.sfgts r0,r0
 60c:	e5 5f f8 00 	l\.sfgts r31,r31
 610:	e5 50 80 00 	l\.sfgts r16,r16
 614:	e5 4f 78 00 	l\.sfgts r15,r15
 618:	e5 41 08 00 	l\.sfgts r1,r1
 61c:	e5 45 28 00 	l\.sfgts r5,r5
 620:	e5 5f 28 00 	l\.sfgts r31,r5
 624:	e5 5e 90 00 	l\.sfgts r30,r18

00000628 <l_sfges>:
 628:	e5 60 00 00 	l\.sfges r0,r0
 62c:	e5 7f f8 00 	l\.sfges r31,r31
 630:	e5 70 80 00 	l\.sfges r16,r16
 634:	e5 6f 78 00 	l\.sfges r15,r15
 638:	e5 61 08 00 	l\.sfges r1,r1
 63c:	e5 71 90 00 	l\.sfges r17,r18
 640:	e5 60 48 00 	l\.sfges r0,r9
 644:	e5 76 c8 00 	l\.sfges r22,r25

00000648 <l_sflts>:
 648:	e5 80 00 00 	l\.sflts r0,r0
 64c:	e5 9f f8 00 	l\.sflts r31,r31
 650:	e5 90 80 00 	l\.sflts r16,r16
 654:	e5 8f 78 00 	l\.sflts r15,r15
 658:	e5 81 08 00 	l\.sflts r1,r1
 65c:	e5 99 c0 00 	l\.sflts r25,r24
 660:	e5 97 68 00 	l\.sflts r23,r13
 664:	e5 8f 40 00 	l\.sflts r15,r8

00000668 <l_sfles>:
 668:	e5 a0 00 00 	l\.sfles r0,r0
 66c:	e5 bf f8 00 	l\.sfles r31,r31
 670:	e5 b0 80 00 	l\.sfles r16,r16
 674:	e5 af 78 00 	l\.sfles r15,r15
 678:	e5 a1 08 00 	l\.sfles r1,r1
 67c:	e5 b1 68 00 	l\.sfles r17,r13
 680:	e5 be c8 00 	l\.sfles r30,r25
 684:	e5 a0 60 00 	l\.sfles r0,r12

00000688 <l_sfgtui>:
 688:	bc 40 00 00 	l\.sfgtui r0,0x0
 68c:	bc 5f ff ff 	l\.sfgtui r31,0xffff
 690:	bc 50 80 00 	l\.sfgtui r16,0x8000
 694:	bc 4f 7f ff 	l\.sfgtui r15,0x7fff
 698:	bc 41 00 01 	l\.sfgtui r1,0x1
 69c:	bc 45 4b 21 	l\.sfgtui r5,0x4b21
 6a0:	bc 57 91 22 	l\.sfgtui r23,0x9122
 6a4:	bc 51 25 dd 	l\.sfgtui r17,0x25dd

000006a8 <l_sfgeui>:
 6a8:	bc 60 00 00 	l\.sfgeui r0,0x0
 6ac:	bc 7f ff ff 	l\.sfgeui r31,0xffff
 6b0:	bc 70 80 00 	l\.sfgeui r16,0x8000
 6b4:	bc 6f 7f ff 	l\.sfgeui r15,0x7fff
 6b8:	bc 61 00 01 	l\.sfgeui r1,0x1
 6bc:	bc 71 ec b6 	l\.sfgeui r17,0xecb6
 6c0:	bc 6f 40 13 	l\.sfgeui r15,0x4013
 6c4:	bc 66 f1 a4 	l\.sfgeui r6,0xf1a4

000006c8 <l_sfltui>:
 6c8:	bc 80 00 00 	l\.sfltui r0,0x0
 6cc:	bc 9f ff ff 	l\.sfltui r31,0xffff
 6d0:	bc 90 80 00 	l\.sfltui r16,0x8000
 6d4:	bc 8f 7f ff 	l\.sfltui r15,0x7fff
 6d8:	bc 81 00 01 	l\.sfltui r1,0x1
 6dc:	bc 83 cc af 	l\.sfltui r3,0xccaf
 6e0:	bc 98 4c fd 	l\.sfltui r24,0x4cfd
 6e4:	bc 8a 03 3e 	l\.sfltui r10,0x33e

000006e8 <l_sfleui>:
 6e8:	bc a0 00 00 	l\.sfleui r0,0x0
 6ec:	bc bf ff ff 	l\.sfleui r31,0xffff
 6f0:	bc b0 80 00 	l\.sfleui r16,0x8000
 6f4:	bc af 7f ff 	l\.sfleui r15,0x7fff
 6f8:	bc a1 00 01 	l\.sfleui r1,0x1
 6fc:	bc b7 9b 66 	l\.sfleui r23,0x9b66
 700:	bc b1 b6 d7 	l\.sfleui r17,0xb6d7
 704:	bc a9 a8 81 	l\.sfleui r9,0xa881

00000708 <l_sfgtsi>:
 708:	bd 40 00 00 	l\.sfgtsi r0,0
 70c:	bd 5f ff ff 	l\.sfgtsi r31,-1
 710:	bd 50 80 00 	l\.sfgtsi r16,-32768
 714:	bd 4f 7f ff 	l\.sfgtsi r15,32767
 718:	bd 41 00 01 	l\.sfgtsi r1,1
 71c:	bd 4d b6 82 	l\.sfgtsi r13,-18814
 720:	bd 4d d6 5f 	l\.sfgtsi r13,-10657
 724:	bd 5c 97 d5 	l\.sfgtsi r28,-26667

00000728 <l_sfgesi>:
 728:	bd 60 00 00 	l\.sfgesi r0,0
 72c:	bd 7f ff ff 	l\.sfgesi r31,-1
 730:	bd 70 80 00 	l\.sfgesi r16,-32768
 734:	bd 6f 7f ff 	l\.sfgesi r15,32767
 738:	bd 61 00 01 	l\.sfgesi r1,1
 73c:	bd 6c 09 48 	l\.sfgesi r12,2376
 740:	bd 69 7d 3b 	l\.sfgesi r9,32059
 744:	bd 6d 50 d8 	l\.sfgesi r13,20696

00000748 <l_sfltsi>:
 748:	bd 80 00 00 	l\.sfltsi r0,0
 74c:	bd 9f ff ff 	l\.sfltsi r31,-1
 750:	bd 90 80 00 	l\.sfltsi r16,-32768
 754:	bd 8f 7f ff 	l\.sfltsi r15,32767
 758:	bd 81 00 01 	l\.sfltsi r1,1
 75c:	bd 9e 0b cd 	l\.sfltsi r30,3021
 760:	bd 85 93 5b 	l\.sfltsi r5,-27813
 764:	bd 9c dd 90 	l\.sfltsi r28,-8816

00000768 <l_sflesi>:
 768:	bd a0 00 00 	l\.sflesi r0,0
 76c:	bd bf ff ff 	l\.sflesi r31,-1
 770:	bd b0 80 00 	l\.sflesi r16,-32768
 774:	bd af 7f ff 	l\.sflesi r15,32767
 778:	bd a1 00 01 	l\.sflesi r1,1
 77c:	bd b2 2c 4a 	l\.sflesi r18,11338
 780:	bd bd 49 b9 	l\.sflesi r29,18873
 784:	bd bc 65 c2 	l\.sflesi r28,26050

00000788 <l_sfeq>:
 788:	e4 00 00 00 	l\.sfeq r0,r0
 78c:	e4 1f f8 00 	l\.sfeq r31,r31
 790:	e4 10 80 00 	l\.sfeq r16,r16
 794:	e4 0f 78 00 	l\.sfeq r15,r15
 798:	e4 01 08 00 	l\.sfeq r1,r1
 79c:	e4 1c d0 00 	l\.sfeq r28,r26
 7a0:	e4 0d 30 00 	l\.sfeq r13,r6
 7a4:	e4 1a 48 00 	l\.sfeq r26,r9

000007a8 <l_sfeqi>:
 7a8:	bc 00 00 00 	l\.sfeqi r0,0
 7ac:	bc 1f ff ff 	l\.sfeqi r31,-1
 7b0:	bc 10 80 00 	l\.sfeqi r16,-32768
 7b4:	bc 0f 7f ff 	l\.sfeqi r15,32767
 7b8:	bc 01 00 01 	l\.sfeqi r1,1
 7bc:	bc 0a 65 1f 	l\.sfeqi r10,25887
 7c0:	bc 15 4d b6 	l\.sfeqi r21,19894
 7c4:	bc 12 cb 95 	l\.sfeqi r18,-13419

000007c8 <l_sfne>:
 7c8:	e4 20 00 00 	l\.sfne r0,r0
 7cc:	e4 3f f8 00 	l\.sfne r31,r31
 7d0:	e4 30 80 00 	l\.sfne r16,r16
 7d4:	e4 2f 78 00 	l\.sfne r15,r15
 7d8:	e4 21 08 00 	l\.sfne r1,r1
 7dc:	e4 32 d8 00 	l\.sfne r18,r27
 7e0:	e4 26 90 00 	l\.sfne r6,r18
 7e4:	e4 20 f0 00 	l\.sfne r0,r30

000007e8 <l_sfnei>:
 7e8:	bc 20 00 00 	l\.sfnei r0,0
 7ec:	bc 3f ff ff 	l\.sfnei r31,-1
 7f0:	bc 30 80 00 	l\.sfnei r16,-32768
 7f4:	bc 2f 7f ff 	l\.sfnei r15,32767
 7f8:	bc 21 00 01 	l\.sfnei r1,1
 7fc:	bc 28 2c 92 	l\.sfnei r8,11410
 800:	bc 26 b4 d9 	l\.sfnei r6,-19239
 804:	bc 34 a7 01 	l\.sfnei r20,-22783

00000808 <l_lo>:
 808:	9c 21 be ef 	l\.addi r1,r1,-16657

0000080c <l_hi>:
 80c:	18 20 de ad 	l\.movhi r1,-8531
