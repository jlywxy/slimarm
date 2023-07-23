#include "ramstepper.h"
/*
 * The Board Definition
 * for RAMStepper Utility
 *
 * version v1r0e0
 */

const long indicateInterval = 0x00800000; //512KBytes

const long RAM_TEST_START = 0x30000000;
const long RAM_TEST_END = 0x34000000;

void boardInit()
{
    writel(0x53000000, 0);
    writel(0x56000010, 0b010101);
    writel(0x56000014, 0b111);
}

void setBoardLED(int index, int state)
{
    if (state == 1)
    {
        (*(long *)0x56000014) |= 1 << (index - 1);
    }
    else
    {
        (*(long *)0x56000014) &= ~(1 << (index - 1));
    }
}

void ramException(long address, int round){
    while(1);
}