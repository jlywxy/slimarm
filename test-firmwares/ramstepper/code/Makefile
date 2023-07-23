CROSS_COMPILE=arm-none-eabi-
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

carambola_config: startup.o bsp_carambola.o main.o 
	$(LD) startup.o bsp_carambola.o main.o -o ramstepper_carambola.elf -T link_carambola.lds -L. -lgcc
apricot_config: startup.o bsp_apricot.o main.o 
	$(LD) startup.o bsp_apricot.o main.o -o ramstepper_apricot.elf -T link_apricot.lds -L. -lgcc

main.o:
	$(CC) -c -mcpu=arm926ej-s --specs=nosys.specs -o main.o main.c 
bsp_apricot.o:
	$(CC) -c -mcpu=arm926ej-s -o bsp_apricot.o bsp_apricot.c
bsp_carambola.o:
	$(CC) -c -mcpu=arm926ej-s -o bsp_carambola.o bsp_carambola.c
startup.o:
	$(AS) -mcpu=arm926ej-s startup.s -o startup.o 

clean:
	rm *.o *.elf