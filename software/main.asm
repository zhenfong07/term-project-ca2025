
main.elf:     file format elf32-littleriscv


Disassembly of section .text:

00000000 <_start>:
   0:	30401073          	csrw	mie,zero
   4:	34401073          	csrw	mip,zero
   8:	00008117          	auipc	sp,0x8
   c:	ff810113          	addi	sp,sp,-8 # 8000 <_stack_top>
  10:	18800293          	li	t0,392
  14:	18800313          	li	t1,392
  18:	0062d863          	bge	t0,t1,28 <zero_bss_end>

0000001c <zero_bss_loop>:
  1c:	0002a023          	sw	zero,0(t0)
  20:	00428293          	addi	t0,t0,4
  24:	fe62cce3          	blt	t0,t1,1c <zero_bss_loop>

00000028 <zero_bss_end>:
  28:	08c000ef          	jal	b4 <main>

0000002c <_exit>:
  2c:	0000006f          	j	2c <_exit>

00000030 <uart_putc>:
  30:	40000737          	lui	a4,0x40000
  34:	3e800793          	li	a5,1000
  38:	00a72823          	sw	a0,16(a4) # 40000010 <_stack_top+0x3fff8010>
  3c:	00000013          	nop
  40:	fff78793          	addi	a5,a5,-1
  44:	fe079ce3          	bnez	a5,3c <uart_putc+0xc>
  48:	00008067          	ret

0000004c <uart_puts>:
  4c:	00054783          	lbu	a5,0(a0)
  50:	00050713          	mv	a4,a0
  54:	02078663          	beqz	a5,80 <uart_puts+0x34>
  58:	400006b7          	lui	a3,0x40000
  5c:	01068693          	addi	a3,a3,16 # 40000010 <_stack_top+0x3fff8010>
  60:	00f6a023          	sw	a5,0(a3)
  64:	00170713          	addi	a4,a4,1
  68:	3e800793          	li	a5,1000
  6c:	00000013          	nop
  70:	fff78793          	addi	a5,a5,-1
  74:	fe079ce3          	bnez	a5,6c <uart_puts+0x20>
  78:	00074783          	lbu	a5,0(a4)
  7c:	fe0792e3          	bnez	a5,60 <uart_puts+0x14>
  80:	00008067          	ret

00000084 <busy_wait>:
  84:	ff010113          	addi	sp,sp,-16
  88:	00012623          	sw	zero,12(sp)
  8c:	00c12783          	lw	a5,12(sp)
  90:	00a7de63          	bge	a5,a0,ac <busy_wait+0x28>
  94:	00000013          	nop
  98:	00c12783          	lw	a5,12(sp)
  9c:	00178793          	addi	a5,a5,1
  a0:	00f12623          	sw	a5,12(sp)
  a4:	00c12783          	lw	a5,12(sp)
  a8:	fea7c6e3          	blt	a5,a0,94 <busy_wait+0x10>
  ac:	01010113          	addi	sp,sp,16
  b0:	00008067          	ret

