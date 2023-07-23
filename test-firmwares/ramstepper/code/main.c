#include "ramstepper.h"
/*
 * RAMStepper Utility
 *
 * version v1r1e0
 */
void startRamSerialTest();

void main()
{
    boardInit();
    startRamSerialTest();
}

long readl(long address)
{
    return (*(long *)address);
}

void writel(long address, long data)
{
    (*(long *)address) = data;
}

void startRamSerialTest()
{
    int round = 0;

    long segments = (RAM_TEST_END - RAM_TEST_START) / indicateInterval;
    setBoardLED(1, 0);
    setBoardLED(2, 0);
    setBoardLED(3, 0);
    while (1)
    {
        // Positive/Negative Write Block
        int writeIndicatorState = 0;
        for (long segment = 0; segment < segments; segment++)
        {
            if (round == 0)
            {
                for (long addr = RAM_TEST_START + indicateInterval * segment; addr < RAM_TEST_START + indicateInterval * (segment + 1); addr += 4)
                {
                    (*(long*)addr)=addr;
                }
            }
            else
            {
                for (long addr = RAM_TEST_START + indicateInterval * segment; addr < RAM_TEST_START + indicateInterval * (segment + 1); addr += 4)
                {
                    (*(long*)addr)=RAM_TEST_END - addr;
                }
            }
            writeIndicatorState = 1 - writeIndicatorState;
            setBoardLED(1, writeIndicatorState);
            setBoardLED(3, round);
        }

        // Positive/Negative Read(Verify) Block
        int readIndicatorState = 0;
        for (long segment = 0; segment < segments; segment++)
        {
            if (round == 0)
            {
                for (long addr = RAM_TEST_START + indicateInterval * segment; addr < RAM_TEST_START + indicateInterval * (segment + 1); addr += 4)
                {
                    if (((*(long*)addr) != addr)&& (*(long*)addr) != addr)
                    {
                        setBoardLED(1, 1);
                        setBoardLED(2, 1);
                        setBoardLED(3, 1);
                        ramException(addr, round);
                    }
                }
            }
            else
            {
                for (long addr = RAM_TEST_START + indicateInterval * segment; addr < RAM_TEST_START + indicateInterval * (segment + 1); addr += 4)
                {
                    if (((*(long*)addr) != (RAM_TEST_END - addr)) && ((*(long*)addr) != (RAM_TEST_END - addr)))
                    {
                        setBoardLED(1, 1);
                        setBoardLED(2, 1);
                        setBoardLED(3, 1);
                        ramException(addr, round);
                    }
                }
            }
            readIndicatorState = 1 - readIndicatorState;
            setBoardLED(2, readIndicatorState);
            setBoardLED(3, round);
        }
        round = 1 - round;
    }
}