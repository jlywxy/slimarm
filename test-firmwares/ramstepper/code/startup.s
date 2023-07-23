.globl _asm_entry
.equ mode_svc, 0x13
.equ mode_usr, 0x10
.equ mode_fiq, 0x11
.equ mode_irq, 0x12
.equ mode_abort, 0x17
.equ mode_undef, 0x1b
.equ mode_sys, 0x1f

.section .text
_asm_entry:
    b _reset
    ldr pc, _undef
    ldr pc, _softir
    ldr pc, _abpre
    ldr pc, _abdat
    ldr pc, _reserved
    ldr pc, _irq
    ldr pc, _fiq
_reset:
    mrs	r0,cpsr
	bic	r0,r0,#0x1f
	orr	r0,r0,#0xd3
	msr	cpsr,r0

    ldr r0, =ram_start
    sub sp, r0, #0x1000

    b main
_undef:
_softir:
_abpre:
_abdat:
_reserved:
_irq:
_fiq:
    b _undef
_exit:
    b _exit
.section .data
ram_start:
    .word 0
