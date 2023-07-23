#ifndef _RAMVAPOR_H_
#define _RAMVAPOR_H_

extern const long indicateInterval;

extern const long RAM_TEST_START;
extern const long RAM_TEST_END;
extern void setBoardLED(int index, int state);
extern void boardInit();

extern long readl(long address);
extern void writel(long address, long data);

extern void ramException(long address, int round);

#endif