000000b4 <main>:
  b4:	fe010113          	addi	sp,sp,-32
  b8:	00812c23          	sw	s0,24(sp)
  bc:	00112e23          	sw	ra,28(sp)
  c0:	00100713          	li	a4,1
  c4:	200007b7          	lui	a5,0x20000
  c8:	20000437          	lui	s0,0x20000
  cc:	00e7a223          	sw	a4,4(a5) # 20000004 <_stack_top+0x1fff8004>
  d0:	02040413          	addi	s0,s0,32 # 20000020 <_stack_top+0x1fff8020>
  d4:	0e000793          	li	a5,224
  d8:	00f42023          	sw	a5,0(s0)
  dc:	00000517          	auipc	a0,0x0
  e0:	09c50513          	addi	a0,a0,156 # 178 <main+0xc4>
  e4:	f69ff0ef          	jal	4c <uart_puts>
  e8:	0007a737          	lui	a4,0x7a
  ec:	01c00593          	li	a1,28
  f0:	11f70713          	addi	a4,a4,287 # 7a11f <_stack_top+0x7211f>
  f4:	0ff00613          	li	a2,255
  f8:	0e000693          	li	a3,224
  fc:	00b42023          	sw	a1,0(s0)
 100:	00012623          	sw	zero,12(sp)
 104:	00c12783          	lw	a5,12(sp)
 108:	00f74e63          	blt	a4,a5,124 <main+0x70>
 10c:	00000013          	nop
 110:	00c12783          	lw	a5,12(sp)
 114:	00178793          	addi	a5,a5,1
 118:	00f12623          	sw	a5,12(sp)
 11c:	00c12783          	lw	a5,12(sp)
 120:	fef756e3          	bge	a4,a5,10c <main+0x58>
 124:	00c42023          	sw	a2,0(s0)
 128:	00012423          	sw	zero,8(sp)
 12c:	00812783          	lw	a5,8(sp)
 130:	00f74e63          	blt	a4,a5,14c <main+0x98>
 134:	00000013          	nop
 138:	00812783          	lw	a5,8(sp)
 13c:	00178793          	addi	a5,a5,1
 140:	00f12423          	sw	a5,8(sp)
 144:	00812783          	lw	a5,8(sp)
 148:	fef756e3          	bge	a4,a5,134 <main+0x80>
 14c:	00d42023          	sw	a3,0(s0)
 150:	00012223          	sw	zero,4(sp)
 154:	00412783          	lw	a5,4(sp)
 158:	faf742e3          	blt	a4,a5,fc <main+0x48>
 15c:	00000013          	nop
 160:	00412783          	lw	a5,4(sp)
 164:	00178793          	addi	a5,a5,1
 168:	00f12223          	sw	a5,4(sp)
 16c:	00412783          	lw	a5,4(sp)
 170:	fef756e3          	bge	a4,a5,15c <main+0xa8>
 174:	f89ff06f          	j	fc <main+0x48>
 178:	4756                	.insn	2, 0x4756
 17a:	2041                	.insn	2, 0x2041
 17c:	6552                	.insn	2, 0x6552
 17e:	2064                	.insn	2, 0x2064
 180:	6554                	.insn	2, 0x6554
 182:	0a0d7473          	csrrci	s0,0xa0,26
	...

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	020d                	.insn	2, 0x020d
   2:	0000                	.insn	2, 0x
   4:	0005                	.insn	2, 0x0005
   6:	0401                	.insn	2, 0x0401
   8:	0000                	.insn	2, 0x
   a:	0000                	.insn	2, 0x
   c:	2708                	.insn	2, 0x2708
   e:	0000                	.insn	2, 0x
  10:	1d00                	.insn	2, 0x1d00
  12:	0000002f          	.insn	4, 0x002f
  16:	0000                	.insn	2, 0x
  18:	0000                	.insn	2, 0x
  1a:	0036                	.insn	2, 0x0036
	...
  24:	0000                	.insn	2, 0x
  26:	0101                	.insn	2, 0x0101
  28:	0806                	.insn	2, 0x0806
  2a:	0000                	.insn	2, 0x
  2c:	0100                	.insn	2, 0x0100
  2e:	0502                	.insn	2, 0x0502
  30:	00c4                	.insn	2, 0x00c4
  32:	0000                	.insn	2, 0x
  34:	0401                	.insn	2, 0x0401
  36:	bb05                	.insn	2, 0xbb05
  38:	0000                	.insn	2, 0x
  3a:	0100                	.insn	2, 0x0100
  3c:	0508                	.insn	2, 0x0508
  3e:	00b6                	.insn	2, 0x00b6
  40:	0000                	.insn	2, 0x
  42:	0101                	.insn	2, 0x0101
  44:	0608                	.insn	2, 0x0608
  46:	0000                	.insn	2, 0x
  48:	0100                	.insn	2, 0x0100
  4a:	0702                	.insn	2, 0x0702
  4c:	0014                	.insn	2, 0x0014
  4e:	0000                	.insn	2, 0x
  50:	d809                	.insn	2, 0xd809
  52:	0000                	.insn	2, 0x
  54:	0200                	.insn	2, 0x0200
  56:	1934                	.insn	2, 0x1934
  58:	005c                	.insn	2, 0x005c
  5a:	0000                	.insn	2, 0x
  5c:	0401                	.insn	2, 0x0401
  5e:	0000a407          	.insn	4, 0xa407
  62:	0100                	.insn	2, 0x0100
  64:	0708                	.insn	2, 0x0708
  66:	009f 0000 040a      	.insn	6, 0x040a0000009f
  6c:	6905                	.insn	2, 0x6905
  6e:	746e                	.insn	2, 0x746e
  70:	0b00                	.insn	2, 0x0b00
  72:	006a                	.insn	2, 0x006a
  74:	0000                	.insn	2, 0x
  76:	0401                	.insn	2, 0x0401
  78:	0000a907          	.insn	4, 0xa907
  7c:	0c00                	.insn	2, 0x0c00
  7e:	009a                	.insn	2, 0x009a
  80:	0000                	.insn	2, 0x
  82:	2001                	.insn	2, 0x2001
  84:	6a05                	.insn	2, 0x6a05
  86:	0000                	.insn	2, 0x
  88:	b400                	.insn	2, 0xb400
  8a:	0000                	.insn	2, 0x
  8c:	c400                	.insn	2, 0xc400
  8e:	0000                	.insn	2, 0x
  90:	0100                	.insn	2, 0x0100
  92:	1f9c                	.insn	2, 0x1f9c
  94:	0001                	.insn	2, 0x0001
  96:	0d00                	.insn	2, 0x0d00
  98:	011f 0000 00e8      	.insn	6, 0x00e80000011f
  9e:	0000                	.insn	2, 0x
  a0:	00000027          	.insn	4, 0x0027
  a4:	2e01                	.insn	2, 0x2e01
  a6:	c309                	.insn	2, 0xc309
  a8:	0000                	.insn	2, 0x
  aa:	0300                	.insn	2, 0x0300
  ac:	0129                	.insn	2, 0x0129
  ae:	0000                	.insn	2, 0x
  b0:	000c                	.insn	2, 0x000c
  b2:	0000                	.insn	2, 0x
  b4:	270e                	.insn	2, 0x270e
  b6:	0000                	.insn	2, 0x
  b8:	0200                	.insn	2, 0x0200
  ba:	0135                	.insn	2, 0x0135
  bc:	0000                	.insn	2, 0x
  be:	9102                	.insn	2, 0x9102
  c0:	006c                	.insn	2, 0x006c
  c2:	0400                	.insn	2, 0x0400
  c4:	011f 0000 0128      	.insn	6, 0x01280000011f
  ca:	0000                	.insn	2, 0x
  cc:	0024                	.insn	2, 0x0024
  ce:	0000                	.insn	2, 0x
  d0:	e732                	.insn	2, 0xe732
  d2:	0000                	.insn	2, 0x
  d4:	0300                	.insn	2, 0x0300
  d6:	0129                	.insn	2, 0x0129
  d8:	0000                	.insn	2, 0x
  da:	001a                	.insn	2, 0x001a
  dc:	0000                	.insn	2, 0x
  de:	3502                	.insn	2, 0x3502
  e0:	0001                	.insn	2, 0x0001
  e2:	0200                	.insn	2, 0x0200
  e4:	6891                	.insn	2, 0x6891
  e6:	0400                	.insn	2, 0x0400
  e8:	011f 0000 0150      	.insn	6, 0x01500000011f
  ee:	0000                	.insn	2, 0x
  f0:	0028                	.insn	2, 0x0028
  f2:	0000                	.insn	2, 0x
  f4:	0b36                	.insn	2, 0x0b36
  f6:	0001                	.insn	2, 0x0001
  f8:	0f00                	.insn	2, 0x0f00
  fa:	0129                	.insn	2, 0x0129
  fc:	0000                	.insn	2, 0x
  fe:	a120                	.insn	2, 0xa120
 100:	35020007          	.insn	4, 0x35020007
 104:	0001                	.insn	2, 0x0001
 106:	0200                	.insn	2, 0x0200
 108:	6491                	.insn	2, 0x6491
 10a:	1000                	.insn	2, 0x1000
 10c:	00e8                	.insn	2, 0x00e8
 10e:	0000                	.insn	2, 0x
 110:	0000013f 055a0111 	.insn	8, 0x055a01110000013f
 118:	00017803          	.insn	4, 0x00017803
 11c:	0000                	.insn	2, 0x
 11e:	0500                	.insn	2, 0x0500
 120:	0090                	.insn	2, 0x0090
 122:	0000                	.insn	2, 0x
 124:	00013f1b          	.insn	4, 0x00013f1b
 128:	1200                	.insn	2, 0x1200
 12a:	0000                	.insn	2, 0x
 12c:	0000                	.insn	2, 0x
 12e:	1b01                	.insn	2, 0x1b01
 130:	6a14                	.insn	2, 0x6a14
 132:	0000                	.insn	2, 0x
 134:	0600                	.insn	2, 0x0600
 136:	0069                	.insn	2, 0x0069
 138:	121c                	.insn	2, 0x121c
 13a:	0071                	.insn	2, 0x0071
 13c:	0000                	.insn	2, 0x
 13e:	1300                	.insn	2, 0x1300
 140:	00e1                	.insn	2, 0x00e1
 142:	0000                	.insn	2, 0x
 144:	1701                	.insn	2, 0x1701
 146:	4c06                	.insn	2, 0x4c06
 148:	0000                	.insn	2, 0x
 14a:	3800                	.insn	2, 0x3800
 14c:	0000                	.insn	2, 0x
 14e:	0100                	.insn	2, 0x0100
 150:	919c                	.insn	2, 0x919c
 152:	0001                	.insn	2, 0x0001
 154:	1400                	.insn	2, 0x1400
 156:	17010073          	.insn	4, 0x17010073
 15a:	911c                	.insn	2, 0x911c
 15c:	0001                	.insn	2, 0x0001
 15e:	2800                	.insn	2, 0x2800
 160:	0000                	.insn	2, 0x
 162:	1500                	.insn	2, 0x1500
 164:	000001a3          	sb	zero,3(zero) # 3 <_start+0x3>
 168:	0058                	.insn	2, 0x0058
 16a:	0000                	.insn	2, 0x
 16c:	000c                	.insn	2, 0x000c
 16e:	0000                	.insn	2, 0x
 170:	1801                	.insn	2, 0x1801
 172:	0310                	.insn	2, 0x0310
 174:	01ad                	.insn	2, 0x01ad
 176:	0000                	.insn	2, 0x
 178:	0038                	.insn	2, 0x0038
 17a:	0000                	.insn	2, 0x
 17c:	b716                	.insn	2, 0xb716
 17e:	0001                	.insn	2, 0x0001
 180:	1b00                	.insn	2, 0x1b00
 182:	0000                	.insn	2, 0x
 184:	1700                	.insn	2, 0x1700
 186:	01b8                	.insn	2, 0x01b8
 188:	0000                	.insn	2, 0x
 18a:	0041                	.insn	2, 0x0041
 18c:	0000                	.insn	2, 0x
 18e:	0000                	.insn	2, 0x
 190:	1800                	.insn	2, 0x1800
 192:	9e04                	.insn	2, 0x9e04
 194:	0001                	.insn	2, 0x0001
 196:	0100                	.insn	2, 0x0100
 198:	0801                	.insn	2, 0x0801
 19a:	0000000f          	fence	unknown,unknown
 19e:	9719                	.insn	2, 0x9719
 1a0:	0001                	.insn	2, 0x0001
 1a2:	0500                	.insn	2, 0x0500
 1a4:	00ce                	.insn	2, 0x00ce
 1a6:	0000                	.insn	2, 0x
 1a8:	c311                	.insn	2, 0xc311
 1aa:	0001                	.insn	2, 0x0001
 1ac:	1a00                	.insn	2, 0x1a00
 1ae:	11010063          	beq	sp,a6,2ae <_heap_start+0x11e>
 1b2:	9715                	.insn	2, 0x9715
 1b4:	0001                	.insn	2, 0x0001
 1b6:	1b00                	.insn	2, 0x1b00
 1b8:	6906                	.insn	2, 0x6906
 1ba:	1400                	.insn	2, 0x1400
 1bc:	6a0d                	.insn	2, 0x6a0d
 1be:	0000                	.insn	2, 0x
 1c0:	0000                	.insn	2, 0x
 1c2:	1c00                	.insn	2, 0x1c00
 1c4:	000001a3          	sb	zero,3(zero) # 3 <_start+0x3>
 1c8:	0030                	.insn	2, 0x0030
 1ca:	0000                	.insn	2, 0x
 1cc:	001c                	.insn	2, 0x001c
 1ce:	0000                	.insn	2, 0x
 1d0:	9c01                	.insn	2, 0x9c01
 1d2:	01f1                	.insn	2, 0x01f1
 1d4:	0000                	.insn	2, 0x
 1d6:	0001ad07          	.insn	4, 0x0001ad07
 1da:	0100                	.insn	2, 0x0100
 1dc:	1d5a                	.insn	2, 0x1d5a
 1de:	000001b7          	lui	gp,0x0
 1e2:	003c                	.insn	2, 0x003c
 1e4:	0000                	.insn	2, 0x
 1e6:	000c                	.insn	2, 0x000c
 1e8:	0000                	.insn	2, 0x
 1ea:	b81e                	.insn	2, 0xb81e
 1ec:	0001                	.insn	2, 0x0001
 1ee:	0000                	.insn	2, 0x
 1f0:	1f00                	.insn	2, 0x1f00
 1f2:	011f 0000 0084      	.insn	6, 0x00840000011f
 1f8:	0000                	.insn	2, 0x
 1fa:	0030                	.insn	2, 0x0030
 1fc:	0000                	.insn	2, 0x
 1fe:	9c01                	.insn	2, 0x9c01
 200:	00012907          	.insn	4, 0x00012907
 204:	0100                	.insn	2, 0x0100
 206:	025a                	.insn	2, 0x025a
 208:	0135                	.insn	2, 0x0135
 20a:	0000                	.insn	2, 0x
 20c:	9102                	.insn	2, 0x9102
 20e:	007c                	.insn	2, 0x007c
 210:	2000                	.insn	2, 0x2000
 212:	0000                	.insn	2, 0x
 214:	0500                	.insn	2, 0x0500
 216:	0100                	.insn	2, 0x0100
 218:	9e04                	.insn	2, 0x9e04
 21a:	0001                	.insn	2, 0x0001
 21c:	0100                	.insn	2, 0x0100
 21e:	038a                	.insn	2, 0x038a
 220:	0000                	.insn	2, 0x
 222:	0000                	.insn	2, 0x
 224:	0000                	.insn	2, 0x
 226:	eb3c                	.insn	2, 0xeb3c
 228:	0000                	.insn	2, 0x
 22a:	f300                	.insn	2, 0xf300
 22c:	0000                	.insn	2, 0x
 22e:	2200                	.insn	2, 0x2200
 230:	0001                	.insn	2, 0x0001
 232:	0100                	.insn	2, 0x0100
 234:	Address 0x234 is out of bounds.


Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	2401                	.insn	2, 0x2401
   2:	0b00                	.insn	2, 0x0b00
   4:	030b3e0b          	.insn	4, 0x030b3e0b
   8:	000e                	.insn	2, 0x000e
   a:	0200                	.insn	2, 0x0200
   c:	0034                	.insn	2, 0x0034
   e:	1331                	.insn	2, 0x1331
  10:	1802                	.insn	2, 0x1802
  12:	0000                	.insn	2, 0x
  14:	31000503          	lb	a0,784(zero) # 310 <_heap_start+0x180>
  18:	00170213          	addi	tp,a4,1
  1c:	0400                	.insn	2, 0x0400
  1e:	011d                	.insn	2, 0x011d
  20:	1331                	.insn	2, 0x1331
  22:	0111                	.insn	2, 0x0111
  24:	0612                	.insn	2, 0x0612
  26:	2158                	.insn	2, 0x2158
  28:	5901                	.insn	2, 0x5901
  2a:	0921570b          	.insn	4, 0x0921570b
  2e:	1301                	.insn	2, 0x1301
  30:	0000                	.insn	2, 0x
  32:	2e05                	.insn	2, 0x2e05
  34:	3f01                	.insn	2, 0x3f01
  36:	0319                	.insn	2, 0x0319
  38:	3a0e                	.insn	2, 0x3a0e
  3a:	0121                	.insn	2, 0x0121
  3c:	21390b3b          	.insn	4, 0x21390b3b
  40:	2706                	.insn	2, 0x2706
  42:	2019                	.insn	2, 0x2019
  44:	0121                	.insn	2, 0x0121
  46:	1301                	.insn	2, 0x1301
  48:	0000                	.insn	2, 0x
  4a:	3406                	.insn	2, 0x3406
  4c:	0300                	.insn	2, 0x0300
  4e:	3a08                	.insn	2, 0x3a08
  50:	0121                	.insn	2, 0x0121
  52:	0b390b3b          	.insn	4, 0x0b390b3b
  56:	1349                	.insn	2, 0x1349
  58:	0000                	.insn	2, 0x
  5a:	31000507          	.insn	4, 0x31000507
  5e:	00180213          	addi	tp,a6,1
  62:	0800                	.insn	2, 0x0800
  64:	0111                	.insn	2, 0x0111
  66:	0e25                	.insn	2, 0x0e25
  68:	1f030b13          	addi	s6,t1,496
  6c:	17551f1b          	.insn	4, 0x17551f1b
  70:	0111                	.insn	2, 0x0111
  72:	1710                	.insn	2, 0x1710
  74:	0000                	.insn	2, 0x
  76:	1609                	.insn	2, 0x1609
  78:	0300                	.insn	2, 0x0300
  7a:	3a0e                	.insn	2, 0x3a0e
  7c:	390b3b0b          	.insn	4, 0x390b3b0b
  80:	0013490b          	.insn	4, 0x0013490b
  84:	0a00                	.insn	2, 0x0a00
  86:	0024                	.insn	2, 0x0024
  88:	0b3e0b0b          	.insn	4, 0x0b3e0b0b
  8c:	00000803          	lb	a6,0(zero) # 0 <_start>
  90:	4900350b          	.insn	4, 0x4900350b
  94:	0c000013          	li	zero,192
  98:	012e                	.insn	2, 0x012e
  9a:	0e03193f 0b3b0b3a 	.insn	8, 0x0b3b0b3a0e03193f
  a2:	0b39                	.insn	2, 0x0b39
  a4:	13491927          	.insn	4, 0x13491927
  a8:	0111                	.insn	2, 0x0111
  aa:	0612                	.insn	2, 0x0612
  ac:	1840                	.insn	2, 0x1840
  ae:	197a                	.insn	2, 0x197a
  b0:	1301                	.insn	2, 0x1301
  b2:	0000                	.insn	2, 0x
  b4:	1d0d                	.insn	2, 0x1d0d
  b6:	3101                	.insn	2, 0x3101
  b8:	55015213          	.insn	4, 0x55015213
  bc:	590b5817          	auipc	a6,0x590b5
  c0:	010b570b          	.insn	4, 0x010b570b
  c4:	0e000013          	li	zero,224
  c8:	1755010b          	.insn	4, 0x1755010b
  cc:	0000                	.insn	2, 0x
  ce:	3100050f          	.insn	4, 0x3100050f
  d2:	00061c13          	slli	s8,a2,0x0
  d6:	1000                	.insn	2, 0x1000
  d8:	0148                	.insn	2, 0x0148
  da:	017d                	.insn	2, 0x017d
  dc:	0000137f 02004911 	.insn	12, 0x00187e18020049110000137f
  e4:	00187e18 
  e8:	1200                	.insn	2, 0x1200
  ea:	0005                	.insn	2, 0x0005
  ec:	0b3a0e03          	lb	t3,179(s4)
  f0:	0b390b3b          	.insn	4, 0x0b390b3b
  f4:	1349                	.insn	2, 0x1349
  f6:	0000                	.insn	2, 0x
  f8:	3f012e13          	slti	t3,sp,1008
  fc:	0319                	.insn	2, 0x0319
  fe:	3a0e                	.insn	2, 0x3a0e
 100:	390b3b0b          	.insn	4, 0x390b3b0b
 104:	1119270b          	.insn	4, 0x1119270b
 108:	1201                	.insn	2, 0x1201
 10a:	4006                	.insn	2, 0x4006
 10c:	7a18                	.insn	2, 0x7a18
 10e:	0119                	.insn	2, 0x0119
 110:	14000013          	li	zero,320
 114:	0005                	.insn	2, 0x0005
 116:	0b3a0803          	lb	a6,179(s4)
 11a:	0b390b3b          	.insn	4, 0x0b390b3b
 11e:	1349                	.insn	2, 0x1349
 120:	1702                	.insn	2, 0x1702
 122:	0000                	.insn	2, 0x
 124:	1d15                	.insn	2, 0x1d15
 126:	3101                	.insn	2, 0x3101
 128:	55015213          	.insn	4, 0x55015213
 12c:	590b5817          	auipc	a6,0x590b5
 130:	000b570b          	.insn	4, 0x000b570b
 134:	1600                	.insn	2, 0x1600
 136:	1331010b          	.insn	4, 0x1331010b
 13a:	1755                	.insn	2, 0x1755
 13c:	0000                	.insn	2, 0x
 13e:	31003417          	auipc	s0,0x31003
 142:	00170213          	addi	tp,a4,1
 146:	1800                	.insn	2, 0x1800
 148:	0b0b000f          	.insn	4, 0x0b0b000f
 14c:	1349                	.insn	2, 0x1349
 14e:	0000                	.insn	2, 0x
 150:	2619                	.insn	2, 0x2619
 152:	4900                	.insn	2, 0x4900
 154:	1a000013          	li	zero,416
 158:	0005                	.insn	2, 0x0005
 15a:	0b3a0803          	lb	a6,179(s4)
 15e:	0b390b3b          	.insn	4, 0x0b390b3b
 162:	1349                	.insn	2, 0x1349
 164:	0000                	.insn	2, 0x
 166:	00010b1b          	.insn	4, 0x00010b1b
 16a:	1c00                	.insn	2, 0x1c00
 16c:	012e                	.insn	2, 0x012e
 16e:	1331                	.insn	2, 0x1331
 170:	0111                	.insn	2, 0x0111
 172:	0612                	.insn	2, 0x0612
 174:	1840                	.insn	2, 0x1840
 176:	197a                	.insn	2, 0x197a
 178:	1301                	.insn	2, 0x1301
 17a:	0000                	.insn	2, 0x
 17c:	0b1d                	.insn	2, 0x0b1d
 17e:	3101                	.insn	2, 0x3101
 180:	12011113          	.insn	4, 0x12011113
 184:	0006                	.insn	2, 0x0006
 186:	1e00                	.insn	2, 0x1e00
 188:	0034                	.insn	2, 0x0034
 18a:	1331                	.insn	2, 0x1331
 18c:	0000                	.insn	2, 0x
 18e:	2e1f 3101 1113      	.insn	6, 0x111331012e1f
 194:	1201                	.insn	2, 0x1201
 196:	4006                	.insn	2, 0x4006
 198:	7a18                	.insn	2, 0x7a18
 19a:	0019                	.insn	2, 0x0019
 19c:	0000                	.insn	2, 0x
 19e:	1101                	.insn	2, 0x1101
 1a0:	1000                	.insn	2, 0x1000
 1a2:	12011117          	auipc	sp,0x12011
 1a6:	1b0e030f          	.insn	4, 0x1b0e030f
 1aa:	250e                	.insn	2, 0x250e
 1ac:	130e                	.insn	2, 0x130e
 1ae:	0005                	.insn	2, 0x0005
	...

