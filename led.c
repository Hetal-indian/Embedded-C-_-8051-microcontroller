#include<reg51.h>
sbit a= P3^0;

void main()
{
unsigned char n[10]={0X06,0XF9,0X24,0X30,0X19,0X12,0X02,0XF8,0XE00,0X10};
unsigned int i,j;
a=1;
while(1)
{
for(i=0;i<10;i++)
{
//P2=n[i];
	P2=0X5C;
for(j=0;j<60000;j++);
}
}
}