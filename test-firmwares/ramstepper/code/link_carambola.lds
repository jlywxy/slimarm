MEMORY
{
    FLASH (rx)      : ORIGIN = 0x00300000, LENGTH = 8K
    RAM (xrw)      : ORIGIN = 0x00302000, LENGTH = 8K
}
SECTIONS {
    .text : { * (.text); } >FLASH
    .data : { * (.data); } >RAM
}