Disassembly of section .debug_loclists:

00000000 <.debug_loclists>:
   0:	00000047          	.insn	4, 0x0047
   4:	0005                	.insn	2, 0x0005
   6:	0004                	.insn	2, 0x0004
   8:	0000                	.insn	2, 0x
   a:	0000                	.insn	2, 0x
   c:	0008                	.insn	2, 0x0008
   e:	0001                	.insn	2, 0x0001
  10:	2400                	.insn	2, 0x2400
  12:	0c06                	.insn	2, 0x0c06
  14:	a120                	.insn	2, 0xa120
  16:	009f0007          	.insn	4, 0x009f0007
  1a:	2808                	.insn	2, 0x2808
  1c:	0001                	.insn	2, 0x0001
  1e:	2400                	.insn	2, 0x2400
  20:	0c06                	.insn	2, 0x0c06
  22:	a120                	.insn	2, 0xa120
  24:	009f0007          	.insn	4, 0x009f0007
  28:	4c06                	.insn	2, 0x4c06
  2a:	0000                	.insn	2, 0x
  2c:	0400                	.insn	2, 0x0400
  2e:	1400                	.insn	2, 0x1400
  30:	5a01                	.insn	2, 0x5a01
  32:	1404                	.insn	2, 0x1404
  34:	0138                	.insn	2, 0x0138
  36:	005e                	.insn	2, 0x005e
  38:	6808                	.insn	2, 0x6808
  3a:	0000                	.insn	2, 0x
  3c:	0400                	.insn	2, 0x0400
  3e:	5f01                	.insn	2, 0x5f01
  40:	0800                	.insn	2, 0x0800
  42:	0068                	.insn	2, 0x0068
  44:	0000                	.insn	2, 0x
  46:	0204                	.insn	2, 0x0204
  48:	9f30                	.insn	2, 0x9f30
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0024                	.insn	2, 0x0024
   2:	0000                	.insn	2, 0x
   4:	0002                	.insn	2, 0x0002
   6:	0000                	.insn	2, 0x
   8:	0000                	.insn	2, 0x
   a:	0004                	.insn	2, 0x0004
   c:	0000                	.insn	2, 0x
   e:	0000                	.insn	2, 0x
  10:	0030                	.insn	2, 0x0030
  12:	0000                	.insn	2, 0x
  14:	0084                	.insn	2, 0x0084
  16:	0000                	.insn	2, 0x
  18:	00b4                	.insn	2, 0x00b4
  1a:	0000                	.insn	2, 0x
  1c:	00c4                	.insn	2, 0x00c4
	...
  26:	0000                	.insn	2, 0x
  28:	001c                	.insn	2, 0x001c
  2a:	0000                	.insn	2, 0x
  2c:	0002                	.insn	2, 0x0002
  2e:	0211                	.insn	2, 0x0211
  30:	0000                	.insn	2, 0x
  32:	0004                	.insn	2, 0x0004
	...
  3c:	0030                	.insn	2, 0x0030
	...

