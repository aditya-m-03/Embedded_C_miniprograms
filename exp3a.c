#include<reg51.h>
void main()
{
unsigned int i=1,j=9,k=1;
for(i=1;i<=j;i++)
k=k*i;
P0=k;
P1=k>>8;
P2=k>>16;
}
