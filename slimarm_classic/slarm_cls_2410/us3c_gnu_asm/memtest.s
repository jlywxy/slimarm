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
main:
@set dram 16bit 
    ldr r0, =0x09000000 
    ldr r1, =0x48000000
    str	r0, [r1]
@disable watchdog
    mov r0, #0x0
    ldr r1, =0x53000000
    str	r0, [r1]
@gpg output
    mov r0, #0x15
    ldr r1, =0x56000060
    str r0, [r1]
@gpg disable pullup
    mov r0, #0
    ldr r1, =0x56000068
    str r0, [r1]
@gpg set low
    mov r0, #0
    ldr r1, =0x56000064
    str r0, [r1]
@memstart-end
    ldr r3, =0x37ffff00
    ldr r2, =0x37ffffff
    

_dram_rw:
@readwrite
    str r3, [r3]
    ldr r3, [r3]
    ldr r4, =0x34
    cmp r3, r4
    bne _blink
@address increase
    add r3, #4
    cmp r3, r2
    bne _dram_rw

    b _exit

_blink:
    mov r0, #2
    ldr r1, =0x56000064
    str r0, [r1]
    b _blink

_undef:
_softir:
_abpre:
_abdat:
_reserved:
_irq:
_fiq:
    b _undef
_exit:
    mov r0, #4
    ldr r1, =0x56000064
    str r0, [r1]

    b _exit
