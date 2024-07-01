#include<reg51.h>
unsigned char sqr[]={0,1,4,9,16,25,36,49,64,81,100};
unsigned int sqrt(unsigned int i)
{
 unsigned int sqroot;
 sqroot=sqr[i]; 
return sqroot;
}
void main()
{
 unsigned int n=8,square;
 square=sqrt(n);
 P1=square;
}
