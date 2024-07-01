#include<reg51.h>
sbit carry=PSW^7;
void main()
{
unsigned char a[]={0xff,0x00};
unsigned char i,one=0,zero=0;
for(i=0;i<8;i++)
{
 a[0]=a[0]>>1;
 if(carry==1)
  one=one+1;
 else
  zero=zero+1;
}
for(i=0;i<8;i++)
{
 a[1]=a[1]>>1;
 if(carry==1)
  one=one+1;
 else
  zero=zero+1;
}
P0=one;
P1=zero;
}