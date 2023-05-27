arm-none-eabi-as -mcpu=arm920t -o memtest.o memtest.s
arm-none-eabi-ld -T link.lds -o memtest.elf memtest.o