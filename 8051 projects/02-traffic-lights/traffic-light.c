#include<reg51.h>


void delay(){
	int i;
	for(i=0;i<14;i++)
	{
		TH1=0;
		TL1=0;
		TF1=0;
		TR1=1;
		while(TF1==0);
		TR1=0;
		TF1=0;
		}
	}

void count()
{
	int j;
	for(j=5;j>=0;j--)
	{
		P1=j;
		delay();
}
	}
void main()
{
	while(1)
		{
	TMOD=0X10;
	P2=0xA4;
	P3=0x02;
	count();
	P2=0x54;
	P3=0x08;
	count();
	P2=0x0A;
	P3=0x09;
	count();
	P2=0x21;
	P3=0x05;
	count();
	}
	
}