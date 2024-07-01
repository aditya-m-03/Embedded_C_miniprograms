#include<reg51.h>
void main()
{
unsigned int i,sum=0;
for(i=0;i<=10;i++)
{
sum=sum+i;
}
P0=sum;
}