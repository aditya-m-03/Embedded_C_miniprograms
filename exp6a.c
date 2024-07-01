#include<reg51.h>
void main()
{
unsigned char a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
unsigned char i,largest=1,smallest=32;
for(i=0;i<=32;i++)
{
 if(largest<a[i])
 {
  largest=a[i];
 }
 if(smallest>a[i])
 {
  smallest=a[i];
 }
}
P0=largest;
P1=smallest;
}

