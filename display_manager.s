	.file	"display_manager.c"
__SP_H__ = 0x3e
__SP_L__ = 0x3d
__SREG__ = 0x3f
__RAMPZ__ = 0x3b
__tmp_reg__ = 0
__zero_reg__ = 1
	.stabs	"/home/gergelyb/Documents/Programming/MCU/AVR/AutomatizaltGyartorendszerek/uart-thermostat/",100,0,2,.Ltext0
	.stabs	"src/display_manager.c",100,0,2,.Ltext0
	.text
.Ltext0:
	.stabs	"gcc2_compiled.",60,0,0,0
	.stabs	"int:t(0,1)=r(0,1);-32768;32767;",128,0,0,0
	.stabs	"char:t(0,2)=r(0,2);0;127;",128,0,0,0
	.stabs	"long int:t(0,3)=@s32;r(0,3);020000000000;017777777777;",128,0,0,0
	.stabs	"unsigned int:t(0,4)=r(0,4);0;0177777;",128,0,0,0
	.stabs	"long unsigned int:t(0,5)=@s32;r(0,5);0;037777777777;",128,0,0,0
	.stabs	"__int128:t(0,6)=@s128;r(0,6);02000000000000000000000000000000000000000000;01777777777777777777777777777777777777777777;",128,0,0,0
	.stabs	"__int128 unsigned:t(0,7)=@s128;r(0,7);0;03777777777777777777777777777777777777777777;",128,0,0,0
	.stabs	"long long int:t(0,8)=@s64;r(0,8);01000000000000000000000;00777777777777777777777;",128,0,0,0
	.stabs	"long long unsigned int:t(0,9)=@s64;r(0,9);0;01777777777777777777777;",128,0,0,0
	.stabs	"short int:t(0,10)=r(0,10);-32768;32767;",128,0,0,0
	.stabs	"short unsigned int:t(0,11)=r(0,11);0;0177777;",128,0,0,0
	.stabs	"signed char:t(0,12)=@s8;r(0,12);-128;127;",128,0,0,0
	.stabs	"unsigned char:t(0,13)=@s8;r(0,13);0;255;",128,0,0,0
	.stabs	"float:t(0,14)=r(0,1);4;0;",128,0,0,0
	.stabs	"double:t(0,15)=r(0,1);4;0;",128,0,0,0
	.stabs	"long double:t(0,16)=r(0,1);4;0;",128,0,0,0
	.stabs	"short _Fract:t(0,17)=r(0,1);1;0;",128,0,0,0
	.stabs	"_Fract:t(0,18)=r(0,1);2;0;",128,0,0,0
	.stabs	"long _Fract:t(0,19)=r(0,1);4;0;",128,0,0,0
	.stabs	"long long _Fract:t(0,20)=r(0,1);8;0;",128,0,0,0
	.stabs	"unsigned short _Fract:t(0,21)=r(0,1);1;0;",128,0,0,0
	.stabs	"unsigned _Fract:t(0,22)=r(0,1);2;0;",128,0,0,0
	.stabs	"unsigned long _Fract:t(0,23)=r(0,1);4;0;",128,0,0,0
	.stabs	"unsigned long long _Fract:t(0,24)=r(0,1);8;0;",128,0,0,0
	.stabs	"_Sat short _Fract:t(0,25)=r(0,1);1;0;",128,0,0,0
	.stabs	"_Sat _Fract:t(0,26)=r(0,1);2;0;",128,0,0,0
	.stabs	"_Sat long _Fract:t(0,27)=r(0,1);4;0;",128,0,0,0
	.stabs	"_Sat long long _Fract:t(0,28)=r(0,1);8;0;",128,0,0,0
	.stabs	"_Sat unsigned short _Fract:t(0,29)=r(0,1);1;0;",128,0,0,0
	.stabs	"_Sat unsigned _Fract:t(0,30)=r(0,1);2;0;",128,0,0,0
	.stabs	"_Sat unsigned long _Fract:t(0,31)=r(0,1);4;0;",128,0,0,0
	.stabs	"_Sat unsigned long long _Fract:t(0,32)=r(0,1);8;0;",128,0,0,0
	.stabs	"short _Accum:t(0,33)=r(0,1);2;0;",128,0,0,0
	.stabs	"_Accum:t(0,34)=r(0,1);4;0;",128,0,0,0
	.stabs	"long _Accum:t(0,35)=r(0,1);8;0;",128,0,0,0
	.stabs	"long long _Accum:t(0,36)=r(0,1);8;0;",128,0,0,0
	.stabs	"unsigned short _Accum:t(0,37)=r(0,1);2;0;",128,0,0,0
	.stabs	"unsigned _Accum:t(0,38)=r(0,1);4;0;",128,0,0,0
	.stabs	"unsigned long _Accum:t(0,39)=r(0,1);8;0;",128,0,0,0
	.stabs	"unsigned long long _Accum:t(0,40)=r(0,1);8;0;",128,0,0,0
	.stabs	"_Sat short _Accum:t(0,41)=r(0,1);2;0;",128,0,0,0
	.stabs	"_Sat _Accum:t(0,42)=r(0,1);4;0;",128,0,0,0
	.stabs	"_Sat long _Accum:t(0,43)=r(0,1);8;0;",128,0,0,0
	.stabs	"_Sat long long _Accum:t(0,44)=r(0,1);8;0;",128,0,0,0
	.stabs	"_Sat unsigned short _Accum:t(0,45)=r(0,1);2;0;",128,0,0,0
	.stabs	"_Sat unsigned _Accum:t(0,46)=r(0,1);4;0;",128,0,0,0
	.stabs	"_Sat unsigned long _Accum:t(0,47)=r(0,1);8;0;",128,0,0,0
	.stabs	"_Sat unsigned long long _Accum:t(0,48)=r(0,1);8;0;",128,0,0,0
	.stabs	"void:t(0,49)=(0,49)",128,0,0,0
	.stabs	"/usr/lib/avr/include/avr/io.h",130,0,0,0
	.stabs	"/usr/lib/avr/include/avr/sfr_defs.h",130,0,0,0
	.stabs	"/usr/lib/avr/include/inttypes.h",130,0,0,0
	.stabs	"/usr/lib/gcc/avr/5.4.0/include/stdint.h",130,0,0,0
	.stabs	"/usr/lib/avr/include/stdint.h",130,0,0,0
	.stabs	"int8_t:t(5,1)=(0,12)",128,0,125,0
	.stabs	"uint8_t:t(5,2)=(0,13)",128,0,126,0
	.stabs	"int16_t:t(5,3)=(0,1)",128,0,127,0
	.stabs	"uint16_t:t(5,4)=(0,4)",128,0,128,0
	.stabs	"int32_t:t(5,5)=(0,3)",128,0,129,0
	.stabs	"uint32_t:t(5,6)=(0,5)",128,0,130,0
	.stabs	"int64_t:t(5,7)=(0,8)",128,0,132,0
	.stabs	"uint64_t:t(5,8)=(0,9)",128,0,133,0
	.stabs	"intptr_t:t(5,9)=(5,3)",128,0,146,0
	.stabs	"uintptr_t:t(5,10)=(5,4)",128,0,151,0
	.stabs	"int_least8_t:t(5,11)=(5,1)",128,0,163,0
	.stabs	"uint_least8_t:t(5,12)=(5,2)",128,0,168,0
	.stabs	"int_least16_t:t(5,13)=(5,3)",128,0,173,0
	.stabs	"uint_least16_t:t(5,14)=(5,4)",128,0,178,0
	.stabs	"int_least32_t:t(5,15)=(5,5)",128,0,183,0
	.stabs	"uint_least32_t:t(5,16)=(5,6)",128,0,188,0
	.stabs	"int_least64_t:t(5,17)=(5,7)",128,0,196,0
	.stabs	"uint_least64_t:t(5,18)=(5,8)",128,0,203,0
	.stabs	"int_fast8_t:t(5,19)=(5,1)",128,0,217,0
	.stabs	"uint_fast8_t:t(5,20)=(5,2)",128,0,222,0
	.stabs	"int_fast16_t:t(5,21)=(5,3)",128,0,227,0
	.stabs	"uint_fast16_t:t(5,22)=(5,4)",128,0,232,0
	.stabs	"int_fast32_t:t(5,23)=(5,5)",128,0,237,0
	.stabs	"uint_fast32_t:t(5,24)=(5,6)",128,0,242,0
	.stabs	"int_fast64_t:t(5,25)=(5,7)",128,0,250,0
	.stabs	"uint_fast64_t:t(5,26)=(5,8)",128,0,257,0
	.stabs	"intmax_t:t(5,27)=(5,7)",128,0,277,0
	.stabs	"uintmax_t:t(5,28)=(5,8)",128,0,282,0
	.stabn	162,0,0,0
	.stabn	162,0,0,0
	.stabs	"int_farptr_t:t(3,1)=(5,5)",128,0,77,0
	.stabs	"uint_farptr_t:t(3,2)=(5,6)",128,0,81,0
	.stabn	162,0,0,0
	.stabn	162,0,0,0
	.stabs	"/usr/lib/avr/include/avr/fuse.h",130,0,0,0
	.stabs	"__fuse_t:t(6,1)=(6,2)=s3low:(0,13),0,8;high:(0,13),8,8;extended:(0,13),16,8;;",128,0,244,0
	.stabn	162,0,0,0
	.stabn	162,0,0,0
	.stabs	"include/room_manager.h",130,0,0,0
	.stabs	"Room:T(7,1)=s6number:(5,2),0,8;target_temperature:(5,4),8,16;current_temp:(5,4),24,16;cooling:(5,2),40,8;;",128,0,0,0
	.stabs	"Room:t(7,2)=(7,1)",128,0,14,0
	.stabn	162,0,0,0
	.stabs	"/usr/lib/avr/include/stdio.h",130,0,0,0
	.stabs	"/usr/lib/gcc/avr/5.4.0/include/stdarg.h",130,0,0,0
	.stabs	"__gnuc_va_list:t(9,1)=(9,2)=*(0,49)",128,0,40,0
	.stabs	"va_list:t(9,3)=(9,1)",128,0,98,0
	.stabn	162,0,0,0
	.stabs	"/usr/lib/gcc/avr/5.4.0/include/stddef.h",130,0,0,0
	.stabs	"size_t:t(10,1)=(0,4)",128,0,216,0
	.stabn	162,0,0,0
	.stabs	"__file:T(8,1)=s14buf:(8,2)=*(0,2),0,16;unget:(0,13),16,8;flags:(5,2),24,8;size:(0,1),32,16;len:(0,1),48,16;put:(8,3)=*(8,4)=f(0,1),64,16;get:(8,5)=*(8,6)=f(0,1),80,16;udata:(8,7)=*(0,49),96,16;;",128,0,0,0
	.stabs	"FILE:t(8,8)=(8,1)",128,0,277,0
	.stabs	"fpos_t:t(8,9)=(0,8)",128,0,950,0
	.stabn	162,0,0,0
	.stabs	"include/uart.h",130,0,0,0
	.stabs	"uart_buffer:T(11,1)=s123length:(5,2),0,8;head:(5,2),8,8;tail:(5,2),16,8;buffer:(11,2)=ar(11,3)=r(11,3);0;0177777;;0;59;(11,4)=*(5,2),24,960;;",128,0,0,0
	.stabs	"uart_buffer:t(11,5)=(11,1)",128,0,73,0
	.stabn	162,0,0,0
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC6:
	.string	"    Room %d    "
