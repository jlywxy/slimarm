MEMORY
{
RAM (xrw)      : ORIGIN = 0x00301000, LENGTH = 2K
FLASH (rx)      : ORIGIN = 0x00300000, LENGTH = 2K
}
SECTIONS {
    .text : { * (.text); } >FLASH
    .data : { * (.data); } >RAM
}
