#include<reg51.h>
int s,m,h;
void delay(){
	int x;
	for(x=0;x<14;x++){
		TMOD=0x01;
		TH0=0;
		TL0=0;
		TR0=1;
		while(TF0==0);
		TR0=0;
		TF0=0;
	}
}
void main()
{
	while(1){
		for(h=0;h<0x24;h++){
			P0=h;
			if(h==0x09||h==0x19||h==0x29||h==0x39||h==0x49)
			{
				h=h+6;
			}
			for(m=0;m<0x60;m++){
				P2=m;
				if(m==0x09||m==0x19||m==0x29||m==0x39||m==0x49){
					m=m+6;
				}
				for(s=0;s<0x60;s++){
					P3=s;
					delay();
				if(s==0x09||s==0x19||s==0x29||s==0x39||s==0x49){
						s=s+6;
					}
				}
			}
		}
	}
}