int main(){
  (*(long*)0x4c000000)=0xffffff;
  (*(long*)0x4c000014)=0x3;
  (*(long*)0x4c000004)=0x0007f011;
  
  (*(long*)0x4a000008)=0xffffffff;
  (*(long*)0x4a00000c)=0x7ff;
  
  (*(long*)0x48000000)=0x1000000;
  (*(long*)0x48000024)=0x9c03e0;
  (*(long*)0x48000028)=0xb0;
  (*(long*)0x4800001c)=0x18005;
  (*(long*)0x4800002c)=0x30;
  
  (*(long*)0x53000000)=0x0;
  
  (*(long*)0x56000060)=0x15;
  (*(long*)0x56000068)=0;

  
  int status=0;
  while(1){
  for(unsigned long i=0x30000000;i<0x32000000;i+=4){
      if((i)%(512*1024)>(512*1024/2)){
      (*(long*)0x56000064)=0|status;
      }else{
      (*(long*)0x56000064)=2|status;
      }
      if(status==0)
      (*(unsigned long*)i)=i;
      else
      (*(unsigned long*)i)=0x32000000-i;
  }
    (*(long*)0x56000064)=0|status;
  for(long k=0xffff;k>0;k--);
  for(unsigned long i=0x3000000c;i<0x32000000;i+=4){
    if((i)%(512*1024)>(512*1024/2)){
      (*(long*)0x56000064)=0|status;
      }else{
      (*(long*)0x56000064)=4|status;
      }
    unsigned long j1;
    if(status==0)
      j1=(*(unsigned long*)i);
    else
      j1=0x32000000-(*(unsigned long*)i);
      if((j1)!=(i)){
        (*(long*)0x56000064)=6;
        while(1);
      }
      (*(long*)0x56000064)=0;
      
  }
  status=1-status;
  }
}