Disassembly of section .debug_rnglists:

00000000 <.debug_rnglists>:
   0:	0041                	.insn	2, 0x0041
   2:	0000                	.insn	2, 0x
   4:	0005                	.insn	2, 0x0005
   6:	0004                	.insn	2, 0x0004
   8:	0000                	.insn	2, 0x
   a:	0000                	.insn	2, 0x
   c:	5805                	.insn	2, 0x5805
   e:	0000                	.insn	2, 0x
  10:	0400                	.insn	2, 0x0400
  12:	0800                	.insn	2, 0x0800
  14:	0804                	.insn	2, 0x0804
  16:	040c                	.insn	2, 0x040c
  18:	2010                	.insn	2, 0x2010
  1a:	0500                	.insn	2, 0x0500
  1c:	0068                	.insn	2, 0x0068
  1e:	0000                	.insn	2, 0x
  20:	0004                	.insn	2, 0x0004
  22:	0400                	.insn	2, 0x0400
  24:	1004                	.insn	2, 0x1004
  26:	0500                	.insn	2, 0x0500
  28:	00e8                	.insn	2, 0x00e8
  2a:	0000                	.insn	2, 0x
  2c:	0004                	.insn	2, 0x0004
  2e:	0404                	.insn	2, 0x0404
  30:	0c08                	.insn	2, 0x0c08
  32:	1804                	.insn	2, 0x1804
  34:	003c                	.insn	2, 0x003c
  36:	00003007          	.insn	4, 0x3007
  3a:	8400                	.insn	2, 0x8400
  3c:	0701                	.insn	2, 0x0701
  3e:	00b4                	.insn	2, 0x00b4
  40:	0000                	.insn	2, 0x
  42:	01c4                	.insn	2, 0x01c4
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	0386                	.insn	2, 0x0386
   2:	0000                	.insn	2, 0x
   4:	0005                	.insn	2, 0x0005
   6:	0004                	.insn	2, 0x0004
   8:	00000033          	add	zero,zero,zero
   c:	0101                	.insn	2, 0x0101
   e:	fb01                	.insn	2, 0xfb01
  10:	0d0e                	.insn	2, 0x0d0e
  12:	0100                	.insn	2, 0x0100
  14:	0101                	.insn	2, 0x0101
  16:	0001                	.insn	2, 0x0001
  18:	0000                	.insn	2, 0x
  1a:	0001                	.insn	2, 0x0001
  1c:	0100                	.insn	2, 0x0100
  1e:	0101                	.insn	2, 0x0101
  20:	021f 0000 0000      	.insn	6, 0x021f
  26:	0036                	.insn	2, 0x0036
  28:	0000                	.insn	2, 0x
  2a:	0102                	.insn	2, 0x0102
  2c:	021f 030f 002f      	.insn	6, 0x002f030f021f
  32:	0000                	.insn	2, 0x
  34:	2f00                	.insn	2, 0x2f00
  36:	0000                	.insn	2, 0x
  38:	0000                	.insn	2, 0x
  3a:	0066                	.insn	2, 0x0066
  3c:	0000                	.insn	2, 0x
  3e:	0501                	.insn	2, 0x0501
  40:	0018                	.insn	2, 0x0018
  42:	0205                	.insn	2, 0x0205
  44:	0030                	.insn	2, 0x0030
  46:	0000                	.insn	2, 0x
  48:	05011003          	lh	zero,80(sp) # 120111f2 <_stack_top+0x120091f2>
  4c:	0305                	.insn	2, 0x0305
  4e:	0901                	.insn	2, 0x0901
  50:	0000                	.insn	2, 0x
  52:	0501                	.insn	2, 0x0501
  54:	0612                	.insn	2, 0x0612
  56:	00090003          	lb	zero,0(s2)
  5a:	0100                	.insn	2, 0x0100
  5c:	0505                	.insn	2, 0x0505
  5e:	0306                	.insn	2, 0x0306
  60:	0902                	.insn	2, 0x0902
  62:	000c                	.insn	2, 0x000c
  64:	0501                	.insn	2, 0x0501
  66:	0309                	.insn	2, 0x0309
  68:	0900                	.insn	2, 0x0900
  6a:	0000                	.insn	2, 0x
  6c:	0501                	.insn	2, 0x0501
  6e:	04020013          	addi	zero,tp,64 # 40 <uart_putc+0x10>
  72:	0301                	.insn	2, 0x0301
  74:	0900                	.insn	2, 0x0900
  76:	0000                	.insn	2, 0x
  78:	0501                	.insn	2, 0x0501
  7a:	001f 0402 0303      	.insn	6, 0x03030402001f
  80:	0900                	.insn	2, 0x0900
  82:	0000                	.insn	2, 0x
  84:	0501                	.insn	2, 0x0501
  86:	0402001b          	.insn	4, 0x0402001b
  8a:	09000303          	lb	t1,144(zero) # 90 <busy_wait+0xc>
  8e:	0004                	.insn	2, 0x0004
  90:	0501                	.insn	2, 0x0501
  92:	04020013          	addi	zero,tp,64 # 40 <uart_putc+0x10>
  96:	0301                	.insn	2, 0x0301
  98:	0900                	.insn	2, 0x0900
  9a:	0000                	.insn	2, 0x
  9c:	0501                	.insn	2, 0x0501
  9e:	0601                	.insn	2, 0x0601
  a0:	08090103          	lb	sp,128(s2)
  a4:	0100                	.insn	2, 0x0100
  a6:	1f05                	.insn	2, 0x1f05
  a8:	0306                	.insn	2, 0x0306
  aa:	0902                	.insn	2, 0x0902
  ac:	0004                	.insn	2, 0x0004
  ae:	0501                	.insn	2, 0x0501
  b0:	0305                	.insn	2, 0x0305
  b2:	0901                	.insn	2, 0x0901
  b4:	0000                	.insn	2, 0x
  b6:	0501                	.insn	2, 0x0501
  b8:	000c                	.insn	2, 0x000c
  ba:	0402                	.insn	2, 0x0402
  bc:	0601                	.insn	2, 0x0601
  be:	00090003          	lb	zero,0(s2)
  c2:	0100                	.insn	2, 0x0100
  c4:	1f05                	.insn	2, 0x1f05
  c6:	04097f03          	.insn	4, 0x04097f03
  ca:	0100                	.insn	2, 0x0100
  cc:	0c05                	.insn	2, 0x0c05
  ce:	0200                	.insn	2, 0x0200
  d0:	0104                	.insn	2, 0x0104
  d2:	0306                	.insn	2, 0x0306
  d4:	0901                	.insn	2, 0x0901
  d6:	0004                	.insn	2, 0x0004
  d8:	0501                	.insn	2, 0x0501
  da:	0612                	.insn	2, 0x0612
  dc:	04097a03          	.insn	4, 0x04097a03
  e0:	0100                	.insn	2, 0x0100
  e2:	1005                	.insn	2, 0x1005
  e4:	0200                	.insn	2, 0x0200
  e6:	0204                	.insn	2, 0x0204
  e8:	0306                	.insn	2, 0x0306
  ea:	0906                	.insn	2, 0x0906
  ec:	0008                	.insn	2, 0x0008
  ee:	0501                	.insn	2, 0x0501
  f0:	0612                	.insn	2, 0x0612
  f2:	00097a03          	.insn	4, 0x00097a03
  f6:	0100                	.insn	2, 0x0100
  f8:	1c05                	.insn	2, 0x1c05
  fa:	0200                	.insn	2, 0x0200
  fc:	0204                	.insn	2, 0x0204
  fe:	04090603          	lb	a2,64(s2)
 102:	0100                	.insn	2, 0x0100
 104:	0505                	.insn	2, 0x0505
 106:	0306                	.insn	2, 0x0306
 108:	097a                	.insn	2, 0x097a
 10a:	0004                	.insn	2, 0x0004
 10c:	0301                	.insn	2, 0x0301
 10e:	0902                	.insn	2, 0x0902
 110:	0000                	.insn	2, 0x
 112:	0501                	.insn	2, 0x0501
 114:	0309                	.insn	2, 0x0309
 116:	0900                	.insn	2, 0x0900
 118:	0000                	.insn	2, 0x
 11a:	0501                	.insn	2, 0x0501
 11c:	04020013          	addi	zero,tp,64 # 40 <uart_putc+0x10>
 120:	0301                	.insn	2, 0x0301
 122:	0900                	.insn	2, 0x0900
 124:	0000                	.insn	2, 0x
 126:	0501                	.insn	2, 0x0501
 128:	0612                	.insn	2, 0x0612
 12a:	00097e03          	.insn	4, 0x00097e03
 12e:	0100                	.insn	2, 0x0100
 130:	1f05                	.insn	2, 0x1f05
 132:	0200                	.insn	2, 0x0200
 134:	0304                	.insn	2, 0x0304
 136:	0306                	.insn	2, 0x0306
 138:	0902                	.insn	2, 0x0902
 13a:	0004                	.insn	2, 0x0004
 13c:	0501                	.insn	2, 0x0501
 13e:	0402001b          	.insn	4, 0x0402001b
 142:	09000303          	lb	t1,144(zero) # 90 <busy_wait+0xc>
 146:	0004                	.insn	2, 0x0004
 148:	0501                	.insn	2, 0x0501
 14a:	04020013          	addi	zero,tp,64 # 40 <uart_putc+0x10>
 14e:	0301                	.insn	2, 0x0301
 150:	0900                	.insn	2, 0x0900
 152:	0000                	.insn	2, 0x
 154:	0501                	.insn	2, 0x0501
 156:	000c                	.insn	2, 0x000c
 158:	0402                	.insn	2, 0x0402
 15a:	0301                	.insn	2, 0x0301
 15c:	0904                	.insn	2, 0x0904
 15e:	0008                	.insn	2, 0x0008
 160:	0501                	.insn	2, 0x0501
 162:	0601                	.insn	2, 0x0601
 164:	08090103          	lb	sp,128(s2)
 168:	0100                	.insn	2, 0x0100
 16a:	1b05                	.insn	2, 0x1b05
 16c:	0306                	.insn	2, 0x0306
 16e:	0902                	.insn	2, 0x0902
 170:	0004                	.insn	2, 0x0004
 172:	0501                	.insn	2, 0x0501
 174:	0305                	.insn	2, 0x0305
 176:	0901                	.insn	2, 0x0901
 178:	0000                	.insn	2, 0x
 17a:	0301                	.insn	2, 0x0301
 17c:	0901                	.insn	2, 0x0901
 17e:	0000                	.insn	2, 0x
 180:	0501                	.insn	2, 0x0501
 182:	7e03061b          	.insn	4, 0x7e03061b
 186:	0009                	.insn	2, 0x0009
 188:	0100                	.insn	2, 0x0100
 18a:	0c05                	.insn	2, 0x0c05
 18c:	04090203          	lb	tp,64(s2)
 190:	0100                	.insn	2, 0x0100
 192:	1305                	.insn	2, 0x1305
 194:	0200                	.insn	2, 0x0200
 196:	0104                	.insn	2, 0x0104
 198:	0306                	.insn	2, 0x0306
 19a:	0900                	.insn	2, 0x0900
 19c:	0004                	.insn	2, 0x0004
 19e:	0501                	.insn	2, 0x0501
 1a0:	0021                	.insn	2, 0x0021
 1a2:	0402                	.insn	2, 0x0402
 1a4:	09000303          	lb	t1,144(zero) # 90 <busy_wait+0xc>
 1a8:	0008                	.insn	2, 0x0008
 1aa:	0501                	.insn	2, 0x0501
 1ac:	001d                	.insn	2, 0x001d
 1ae:	0402                	.insn	2, 0x0402
 1b0:	09000303          	lb	t1,144(zero) # 90 <busy_wait+0xc>
 1b4:	0004                	.insn	2, 0x0004
 1b6:	0501                	.insn	2, 0x0501
 1b8:	04020013          	addi	zero,tp,64 # 40 <uart_putc+0x10>
 1bc:	0301                	.insn	2, 0x0301
 1be:	0900                	.insn	2, 0x0900
 1c0:	000c                	.insn	2, 0x000c
 1c2:	0501                	.insn	2, 0x0501
 1c4:	0601                	.insn	2, 0x0601
 1c6:	08090103          	lb	sp,128(s2)
 1ca:	0100                	.insn	2, 0x0100
 1cc:	0809                	.insn	2, 0x0809
 1ce:	0000                	.insn	2, 0x
 1d0:	0101                	.insn	2, 0x0101
 1d2:	1005                	.insn	2, 0x1005
 1d4:	0500                	.insn	2, 0x0500
 1d6:	b402                	.insn	2, 0xb402
 1d8:	0000                	.insn	2, 0x
 1da:	0300                	.insn	2, 0x0300
 1dc:	011f 0505 0203      	.insn	6, 0x02030505011f
 1e2:	0009                	.insn	2, 0x0009
 1e4:	0100                	.insn	2, 0x0100
 1e6:	1005                	.insn	2, 0x1005
 1e8:	0306                	.insn	2, 0x0306
 1ea:	097e                	.insn	2, 0x097e
 1ec:	0000                	.insn	2, 0x
 1ee:	0501                	.insn	2, 0x0501
 1f0:	030e                	.insn	2, 0x030e
 1f2:	0902                	.insn	2, 0x0902
 1f4:	000c                	.insn	2, 0x000c
 1f6:	0501                	.insn	2, 0x0501
 1f8:	0314                	.insn	2, 0x0314
 1fa:	00080903          	lb	s2,0(a6) # 590b512c <_stack_top+0x590ad12c>
 1fe:	0501                	.insn	2, 0x0501
 200:	030e                	.insn	2, 0x030e
 202:	097d                	.insn	2, 0x097d
 204:	0004                	.insn	2, 0x0004
 206:	0501                	.insn	2, 0x0501
 208:	0605                	.insn	2, 0x0605
 20a:	04090303          	lb	t1,64(s2)
 20e:	0100                	.insn	2, 0x0100
 210:	1405                	.insn	2, 0x1405
 212:	0306                	.insn	2, 0x0306
 214:	0900                	.insn	2, 0x0900
 216:	0000                	.insn	2, 0x
 218:	0501                	.insn	2, 0x0501
 21a:	0605                	.insn	2, 0x0605
 21c:	0c090303          	lb	t1,192(s2)
 220:	0100                	.insn	2, 0x0100
 222:	1305                	.insn	2, 0x1305
 224:	0200                	.insn	2, 0x0200
 226:	0104                	.insn	2, 0x0104
 228:	0306                	.insn	2, 0x0306
 22a:	0975                	.insn	2, 0x0975
 22c:	000c                	.insn	2, 0x000c
 22e:	0501                	.insn	2, 0x0501
 230:	0318                	.insn	2, 0x0318
 232:	0910                	.insn	2, 0x0910
 234:	0004                	.insn	2, 0x0004
 236:	0501                	.insn	2, 0x0501
 238:	04020013          	addi	zero,tp,64 # 40 <uart_putc+0x10>
 23c:	0301                	.insn	2, 0x0301
 23e:	0970                	.insn	2, 0x0970
 240:	0004                	.insn	2, 0x0004
 242:	0501                	.insn	2, 0x0501
 244:	0318                	.insn	2, 0x0318
 246:	0914                	.insn	2, 0x0914
 248:	0004                	.insn	2, 0x0004
 24a:	0301                	.insn	2, 0x0301
 24c:	0904                	.insn	2, 0x0904
 24e:	0004                	.insn	2, 0x0004
 250:	0501                	.insn	2, 0x0501
 252:	0605                	.insn	2, 0x0605
 254:	04097603          	.insn	4, 0x04097603
 258:	0100                	.insn	2, 0x0100
 25a:	0905                	.insn	2, 0x0905
 25c:	00090203          	lb	tp,0(s2)
 260:	0100                	.insn	2, 0x0100
 262:	1805                	.insn	2, 0x1805
 264:	0306                	.insn	2, 0x0306
 266:	0900                	.insn	2, 0x0900
 268:	0000                	.insn	2, 0x
 26a:	0501                	.insn	2, 0x0501
 26c:	0609                	.insn	2, 0x0609
 26e:	04090103          	lb	sp,64(s2)
 272:	0100                	.insn	2, 0x0100
 274:	0505                	.insn	2, 0x0505
 276:	00096e03          	.insn	4, 0x00096e03
 27a:	0100                	.insn	2, 0x0100
 27c:	00090103          	lb	sp,0(s2)
 280:	0100                	.insn	2, 0x0100
 282:	0c05                	.insn	2, 0x0c05
 284:	0306                	.insn	2, 0x0306
 286:	0900                	.insn	2, 0x0900
 288:	0000                	.insn	2, 0x
 28a:	0501                	.insn	2, 0x0501
 28c:	04020013          	addi	zero,tp,64 # 40 <uart_putc+0x10>
 290:	0601                	.insn	2, 0x0601
 292:	04090003          	lb	zero,64(s2)
 296:	0100                	.insn	2, 0x0100
 298:	2105                	.insn	2, 0x2105
 29a:	0200                	.insn	2, 0x0200
 29c:	0304                	.insn	2, 0x0304
 29e:	08090003          	lb	zero,128(s2)
 2a2:	0100                	.insn	2, 0x0100
 2a4:	1d05                	.insn	2, 0x1d05
 2a6:	0200                	.insn	2, 0x0200
 2a8:	0304                	.insn	2, 0x0304
 2aa:	04090003          	lb	zero,64(s2)
 2ae:	0100                	.insn	2, 0x0100
 2b0:	1305                	.insn	2, 0x1305
 2b2:	0200                	.insn	2, 0x0200
 2b4:	0104                	.insn	2, 0x0104
 2b6:	0c090003          	lb	zero,192(s2)
 2ba:	0100                	.insn	2, 0x0100
 2bc:	0905                	.insn	2, 0x0905
 2be:	08091403          	lh	s0,128(s2)
 2c2:	0100                	.insn	2, 0x0100
 2c4:	1805                	.insn	2, 0x1805
 2c6:	0306                	.insn	2, 0x0306
 2c8:	0900                	.insn	2, 0x0900
 2ca:	0000                	.insn	2, 0x
 2cc:	0501                	.insn	2, 0x0501
 2ce:	0609                	.insn	2, 0x0609
 2d0:	04090103          	lb	sp,64(s2)
 2d4:	0100                	.insn	2, 0x0100
 2d6:	0505                	.insn	2, 0x0505
 2d8:	00096a03          	.insn	4, 0x00096a03
 2dc:	0100                	.insn	2, 0x0100
 2de:	00090103          	lb	sp,0(s2)
 2e2:	0100                	.insn	2, 0x0100
 2e4:	0c05                	.insn	2, 0x0c05
 2e6:	0306                	.insn	2, 0x0306
 2e8:	0900                	.insn	2, 0x0900
 2ea:	0000                	.insn	2, 0x
 2ec:	0501                	.insn	2, 0x0501
 2ee:	04020013          	addi	zero,tp,64 # 40 <uart_putc+0x10>
 2f2:	0601                	.insn	2, 0x0601
 2f4:	04090003          	lb	zero,64(s2)
 2f8:	0100                	.insn	2, 0x0100
 2fa:	2105                	.insn	2, 0x2105
 2fc:	0200                	.insn	2, 0x0200
 2fe:	0304                	.insn	2, 0x0304
 300:	08090003          	lb	zero,128(s2)
 304:	0100                	.insn	2, 0x0100
 306:	1d05                	.insn	2, 0x1d05
 308:	0200                	.insn	2, 0x0200
 30a:	0304                	.insn	2, 0x0304
 30c:	04090003          	lb	zero,64(s2)
 310:	0100                	.insn	2, 0x0100
 312:	1305                	.insn	2, 0x1305
 314:	0200                	.insn	2, 0x0200
 316:	0104                	.insn	2, 0x0104
 318:	0c090003          	lb	zero,192(s2)
 31c:	0100                	.insn	2, 0x0100
 31e:	0905                	.insn	2, 0x0905
 320:	08091803          	lh	a6,128(s2)
 324:	0100                	.insn	2, 0x0100
 326:	1805                	.insn	2, 0x1805
 328:	0306                	.insn	2, 0x0306
 32a:	0900                	.insn	2, 0x0900
 32c:	0000                	.insn	2, 0x
 32e:	0501                	.insn	2, 0x0501
 330:	0009                	.insn	2, 0x0009
 332:	0402                	.insn	2, 0x0402
 334:	0601                	.insn	2, 0x0601
 336:	04090103          	lb	sp,64(s2)
 33a:	0100                	.insn	2, 0x0100
 33c:	0505                	.insn	2, 0x0505
 33e:	00096603          	.insn	4, 0x00096603
 342:	0100                	.insn	2, 0x0100
 344:	00090103          	lb	sp,0(s2)
 348:	0100                	.insn	2, 0x0100
 34a:	0c05                	.insn	2, 0x0c05
 34c:	0306                	.insn	2, 0x0306
 34e:	0900                	.insn	2, 0x0900
 350:	0000                	.insn	2, 0x
 352:	0501                	.insn	2, 0x0501
 354:	04020013          	addi	zero,tp,64 # 40 <uart_putc+0x10>
 358:	0601                	.insn	2, 0x0601
 35a:	04090003          	lb	zero,64(s2)
 35e:	0100                	.insn	2, 0x0100
 360:	2105                	.insn	2, 0x2105
 362:	0200                	.insn	2, 0x0200
 364:	0304                	.insn	2, 0x0304
 366:	08090003          	lb	zero,128(s2)
 36a:	0100                	.insn	2, 0x0100
 36c:	1d05                	.insn	2, 0x1d05
 36e:	0200                	.insn	2, 0x0200
 370:	0304                	.insn	2, 0x0304
 372:	04090003          	lb	zero,64(s2)
 376:	0100                	.insn	2, 0x0100
 378:	1305                	.insn	2, 0x1305
 37a:	0200                	.insn	2, 0x0200
 37c:	0104                	.insn	2, 0x0104
 37e:	0c090003          	lb	zero,192(s2)
 382:	0100                	.insn	2, 0x0100
 384:	0c09                	.insn	2, 0x0c09
 386:	0000                	.insn	2, 0x
 388:	0101                	.insn	2, 0x0101
 38a:	007e                	.insn	2, 0x007e
 38c:	0000                	.insn	2, 0x
 38e:	0005                	.insn	2, 0x0005
 390:	0004                	.insn	2, 0x0004
 392:	002a                	.insn	2, 0x002a
 394:	0000                	.insn	2, 0x
 396:	0101                	.insn	2, 0x0101
 398:	fb01                	.insn	2, 0xfb01
 39a:	0d0e                	.insn	2, 0x0d0e
 39c:	0100                	.insn	2, 0x0100
 39e:	0101                	.insn	2, 0x0101
 3a0:	0001                	.insn	2, 0x0001
 3a2:	0000                	.insn	2, 0x
 3a4:	0001                	.insn	2, 0x0001
 3a6:	0100                	.insn	2, 0x0100
 3a8:	0101                	.insn	2, 0x0101
 3aa:	011f 0000 0000      	.insn	6, 0x011f
 3b0:	0102                	.insn	2, 0x0102
 3b2:	021f 020f 006f      	.insn	6, 0x006f020f021f
 3b8:	0000                	.insn	2, 0x
 3ba:	6f00                	.insn	2, 0x6f00
 3bc:	0000                	.insn	2, 0x
 3be:	0000                	.insn	2, 0x
 3c0:	0500                	.insn	2, 0x0500
 3c2:	0002                	.insn	2, 0x0002
 3c4:	0000                	.insn	2, 0x
 3c6:	0300                	.insn	2, 0x0300
 3c8:	010a                	.insn	2, 0x010a
 3ca:	04090103          	lb	sp,64(s2)
 3ce:	0100                	.insn	2, 0x0100
 3d0:	04090503          	lb	a0,64(s2)
 3d4:	0100                	.insn	2, 0x0100
 3d6:	08090403          	lb	s0,128(s2)
 3da:	0100                	.insn	2, 0x0100
 3dc:	04090103          	lb	sp,64(s2)
 3e0:	0100                	.insn	2, 0x0100
 3e2:	04090103          	lb	sp,64(s2)
 3e6:	0100                	.insn	2, 0x0100
 3e8:	04090303          	lb	t1,64(s2)
 3ec:	0100                	.insn	2, 0x0100
 3ee:	04090103          	lb	sp,64(s2)
 3f2:	0100                	.insn	2, 0x0100
 3f4:	04090103          	lb	sp,64(s2)
 3f8:	0100                	.insn	2, 0x0100
 3fa:	04090503          	lb	a0,64(s2)
 3fe:	0100                	.insn	2, 0x0100
 400:	04090403          	lb	s0,64(s2)
 404:	0100                	.insn	2, 0x0100
 406:	0409                	.insn	2, 0x0409
 408:	0000                	.insn	2, 0x
 40a:	0101                	.insn	2, 0x0101

Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	6e756f63          	bltu	a0,t2,6fe <_heap_start+0x56e>
   4:	0074                	.insn	2, 0x0074
   6:	6e75                	.insn	2, 0x6e75
   8:	6e676973          	csrrsi	s2,0x6e6,14
   c:	6465                	.insn	2, 0x6465
   e:	6320                	.insn	2, 0x6320
  10:	6168                	.insn	2, 0x6168
  12:	0072                	.insn	2, 0x0072
  14:	726f6873          	csrrsi	a6,mhpmevent6h,30
  18:	2074                	.insn	2, 0x2074
  1a:	6e75                	.insn	2, 0x6e75
  1c:	6e676973          	csrrsi	s2,0x6e6,14
  20:	6465                	.insn	2, 0x6465
  22:	6920                	.insn	2, 0x6920
  24:	746e                	.insn	2, 0x746e
  26:	4700                	.insn	2, 0x4700
  28:	554e                	.insn	2, 0x554e
  2a:	4320                	.insn	2, 0x4320
  2c:	3731                	.insn	2, 0x3731
  2e:	3120                	.insn	2, 0x3120
  30:	2e322e33          	.insn	4, 0x2e322e33
  34:	2030                	.insn	2, 0x2030
  36:	6d2d                	.insn	2, 0x6d2d
  38:	6261                	.insn	2, 0x6261
  3a:	3d69                	.insn	2, 0x3d69
  3c:	6c69                	.insn	2, 0x6c69
  3e:	3370                	.insn	2, 0x3370
  40:	2032                	.insn	2, 0x2032
  42:	6d2d                	.insn	2, 0x6d2d
  44:	646f6d63          	bltu	t5,t1,69e <_heap_start+0x50e>
  48:	6c65                	.insn	2, 0x6c65
  4a:	6d3d                	.insn	2, 0x6d3d
  4c:	6465                	.insn	2, 0x6465
  4e:	6e61                	.insn	2, 0x6e61
  50:	2079                	.insn	2, 0x2079
  52:	6d2d                	.insn	2, 0x6d2d
  54:	7369                	.insn	2, 0x7369
  56:	2d61                	.insn	2, 0x2d61
  58:	63657073          	csrci	0x636,10
  5c:	323d                	.insn	2, 0x323d
  5e:	3130                	.insn	2, 0x3130
  60:	3139                	.insn	2, 0x3139
  62:	3132                	.insn	2, 0x3132
  64:	6d2d2033          	.insn	4, 0x6d2d2033
  68:	7261                	.insn	2, 0x7261
  6a:	723d6863          	bltu	s10,gp,79a <_heap_start+0x60a>
  6e:	3376                	.insn	2, 0x3376
  70:	6932                	.insn	2, 0x6932
  72:	5f6d                	.insn	2, 0x5f6d
  74:	697a                	.insn	2, 0x697a
  76:	20727363          	bgeu	tp,t2,27c <_heap_start+0xec>
  7a:	672d                	.insn	2, 0x672d
  7c:	2d20                	.insn	2, 0x2d20
  7e:	2d20324f          	.insn	4, 0x2d20324f
  82:	6666                	.insn	2, 0x6666
  84:	6572                	.insn	2, 0x6572
  86:	7365                	.insn	2, 0x7365
  88:	6174                	.insn	2, 0x6174
  8a:	646e                	.insn	2, 0x646e
  8c:	6e69                	.insn	2, 0x6e69
  8e:	75620067          	jr	1878(tp) # 756 <_heap_start+0x5c6>
  92:	775f7973          	csrrci	s2,0x775,30
  96:	6961                	.insn	2, 0x6961
  98:	0074                	.insn	2, 0x0074
  9a:	616d                	.insn	2, 0x616d
  9c:	6e69                	.insn	2, 0x6e69
  9e:	6c00                	.insn	2, 0x6c00
  a0:	20676e6f          	jal	t3,762a6 <_stack_top+0x6e2a6>
  a4:	6f6c                	.insn	2, 0x6f6c
  a6:	676e                	.insn	2, 0x676e
  a8:	7520                	.insn	2, 0x7520
  aa:	736e                	.insn	2, 0x736e
  ac:	6769                	.insn	2, 0x6769
  ae:	656e                	.insn	2, 0x656e
  b0:	2064                	.insn	2, 0x2064
  b2:	6e69                	.insn	2, 0x6e69
  b4:	0074                	.insn	2, 0x0074
  b6:	6f6c                	.insn	2, 0x6f6c
  b8:	676e                	.insn	2, 0x676e
  ba:	6c20                	.insn	2, 0x6c20
  bc:	20676e6f          	jal	t3,762c2 <_stack_top+0x6e2c2>
  c0:	6e69                	.insn	2, 0x6e69
  c2:	0074                	.insn	2, 0x0074
  c4:	726f6873          	csrrsi	a6,mhpmevent6h,30
  c8:	2074                	.insn	2, 0x2074
  ca:	6e69                	.insn	2, 0x6e69
  cc:	0074                	.insn	2, 0x0074
  ce:	6175                	.insn	2, 0x6175
  d0:	7472                	.insn	2, 0x7472
  d2:	705f 7475 0063      	.insn	6, 0x00637475705f
  d8:	6975                	.insn	2, 0x6975
  da:	746e                	.insn	2, 0x746e
  dc:	745f3233          	.insn	4, 0x745f3233
  e0:	7500                	.insn	2, 0x7500
  e2:	7261                	.insn	2, 0x7261
  e4:	5f74                	.insn	2, 0x5f74
  e6:	7570                	.insn	2, 0x7570
  e8:	7374                	.insn	2, 0x7374
  ea:	7300                	.insn	2, 0x7300
  ec:	6174                	.insn	2, 0x6174
  ee:	7472                	.insn	2, 0x7472
  f0:	532e                	.insn	2, 0x532e
  f2:	2f00                	.insn	2, 0x2f00
  f4:	6f68                	.insn	2, 0x6f68
  f6:	656d                	.insn	2, 0x656d
  f8:	6f68702f          	.insn	4, 0x6f68702f
  fc:	676e                	.insn	2, 0x676e
  fe:	7265542f          	.insn	4, 0x7265542f
 102:	2d6d                	.insn	2, 0x2d6d
 104:	7270                	.insn	2, 0x7270
 106:	63656a6f          	jal	s4,5673c <_stack_top+0x4e73c>
 10a:	2d74                	.insn	2, 0x2d74
 10c:	30324143          	.insn	4, 0x30324143
 110:	3532                	.insn	2, 0x3532
 112:	732d342f          	.insn	4, 0x732d342f
 116:	732f636f          	jal	t1,f6848 <_stack_top+0xee848>
 11a:	7774666f          	jal	a2,47090 <_stack_top+0x3f090>
 11e:	7261                	.insn	2, 0x7261
 120:	0065                	.insn	2, 0x0065
 122:	20554e47          	.insn	4, 0x20554e47
 126:	5341                	.insn	2, 0x5341
 128:	3220                	.insn	2, 0x3220
 12a:	342e                	.insn	2, 0x342e
 12c:	0032                	.insn	2, 0x0032

