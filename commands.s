	.file	"commands.c"
__SP_H__ = 0x3e
__SP_L__ = 0x3d
__SREG__ = 0x3f
__RAMPZ__ = 0x3b
__tmp_reg__ = 0
__zero_reg__ = 1
	.stabs	"/home/gergelyb/Documents/Programming/MCU/AVR/AutomatizaltGyartorendszerek/uart-thermostat/",100,0,2,.Ltext0
	.stabs	"src/commands.c",100,0,2,.Ltext0
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
	.stabs	"include/uart.h",130,0,0,0
	.stabs	"uart_buffer:T(7,1)=s123length:(5,2),0,8;head:(5,2),8,8;tail:(5,2),16,8;buffer:(7,2)=ar(7,3)=r(7,3);0;0177777;;0;59;(7,4)=*(5,2),24,960;;",128,0,0,0
	.stabs	"uart_buffer:t(7,5)=(7,1)",128,0,73,0
	.stabn	162,0,0,0
	.stabs	"include/commands.h",130,0,0,0
	.stabs	"CommandFunc:t(8,1)=(8,2)=*(8,3)=f(0,49)",128,0,39,0
	.stabs	"command:T(8,4)=s7func:(8,1),0,16;room_nr:(5,2),16,8;arg:(8,5)=ar(7,3);0;3;(5,2),24,32;;",128,0,0,0
	.stabs	"command:t(8,6)=(8,4)",128,0,50,0
	.stabn	162,0,0,0
	.stabs	"/usr/lib/avr/include/string.h",130,0,0,0
	.stabs	"/usr/lib/gcc/avr/5.4.0/include/stddef.h",130,0,0,0
	.stabs	"size_t:t(10,1)=(0,4)",128,0,216,0
	.stabn	162,0,0,0
	.stabn	162,0,0,0
	.stabs	"include/room_manager.h",130,0,0,0
	.stabs	"Room:T(11,1)=s6number:(5,2),0,8;target_temperature:(5,4),8,16;current_temp:(5,4),24,16;cooling:(5,2),40,8;;",128,0,0,0
	.stabs	"Room:t(11,2)=(11,1)",128,0,14,0
	.stabn	162,0,0,0
	.stabs	"/usr/lib/avr/include/stdlib.h",130,0,0,0
	.stabs	"/usr/lib/gcc/avr/5.4.0/include/stddef.h",130,0,0,0
	.stabs	"wchar_t:t(13,1)=(0,1)",128,0,328,0
	.stabn	162,0,0,0
	.stabs	"div_t:t(12,1)=(12,2)=s4quot:(0,1),0,16;rem:(0,1),16,16;;",128,0,73,0
	.stabs	"ldiv_t:t(12,3)=(12,4)=s8quot:(0,3),0,32;rem:(0,3),32,32;;",128,0,79,0
	.stabs	"__compar_fn_t:t(12,5)=(12,6)=*(12,7)=f(0,1)",128,0,82,0
	.stabn	162,0,0,0
	.stabs	"initCommands:F(0,49)",36,0,10,initCommands
.global	initCommands
	.type	initCommands, @function
initCommands:
	.stabd	46,0,0
	.stabn	68,0,11,.LM0-.LFBB1
.LM0:
.LFBB1:
/* prologue: function */
/* frame size = 0 */
/* stack size = 0 */
.L__stack_usage = 0
	.stabn	68,0,12,.LM1-.LFBB1
.LM1:
	sts next_command+1,__zero_reg__
	sts next_command,__zero_reg__
	ret
	.size	initCommands, .-initCommands
.Lscope1:
	.stabs	"",36,0,0,.Lscope1-.LFBB1
	.stabd	78,0,0
	.stabs	"taskExecuteCommand:F(0,49)",36,0,15,taskExecuteCommand
.global	taskExecuteCommand
	.type	taskExecuteCommand, @function
taskExecuteCommand:
	.stabd	46,0,0
	.stabn	68,0,16,.LM2-.LFBB2
.LM2:
.LFBB2:
/* prologue: function */
/* frame size = 0 */
/* stack size = 0 */
.L__stack_usage = 0
	.stabn	68,0,17,.LM3-.LFBB2
.LM3:
	lds r30,next_command
	lds r31,next_command+1
	sbiw r30,0
	breq .L2
	.stabn	68,0,21,.LM4-.LFBB2
.LM4:
	ldi r22,lo8(next_command+3)
	ldi r23,hi8(next_command+3)
	lds r24,next_command+2
	icall
	.stabn	68,0,22,.LM5-.LFBB2
.LM5:
	sts next_command+1,__zero_reg__
	sts next_command,__zero_reg__
.L2:
	ret
	.size	taskExecuteCommand, .-taskExecuteCommand
.Lscope2:
	.stabs	"",36,0,0,.Lscope2-.LFBB2
	.stabd	78,0,0
	.stabs	"taskParseCommand:F(0,49)",36,0,32,taskParseCommand
.global	taskParseCommand
	.type	taskParseCommand, @function
taskParseCommand:
	.stabd	46,0,0
	.stabn	68,0,33,.LM6-.LFBB3
.LM6:
.LFBB3:
/* prologue: function */
/* frame size = 0 */
/* stack size = 0 */
.L__stack_usage = 0
	.stabn	68,0,34,.LM7-.LFBB3
.LM7:
	lds r24,command_string
	tst r24
	breq .L8
	.stabn	68,0,36,.LM8-.LFBB3
.LM8:
	lds r24,command_string+2
	cpi r24,lo8(99)
	breq .L11
	cpi r24,lo8(116)
	brne .L10
	.stabn	68,0,39,.LM9-.LFBB3
