#include<reg51.h>
sbit pin=P1^0;

void main(){
P1=0x00;
TMOD=0x10;
loop:TL0=0xAF;
 TH0=0x3C;
 pin=0;
 TR0=1;
 while(TF0==0){}
 TL0=0xAF;
 TH0=0x8B;
 pin=1;
 while(TF0==0){}
goto loop;
}
