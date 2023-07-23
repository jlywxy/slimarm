#include "ramstepper.h"
/*
 * The Board Definition
 * for RAMStepper Utility
 *
 * version v1r0e0
 */

const long indicateInterval = 0x00080000; // 512KBytes

const long RAM_TEST_START = 0x20000000;
const long RAM_TEST_END = 0x28000000;

void boardInit()
{
    writel(0xfffffd44, 0x00008000);
    writel(0xfffff800, 0xffffffff);
    writel(0xfffff810, 0xffffffff);
    writel(0xfffff834, 0xffffffff);
}

void setBoardLED(int index, int state)
{
    if (state == 1)
    {
        (*(long *)0xfffff830) |= 1 << (index - 1);
    }
    else
    {
        (*(long *)0xfffff834) |= 1 << (index - 1);
    }
}

void ramException(long address, int round)
{
    writel(0x00302ff0, address);
    writel(0x00302ff4, round);
    while(1);
}