Disassembly of section .debug_line_str:

00000000 <.debug_line_str>:
   0:	6d6f682f          	.insn	4, 0x6d6f682f
   4:	2f65                	.insn	2, 0x2f65
   6:	6870                	.insn	2, 0x6870
   8:	2f676e6f          	jal	t3,762fe <_stack_top+0x6e2fe>
   c:	6554                	.insn	2, 0x6554
   e:	6d72                	.insn	2, 0x6d72
  10:	702d                	.insn	2, 0x702d
  12:	6f72                	.insn	2, 0x6f72
  14:	656a                	.insn	2, 0x656a
  16:	432d7463          	bgeu	s10,s2,43e <_heap_start+0x2ae>
  1a:	3241                	.insn	2, 0x3241
  1c:	3230                	.insn	2, 0x3230
  1e:	2f35                	.insn	2, 0x2f35
  20:	2d34                	.insn	2, 0x2d34
  22:	2f636f73          	csrrsi	t5,0x2f6,6
  26:	74666f73          	csrrsi	t5,0x746,12
  2a:	65726177          	.insn	4, 0x65726177
  2e:	6d00                	.insn	2, 0x6d00
  30:	6961                	.insn	2, 0x6961
  32:	2e6e                	.insn	2, 0x2e6e
  34:	752f0063          	beq	t5,s2,774 <_heap_start+0x5e4>
  38:	6c2f7273          	csrrci	tp,0x6c2,30
  3c:	6269                	.insn	2, 0x6269
  3e:	6363672f          	.insn	4, 0x6363672f
  42:	7369722f          	.insn	4, 0x7369722f
  46:	34367663          	bgeu	a2,gp,392 <_heap_start+0x202>
  4a:	752d                	.insn	2, 0x752d
  4c:	6b6e                	.insn	2, 0x6b6e
  4e:	6f6e                	.insn	2, 0x6f6e
  50:	652d6e77          	.insn	4, 0x652d6e77
  54:	666c                	.insn	2, 0x666c
  56:	2e33312f          	.insn	4, 0x2e33312f
  5a:	2e32                	.insn	2, 0x2e32
  5c:	2f30                	.insn	2, 0x2f30
  5e:	6e69                	.insn	2, 0x6e69
  60:	64756c63          	bltu	a0,t2,6b8 <_heap_start+0x528>
  64:	0065                	.insn	2, 0x0065
  66:	69647473          	csrrci	s0,0x696,8
  6a:	746e                	.insn	2, 0x746e
  6c:	682e                	.insn	2, 0x682e
  6e:	7300                	.insn	2, 0x7300
  70:	6174                	.insn	2, 0x6174
  72:	7472                	.insn	2, 0x7472
  74:	532e                	.insn	2, 0x532e
	...

