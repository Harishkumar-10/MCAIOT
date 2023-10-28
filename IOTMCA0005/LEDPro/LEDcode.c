#include<reg51.h>
sbit LED=P2^0;
sbit LED2=P2^2;
sbit LED3=P2^4;
sbit LED4=P2^6;
void delay();
void main(void)
{
while(1){

LED =0;
LED2=1;
LED3=0;
LED4=1;	
	
delay();
	

LED=1;
LED2=0;
LED3=1;
LED4=0;
delay();

}
}

void delay(){
int i;
int j;
for(i=0;i<0;i++){
for(j=0;j<10000;j++){}
}
}