.LC7:
	.string	"%d.%dC"
.LC8:
	.string	"Target: %d.%dC"
.LC9:
	.string	"Cooling ON "
.LC10:
	.string	"Cooling OFF"
.LC0:
	.string	"Press number to"
.LC1:
	.string	"see the room's"
.LC2:
	.string	"details"
.LC3:
	.string	""
	.section	.rodata
.LC5:
	.word	.LC0
	.word	.LC1
	.word	.LC2
	.word	.LC3
	.text
	.stabs	"printRoomPage:f(0,49)",36,0,39,printRoomPage
	.type	printRoomPage, @function
printRoomPage:
	.stabd	46,0,0
	.stabn	68,0,40,.LM0-.LFBB1
.LM0:
.LFBB1:
	push r2
	push r3
	push r4
	push r5
	push r6
	push r7
	push r8
	push r9
	push r10
	push r11
	push r12
	push r13
	push r14
	push r15
	push r16
	push r17
	push r28
	push r29
	in r28,__SP_L__
	in r29,__SP_H__
	sbiw r28,17
	in __tmp_reg__,__SREG__
	cli
	out __SP_H__,r29
	out __SREG__,__tmp_reg__
	out __SP_L__,r28
/* prologue: function */
/* frame size = 17 */
/* stack size = 35 */
.L__stack_usage = 35
	.stabn	68,0,41,.LM1-.LFBB1
