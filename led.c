#include<reg51.h>
void main()
{
unsigned char n[10]={0X3F,0x06,0X5B,0X4f,0x7f};
unsigned int i,j;

while(1)
{
for(i=0;i<10;i++)
{
P2=n[i];
	
for(j=0;j<60000;j++);
}
}
}