.LM9:
	ldi r24,lo8(gs(setTargetRoomTemp))
	ldi r25,hi8(gs(setTargetRoomTemp))
	rjmp .L16
.L11:
	.stabn	68,0,42,.LM10-.LFBB3
.LM10:
	ldi r24,lo8(gs(setRoomCooling))
	ldi r25,hi8(gs(setRoomCooling))
.L16:
	sts next_command+1,r25
	sts next_command,r24
.L10:
	.stabn	68,0,46,.LM11-.LFBB3
.LM11:
	lds r24,command_string+3
	subi r24,lo8(-(-48))
	sts next_command+2,r24
	.stabn	68,0,47,.LM12-.LFBB3
.LM12:
	ldi r20,lo8(3)
	ldi r21,0
	ldi r22,lo8(command_string+4)
	ldi r23,hi8(command_string+4)
	ldi r24,lo8(next_command+3)
	ldi r25,hi8(next_command+3)
	call strncpy
	.stabn	68,0,48,.LM13-.LFBB3
.LM13:
	sts command_string,__zero_reg__
.L8:
	ret
	.size	taskParseCommand, .-taskParseCommand
.Lscope3:
	.stabs	"",36,0,0,.Lscope3-.LFBB3
	.stabd	78,0,0
	.stabs	"fetchCommand:F(5,2)",36,0,54,fetchCommand
	.stabs	"dest:P(7,4)",64,0,54,14
.global	fetchCommand
	.type	fetchCommand, @function
fetchCommand:
	.stabd	46,0,0
	.stabn	68,0,55,.LM14-.LFBB4
.LM14:
.LFBB4:
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
	sbiw r28,10
	in __tmp_reg__,__SREG__
	cli
	out __SP_H__,r29
	out __SREG__,__tmp_reg__
	out __SP_L__,r28
/* prologue: function */
/* frame size = 10 */
/* stack size = 18 */
.L__stack_usage = 18
	movw r14,r24
	.stabn	68,0,57,.LM15-.LFBB4
.LM15:
	std Y+10,__zero_reg__
.L18:
	.stabn	68,0,59,.LM16-.LFBB4
.LM16:
	ldd r24,Y+10
	cpi r24,lo8(58)
	breq .L28
.LBB2:
	.stabn	68,0,61,.LM17-.LFBB4
.LM17:
	movw r24,r28
	adiw r24,10
	call read_buffer
	.stabn	68,0,62,.LM18-.LFBB4
.LM18:
	cpse r24,__zero_reg__
	rjmp .L18
.L21:
	.stabn	68,0,65,.LM19-.LFBB4
.LM19:
	ldi r24,0
	rjmp .L19
.L28:
.LBE2:
	.stabn	68,0,68,.LM20-.LFBB4
.LM20:
	std Y+1,r24
	movw r16,r28
	subi r16,-2
	sbci r17,-1
	movw r12,r28
	ldi r24,9
	add r12,r24
	adc r13,__zero_reg__
.L22:
.LBB3:
	.stabn	68,0,73,.LM21-.LFBB4
.LM21:
	movw r24,r16
	call read_buffer
	.stabn	68,0,74,.LM22-.LFBB4
.LM22:
	tst r24
	breq .L21
	subi r16,-1
	sbci r17,-1
.LBE3:
	.stabn	68,0,71,.LM23-.LFBB4
.LM23:
	cp r16,r12
	cpc r17,r13
	brne .L22
	.stabn	68,0,79,.LM24-.LFBB4
.LM24:
	ldd r24,Y+8
	cpi r24,lo8(33)
	brne .L21
	.stabn	68,0,88,.LM25-.LFBB4
.LM25:
	std Y+9,__zero_reg__
	.stabn	68,0,89,.LM26-.LFBB4
.LM26:
	movw r22,r28
	subi r22,-1
	sbci r23,-1
	movw r24,r14
	call strcpy
	.stabn	68,0,90,.LM27-.LFBB4
.LM27:
	ldi r24,lo8(1)
.L19:
/* epilogue start */
	.stabn	68,0,91,.LM28-.LFBB4
.LM28:
	adiw r28,10
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
	ret
	.size	fetchCommand, .-fetchCommand
	.stabs	"container:(0,50)=ar(7,3);0;8;(5,2)",128,0,56,1
	.stabs	"tmp:(5,2)",128,0,57,10
	.stabn	192,0,0,.LFBB4-.LFBB4
	.stabn	224,0,0,.Lscope4-.LFBB4
.Lscope4:
	.stabs	"",36,0,0,.Lscope4-.LFBB4
	.stabd	78,0,0
	.stabs	"taskFetchCommand:F(0,49)",36,0,26,taskFetchCommand
.global	taskFetchCommand
	.type	taskFetchCommand, @function
taskFetchCommand:
	.stabd	46,0,0
	.stabn	68,0,27,.LM29-.LFBB5
.LM29:
.LFBB5:
/* prologue: function */
/* frame size = 0 */
/* stack size = 0 */
.L__stack_usage = 0
	.stabn	68,0,29,.LM30-.LFBB5
.LM30:
	ldi r24,lo8(command_string)
	ldi r25,hi8(command_string)
	jmp fetchCommand
	.size	taskFetchCommand, .-taskFetchCommand
.Lscope5:
	.stabs	"",36,0,0,.Lscope5-.LFBB5
	.stabd	78,0,0
	.local	command_string
	.comm	command_string,9,1
	.comm	next_command,7,1
	.stabs	"command_string:S(0,50)",40,0,9,command_string
	.stabs	"next_command:G(8,6)",32,0,8,0
	.stabs	"",100,0,0,.Letext0
.Letext0:
	.ident	"GCC: (GNU) 5.4.0"
.global __do_clear_bss