.LM1:
	lds r24,current_page
	movw r16,r28
	subi r16,-1
	sbci r17,-1
	cpse r24,__zero_reg__
	rjmp .L2
.LBB5:
.LBB6:
	.stabn	68,0,32,.LM2-.LFBB1
.LM2:
	ldi r24,lo8(8)
	ldi r30,lo8(.LC5)
	ldi r31,hi8(.LC5)
	movw r26,r16
	0:
	ld r0,Z+
	st X+,r0
	dec r24
	brne 0b
	.stabn	68,0,36,.LM3-.LFBB1
.LM3:
	movw r24,r16
	call lcdPrintRows
	rjmp .L1
.L2:
.LBE6:
.LBE5:
	.stabn	68,0,48,.LM4-.LFBB1
.LM4:
	call getRoomTemp
	movw r14,r24
	.stabn	68,0,49,.LM5-.LFBB1
.LM5:
	lds r24,current_page
	call getTargetRoomTemp
	movw r12,r24
	.stabn	68,0,52,.LM6-.LFBB1
.LM6:
	cp r14,r24
	cpc r15,r25
	brsh .L4
	.stabn	68,0,53,.LM7-.LFBB1
.LM7:
	sbi 0x15,7
	rjmp .L5
.L4:
	.stabn	68,0,55,.LM8-.LFBB1
