#include<reg51.h>

#define LED P0

void delay(int);

void main()
{
	LED = 0X00;
	while(1)
	{
		LED = 0X01;
		delay(100);
		LED = 0X02;
		delay(100);
		LED = 0X04;
		delay(100);
		LED = 0X08;
		delay(100);
		LED = 0X10;
		delay(100);
		LED = 0X20;
		delay(100);
		LED = 0X40;
		delay(100);
		LED = 0X80;
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
	
	
	
	
	