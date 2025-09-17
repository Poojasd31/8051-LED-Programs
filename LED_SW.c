#include<reg51.h>

sbit SW = P3^0; //SWITCH PORT PIN P3.0
sbit LED_P1 = P1^1; //LED Port pin P1.1

void delay(int);

void main()
{
	SW = 1; //Switch is Off
	LED_P1 = 0;
	
	while(1)
	{
		if(SW==0)
		{
		  delay(75);
			LED_P1=1;  //led is On 
		}
		else
		{
		  LED_P1=0;
		}
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