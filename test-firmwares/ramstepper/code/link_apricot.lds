MEMORY
{
    FLASH (rx)      : ORIGIN = 0x40000000, LENGTH = 8K
    RAM (xrw)      : ORIGIN = 0x40002000, LENGTH = 8K
}
SECTIONS {
    .text : { * (.text); } >FLASH
    .data : { * (.data); } >RAM
}
