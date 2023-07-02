#define MEM_START 0x30000000
#define MEM_END 0x34000000

int main()
{

  (*(long *)0x53000000) = 0;
  (*(long *)0x56000010) = 0b010101;
  (*(long *)0x56000014) = 0b111;

  (*(long*)0x40000010) = 1 << 0 | 3 << 5 | 400 << 14 | 1 << 24;
  

  int status = 0;
  while (1)
  {
    for (unsigned long i = MEM_START; i < MEM_END; i += 4)
    {
      if ((i) % (512 * 1024) > (512 * 1024 / 2))
      {
        (*(long *)0x56000014) = 2 | status;
      }
      else
      {
        (*(long *)0x56000014) = 0 | status;
      }
      if (status == 0)
        (*(unsigned long *)i) = i;
      else
        (*(unsigned long *)i) = MEM_END - i;
    }
    (*(long *)0x56000014) = 0 | status;
    for (long k = 0xffff; k > 0; k--)
      ;
    for (unsigned long i = MEM_START; i < MEM_END; i += 4)
    {
      if ((i) % (512 * 1024) > (512 * 1024 / 2))
      {
        (*(long *)0x56000014) = 4 | status;
      }
      else
      {
        (*(long *)0x56000014) = 0 | status;
      }
      unsigned long j1;
      if (status == 0)
        j1 = (*(unsigned long *)i);
      else
        j1 = MEM_END - (*(unsigned long *)i);
      if ((j1) != (i))
      {
        (*(long *)0x56000014) = 7;
        while (1)
          ;
      }
      (*(long *)0x56000014) = 0;
    }
    status=1-status;
  }
}