.LM8:
	cbi 0x15,7
.L5:
	.stabn	68,0,56,.LM9-.LFBB1
.LM9:
	lds r24,current_page
	call getRoomCooling
	tst r24
	breq .L7
	.stabn	68,0,58,.LM10-.LFBB1
.LM10:
	cp r12,r14
	cpc r13,r15
	brsh .L7
	.stabn	68,0,59,.LM11-.LFBB1
.LM11:
	sbi 0x3,3
	rjmp .L8
.L7:
	.stabn	68,0,61,.LM12-.LFBB1
.LM12:
	cbi 0x3,3
.L8:
.LBB7:
	.stabn	68,0,79,.LM13-.LFBB1
.LM13:
	ldi r30,lo8(10)
	ldi r31,0
	movw r24,r14
	movw r22,r30
	call __udivmodhi4
	std Y+17,r24
	mov r14,r25
	ldi r18,lo8(100)
	ldi r19,0
	movw r24,r22
	movw r22,r18
	call __udivmodhi4
	mov r7,r24
	mov r6,r25
	.stabn	68,0,83,.LM14-.LFBB1
.LM14:
	movw r24,r12
	movw r22,r30
	call __udivmodhi4
	mov r5,r24
	mov r4,r25
	movw r24,r22
	movw r22,r18
	call __udivmodhi4
	mov r3,r24
	mov r2,r25
	ldi r24,lo8(4)
	mov r15,r24
	ldi r25,lo8(.LC8)
	mov r12,r25
	ldi r25,hi8(.LC8)
	mov r13,r25
	.stabn	68,0,79,.LM15-.LFBB1
