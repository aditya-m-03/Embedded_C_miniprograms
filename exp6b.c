#include<reg51.h>
unsigned char a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,99};
void main()
{
unsigned int i;
unsigned int s=99;
for(i=0;i<=32;i++)
{
 if(s>a[i])
 {
  s=a[i];
 }
}
P0=s;
}
