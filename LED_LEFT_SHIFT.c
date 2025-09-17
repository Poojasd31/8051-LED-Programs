#include<reg51.h>

#define LED P1

void delay(int);

void main()
{
	int i;
	char LED_LEFT[8]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
	
	while(1)
	{
		for(i=0;i<8;i++)
		{
			LED = LED_LEFT[i];
			delay(100);
		}
	}
		
}
	
void delay(int t)
{
	int j,k;
	for(j=0;j<t;j++)
	{
		for(k=0;k<1000;k++)
		{
		}
	}
}