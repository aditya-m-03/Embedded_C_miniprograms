#include<reg51.h>
sbit carry=PSW^7;
void main()
{
unsigned int a1[]={0xffff,0xffff};
unsigned int a2[]={0xabcd,0xcdef};
unsigned long int sum1=0;
unsigned long int sum2=0;
unsigned char carry1;
unsigned int *p;
sum1=a1[0]+a2[0];
if(carry==1)
{
 carry1=1;
}
else
{
 carry1=0;
}
sum2=a1[1]+a2[1]+carry1;
p=&sum1;
*p=sum1;
p=p+1;
*p=sum2;
}
