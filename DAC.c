#include<reg51.h> 
int main(){
	 int i;
  int sinvalue[12] = {128,192,238,255,238,192,128,64,17,0,17,64};
   while(1){
		    for (i=0; i<12 ; i++)
		 {
        P2 = sinvalue[i];
        }
	 }
 }

