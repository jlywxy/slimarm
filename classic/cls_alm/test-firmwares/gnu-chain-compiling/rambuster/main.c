#define MEM_START 0x30000000
#define MEM_END   0x32000000
//led:
//act=4
//test=1
//err=2

int main(){
  (*(long*)0x4c000000)=0xffffff;
  (*(long*)0x4c000014)=0x3;
(*(char*)0x56000064)=4;
  for(int i=255;i>=0;i--)for(int i=255;i>=0;i--);
  (*(long*)0x4c000004)=0x00058011;
  for(int i=255;i>=0;i--)for(int i=255;i>=0;i--);
  
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

//test for dat open
  (*(long*)0x56000064)=1;
  (*(short*)0x30000000)=0;
  for(int i=0;i<16;i++){
    (*(long*)0x30000000)=(1<<i);
    if((*(long*)0x30000000)!=(1<<i)){
      (*(long*)0x56000064)|=2;
      (*(long*)0x40000ff0)=i;
      (*(long*)0x40000ff8)=4;
      while(1);
    }
  }
//test for addr open
  (*(long*)0x56000064)=1;
  for(int i=0;i<28;i++){
    (*(char*)(0x30000000|(1<<i)))=0;
  }
  for(int i=0;i<28;i++){
    int bitDetect=0x30000000|(1<<i);
    (*(char*)bitDetect)=0xaa;
    if((*(char*)0x30000000)==0xaa){
      (*(long*)0x56000064)|=2;
      (*(long*)0x40000ff0)=i;
      (*(long*)0x40000ff8)=3;
      while(1);
    }
  }
  //test for addr line short
  (*(long*)0x56000064)=1;
  // for(int i=MEM_START;i<MEM_END;i+=4){
  //   (*(long*)i)=0;
  // }
  for(int i=0;i<28;i++){
      int bitDetect=0x30000000|(1<<i);
      (*(char*)bitDetect)=0xaa;
      for(int j=i+1;j<28;j++){
          *(char*)(bitDetect|(1<<j))=0;
      }
  }
  (*(long*)0x56000064)=0;
    for(int i=0;i<28;i++){
      int bitDetect=0x30000000|(1<<i);
      (*(char*)bitDetect)=0xbb;
      for(int j=i+1;j<28;j++){
          if((*(char*)(bitDetect|(1<<j)))==0xbb){
            (*(long*)0x56000064)|=2;
            (*(long*)0x40000ff0)=i;
            (*(long*)0x40000ff4)=j;
            (*(long*)0x40000ff8)=0;
            while(1);
          }
      }

  }
  //test for dat line short
  (*(long*)0x56000064)=1;
  for(int i=0;i<32;i++){
    (*(short*)0x30000000)=1<<i;
    for(int j=i+1;j<32;j++){
      if((*(short*)0x30000000)==(1<<i|1<<j)){
        (*(long*)0x56000064)|=2;
            (*(long*)0x40000ff0)=i;
            (*(long*)0x40000ff4)=j;
            (*(long*)0x40000ff8)=1;
            while(1);
      }
    }
  }

  
}
