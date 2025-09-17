#include<reg51.h>

#define LED_PORT1 P1  //LED=P1

void delay(int); //Forward Declaration

void main()
{
 LED_PORT1 = 0X00;
 while(1)
 {
   LED_PORT1=0X00;
   delay(100);
   LED_PORT1=0XFF;
   delay(100);
 }
}

void delay(int t)
{
 int i,j;
 for(i=0;i<t;i++)
 {
   for(j=0;j<1000;j++)
   {
   }
  }
}
   