.LM15:
	ldi r18,lo8(.LC7)
	mov r10,r18
	ldi r18,hi8(.LC7)
	mov r11,r18
	.stabn	68,0,75,.LM16-.LFBB1
.LM16:
	ldi r19,lo8(.LC6)
	mov r8,r19
	ldi r19,hi8(.LC6)
	mov r9,r19
.L9:
	.stabn	68,0,69,.LM17-.LFBB1
.LM17:
	ldi r22,lo8(1)
	mov r24,r15
	call LCD_pos
	.stabn	68,0,72,.LM18-.LFBB1
.LM18:
	ldi r24,lo8(3)
	cp r15,r24
	breq .L11
	ldi r25,lo8(4)
	cp r15,r25
	breq .L12
	ldi r24,lo8(2)
	cp r15,r24
	breq .L13
	.stabn	68,0,75,.LM19-.LFBB1
.LM19:
	lds r24,current_page
	push __zero_reg__
	push r24
	push r9
	push r8
	push r17
	push r16
	call sprintf
	.stabn	68,0,76,.LM20-.LFBB1
.LM20:
	movw r24,r16
	call LCD_str
	.stabn	68,0,77,.LM21-.LFBB1
.LM21:
	pop __tmp_reg__
	pop __tmp_reg__
	pop __tmp_reg__
	pop __tmp_reg__
	pop __tmp_reg__
	pop __tmp_reg__
	rjmp .L14
.L13:
	.stabn	68,0,79,.LM22-.LFBB1
.LM22:
	push r14
	ldd r25,Y+17
	push r25
	push r6
	push r7
	push r11
	push r10
	rjmp .L19
.L11:
	.stabn	68,0,83,.LM23-.LFBB1
.LM23:
	push r4
	push r5
	push r2
	push r3
	push r13
	push r12
.L19:
	push r17
	push r16
	call sprintf
	.stabn	68,0,84,.LM24-.LFBB1
.LM24:
	movw r24,r16
	call LCD_str
	.stabn	68,0,85,.LM25-.LFBB1
.LM25:
	in __tmp_reg__,__SREG__
	cli
	out __SP_H__,r29
	out __SREG__,__tmp_reg__
	out __SP_L__,r28
	rjmp .L14
.L12:
	.stabn	68,0,87,.LM26-.LFBB1
.LM26:
	lds r24,current_page
	call getRoomCooling
	tst r24
	breq .L15
	.stabn	68,0,88,.LM27-.LFBB1
.LM27:
	ldi r22,lo8(.LC9)
	ldi r23,hi8(.LC9)
	rjmp .L18
.L15:
	.stabn	68,0,90,.LM28-.LFBB1
.LM28:
	ldi r22,lo8(.LC10)
	ldi r23,hi8(.LC10)
.L18:
	movw r24,r16
	call strcpy
	.stabn	68,0,91,.LM29-.LFBB1
.LM29:
	movw r24,r16
	call LCD_str
.L14:
	.stabn	68,0,97,.LM30-.LFBB1
.LM30:
	dec r15
.LBE7:
	.stabn	68,0,67,.LM31-.LFBB1
.LM31:
	cpse r15,__zero_reg__
	rjmp .L9
.L1:
/* epilogue start */
	.stabn	68,0,99,.LM32-.LFBB1
