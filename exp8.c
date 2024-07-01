#include<reg51.h>
void main()
{
unsigned long int a[]={0x22222222,0x44444444,0xaaccddee,0xffccddaa,0x2244aacc};
unsigned long int i,temp,j;
for(i=0;i<=4;i++)
{
 for(j=0;j<=3;j++)
 {
  if(a[j]<a[j+1])
  {
   temp=a[j];
   a[j]=a[j+1];
   a[j+1]=temp;
  }
 }
}
}
