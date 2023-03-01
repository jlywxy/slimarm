.text
    b _reset
    ldr pc, _undef
    ldr pc, _softir
    ldr pc, _abpre
    ldr pc, _abdat
    ldr pc, _reserved
    ldr pc, _irq
    ldr pc, _fiq
_reset:
    b main
delay:
    ldr r0, =0x5000
__delay_sub_1:
    sub r0, r0, #1
    cmp r0, #0
    bgt __delay_sub_1
    bx lr
main:
    mov r0, #0x10
    ldr r1, =0x56000060
    str r0, [r1]

    mov r0, #0x0
    ldr r1, =0x56000068
    str r0, [r1]
__blink_loop:
    mov r0, #4
    ldr r1, =0x56000064
    str r0, [r1]
    bl delay

    mov r0, #0
    str r0, [r1]
    bl delay

    mov r0, #0x8000
    ldr r1, =0x53000008
    str	r0, [r1]

    b __blink_loop
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
