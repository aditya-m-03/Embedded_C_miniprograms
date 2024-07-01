#include<reg51.h>
void main()
{
unsigned int a[2]={0x1111,0x2222},b[2]={0x2222,0x1111};
unsigned long int sum1=0,sum2=0;
unsigned char carry;
unsigned long int *p;
sum1=a[0]+b[0];
if(CY==0)
carry=1;
else
carry=0;
sum2=a[1]+b[1]+carry;
p=&sum1;
*p=sum1;
p++;
*p++=sum2;
}

