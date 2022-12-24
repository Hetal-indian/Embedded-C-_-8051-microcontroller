# include <reg51.h>
sbit green = P2^0;

void delay ();
int main ()
{
	TMOD = 0x01;
	while(1)
	{
		green=~green ;
		delay ();
	}
	return 0;
}
void delay ()
{
	TL0 = 0xD1;
	TH0 = 0xA5;
	TR0=1;
	while (TF0==0);
	TR0=0;
	TF0=0;
}