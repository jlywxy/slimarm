MEMORY
{
RAM (xrw)      : ORIGIN = 0x40001000, LENGTH = 1K
FLASH (rx)      : ORIGIN = 0x40000000, LENGTH = 1K
}
SECTIONS {
    .text : { * (.text); } >FLASH
    .data : { * (.data); } >RAM
}
