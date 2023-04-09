CROSS_COMPILE=/Users/jlywxy/arm-none-eabi/bin/arm-none-eabi-
AS		= $(CROSS_COMPILE)as
ifneq ($(shell $(CROSS_COMPILE)ld.bfd -v 2> /dev/null),)
LD		= $(CROSS_COMPILE)ld.bfd
else
LD		= $(CROSS_COMPILE)ld
endif
CC		= $(CROSS_COMPILE)gcc
CPP		= $(CC) -E
AR		= $(CROSS_COMPILE)ar
NM		= $(CROSS_COMPILE)nm
LDR		= $(CROSS_COMPILE)ldr
STRIP		= $(CROSS_COMPILE)strip
OBJCOPY		= $(CROSS_COMPILE)objcopy
OBJDUMP		= $(CROSS_COMPILE)objdump

main: main.o startup.o
	$(LD) -o main.elf -T link.lds startup.o main.o 
main.o:
	$(CC) -c -mcpu=arm920t --specs=nosys.specs -o main.o main.c 
startup.o:
	$(AS) -mcpu=arm920t startup.s -o startup.o 

clean:
	rm *.o