Disassembly of section .comment:

00000000 <.comment>:
   0:	3a434347          	.insn	4, 0x3a434347
   4:	2820                	.insn	2, 0x2820
   6:	3331                	.insn	2, 0x3331
   8:	322e                	.insn	2, 0x322e
   a:	302e                	.insn	2, 0x302e
   c:	312d                	.insn	2, 0x312d
   e:	7531                	.insn	2, 0x7531
  10:	7562                	.insn	2, 0x7562
  12:	746e                	.insn	2, 0x746e
  14:	3175                	.insn	2, 0x3175
  16:	2932312b          	.insn	4, 0x2932312b
  1a:	3120                	.insn	2, 0x3120
  1c:	2e322e33          	.insn	4, 0x2e322e33
  20:	0030                	.insn	2, 0x0030

Disassembly of section .riscv.attributes:

00000000 <.riscv.attributes>:
   0:	3641                	.insn	2, 0x3641
   2:	0000                	.insn	2, 0x
   4:	7200                	.insn	2, 0x7200
   6:	7369                	.insn	2, 0x7369
   8:	01007663          	bgeu	zero,a6,14 <_start+0x14>
   c:	002c                	.insn	2, 0x002c
   e:	0000                	.insn	2, 0x
  10:	1004                	.insn	2, 0x1004
  12:	7205                	.insn	2, 0x7205
  14:	3376                	.insn	2, 0x3376
  16:	6932                	.insn	2, 0x6932
  18:	7032                	.insn	2, 0x7032
  1a:	5f31                	.insn	2, 0x5f31
  1c:	326d                	.insn	2, 0x326d
  1e:	3070                	.insn	2, 0x3070
  20:	7a5f 6369 7273      	.insn	6, 0x727363697a5f
  26:	7032                	.insn	2, 0x7032
  28:	5f30                	.insn	2, 0x5f30
  2a:	6d7a                	.insn	2, 0x6d7a
  2c:	756d                	.insn	2, 0x756d
  2e:	316c                	.insn	2, 0x316c
  30:	3070                	.insn	2, 0x3070
  32:	0800                	.insn	2, 0x0800
  34:	0a01                	.insn	2, 0x0a01
  36:	Address 0x36 is out of bounds.


Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	000c                	.insn	2, 0x000c
   2:	0000                	.insn	2, 0x
   4:	ffff                	.insn	2, 0xffff
   6:	ffff                	.insn	2, 0xffff
   8:	7c010003          	lb	zero,1984(sp)
   c:	0d01                	.insn	2, 0x0d01
   e:	0002                	.insn	2, 0x0002
  10:	000c                	.insn	2, 0x000c
  12:	0000                	.insn	2, 0x
  14:	0000                	.insn	2, 0x
  16:	0000                	.insn	2, 0x
  18:	0030                	.insn	2, 0x0030
  1a:	0000                	.insn	2, 0x
  1c:	001c                	.insn	2, 0x001c
  1e:	0000                	.insn	2, 0x
  20:	000c                	.insn	2, 0x000c
  22:	0000                	.insn	2, 0x
  24:	0000                	.insn	2, 0x
  26:	0000                	.insn	2, 0x
  28:	004c                	.insn	2, 0x004c
  2a:	0000                	.insn	2, 0x
  2c:	0038                	.insn	2, 0x0038
  2e:	0000                	.insn	2, 0x
  30:	0014                	.insn	2, 0x0014
  32:	0000                	.insn	2, 0x
  34:	0000                	.insn	2, 0x
  36:	0000                	.insn	2, 0x
  38:	0084                	.insn	2, 0x0084
  3a:	0000                	.insn	2, 0x
  3c:	0030                	.insn	2, 0x0030
  3e:	0000                	.insn	2, 0x
  40:	0e44                	.insn	2, 0x0e44
  42:	6810                	.insn	2, 0x6810
  44:	000e                	.insn	2, 0x000e
  46:	0000                	.insn	2, 0x
  48:	0014                	.insn	2, 0x0014
  4a:	0000                	.insn	2, 0x
  4c:	0000                	.insn	2, 0x
  4e:	0000                	.insn	2, 0x
  50:	00b4                	.insn	2, 0x00b4
  52:	0000                	.insn	2, 0x
  54:	00c4                	.insn	2, 0x00c4
  56:	0000                	.insn	2, 0x
  58:	0e44                	.insn	2, 0x0e44
  5a:	4820                	.insn	2, 0x4820
  5c:	0288                	.insn	2, 0x0288
  5e:	0181                	.insn	2, 0x0181
