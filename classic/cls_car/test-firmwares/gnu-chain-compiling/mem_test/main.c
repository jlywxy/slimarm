#define MEM_START 0x00380000
#define MEM_END   0x00400000

int main(){
  
  (*(long*)0xfffff800)=0xffffffff;
  (*(long*)0xfffff808)=0x0;
  (*(long*)0xfffff810)=0xffffffff;
  (*(long*)0xfffff818)=0xffffffff;

  
  int status=0;
  while(1){
  for(unsigned long i=MEM_START;i<MEM_END;i+=4){
      if((i)%(512*1024)>(512*1024/2)){
      (*(long*)0xfffff808)=1|status;
      }else{
      (*(long*)0xfffff808)=0|status;
      }
      if(status==0)
      (*(unsigned long*)i)=i;
      else
      (*(unsigned long*)i)=MEM_END-i;
  }
    (*(long*)0xfffff808)=0|status;
  for(long k=0xffff;k>0;k--);
  for(unsigned long i=MEM_START;i<MEM_END;i+=4){
    if((i)%(512*1024)>(512*1024/2)){
      (*(long*)0xfffff808)=2|status;
      }else{
      (*(long*)0xfffff808)=0|status;
      }
    unsigned long j1;
    if(status==0)
      j1=(*(unsigned long*)i);
    else
      j1=MEM_END-(*(unsigned long*)i);
      if((j1)!=(i)){
        (*(long*)0xfffff808)=6;
        while(1);
      }
      (*(long*)0xfffff808)=0;
      
  }
  }
}
