# include <reg51.h>

void msdelay(unsigned int time)  // Function for creating delay in milliseconds.
{
    unsigned i,j ;
    for(i=0;i<time;i++)    
    for(j=0;j<1275;j++);
}

int main ()
{
	unsigned int i;
	P1 = 0X14;
	for (i=0;i<10;i++)
	{
	 msdelay(60) 	;
	}
	P1 = 0X41;
	for (i=0;i<10;i++)
	{
	 msdelay(60) 	;
	}
	return 0;
}