.LM32:
	adiw r28,17
	in __tmp_reg__,__SREG__
	cli
	out __SP_H__,r29
	out __SREG__,__tmp_reg__
	out __SP_L__,r28
	pop r29
	pop r28
	pop r17
	pop r16
	pop r15
	pop r14
	pop r13
	pop r12
	pop r11
	pop r10
	pop r9
	pop r8
	pop r7
	pop r6
	pop r5
	pop r4
	pop r3
	pop r2
	ret
	.size	printRoomPage, .-printRoomPage
	.stabs	"row:r(5,2)",64,0,47,15
	.stabs	"room_temp:r(5,4)",64,0,48,14
	.stabs	"target_temp:r(5,4)",64,0,49,12
	.stabn	192,0,0,.LFBB1-.LFBB1
	.stabs	"main_menu:(0,50)=ar(11,3);0;3;(11,4)",128,0,32,1
	.stabn	192,0,0,.LBB6-.LFBB1
	.stabn	224,0,0,.LBE6-.LFBB1
	.stabs	"str:(0,51)=ar(11,3);0;15;(5,2)",128,0,70,1
	.stabn	192,0,0,.LBB7-.LFBB1
	.stabn	224,0,0,.LBE7-.LFBB1
	.stabn	224,0,0,.Lscope1-.LFBB1
.Lscope1:
	.stabs	"",36,0,0,.Lscope1-.LFBB1
	.stabd	78,0,0
	.stabs	"initDisplayManager:F(0,49)",36,0,10,initDisplayManager
.global	initDisplayManager
	.type	initDisplayManager, @function
initDisplayManager:
	.stabd	46,0,0
	.stabn	68,0,11,.LM33-.LFBB2
.LM33:
.LFBB2:
/* prologue: function */
/* frame size = 0 */
/* stack size = 0 */
.L__stack_usage = 0
	.stabn	68,0,12,.LM34-.LFBB2
.LM34:
	call initLCD
	.stabn	68,0,16,.LM35-.LFBB2
.LM35:
	sbi 0x2,2
	.stabn	68,0,17,.LM36-.LFBB2
.LM36:
	sbi 0x14,7
	ret
	.size	initDisplayManager, .-initDisplayManager
.Lscope2:
	.stabs	"",36,0,0,.Lscope2-.LFBB2
	.stabd	78,0,0
	.stabs	"setCurrentPage:F(0,49)",36,0,20,setCurrentPage
	.stabs	"page:P(5,2)",64,0,20,24
.global	setCurrentPage
	.type	setCurrentPage, @function
setCurrentPage:
	.stabd	46,0,0
	.stabn	68,0,21,.LM37-.LFBB3
.LM37:
.LFBB3:
/* prologue: function */
/* frame size = 0 */
/* stack size = 0 */
.L__stack_usage = 0
	.stabn	68,0,22,.LM38-.LFBB3
.LM38:
	sts current_page,r24
	ret
	.size	setCurrentPage, .-setCurrentPage
.Lscope3:
	.stabs	"",36,0,0,.Lscope3-.LFBB3
	.stabd	78,0,0
	.stabs	"taskPrintPage:F(0,49)",36,0,25,taskPrintPage
.global	taskPrintPage
	.type	taskPrintPage, @function
taskPrintPage:
	.stabd	46,0,0
	.stabn	68,0,26,.LM39-.LFBB4
.LM39:
.LFBB4:
/* prologue: function */
/* frame size = 0 */
/* stack size = 0 */
.L__stack_usage = 0
	.stabn	68,0,27,.LM40-.LFBB4
.LM40:
	lds r24,current_page
	ldi r25,0
	jmp printRoomPage
	.size	taskPrintPage, .-taskPrintPage
.Lscope4:
	.stabs	"",36,0,0,.Lscope4-.LFBB4
	.stabd	78,0,0
	.data
	.type	current_page, @object
	.size	current_page, 1
current_page:
	.byte	2
	.stabs	"current_page:S(5,2)",38,0,8,current_page
	.text
	.stabs	"",100,0,0,.Letext0
.Letext0:
	.ident	"GCC: (GNU) 5.4.0"
.global __do_copy_data
