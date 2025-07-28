#include<reg51.h>

sbit s1=P2^0;
sbit s2=P2^1;
void delay()
{
	unsigned int i;
	for(i=0;i<35000;i++);
}
void main()
{
		P1=0;
		while(1)
			{
			if(s1==0)
				{
				P1=P1+1;
				delay();
			}
			else if(s2==0)
				{
				P1=P1-1;
				delay();
			}
		}
	}