#include<reg51.h>

#define LED_P0 P1 //Macro definition

void delay(int); //forward declaration

void main()
{
	LED_P0 = 0X00;
	while(1)
	{
		LED_P0 = 0X55;  
		delay(100);
		LED_P0 = 0XAA;
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