#include<reg51.h>
void main()
{
unsigned int a[]={0x12,0x34},b[]={0x12,0x34},carry;
unsigned int c=0,d=0,e=0,f=0;
unsigned int c1,c2,d1,d2,e1,e2,f1,f2;
unsigned char result[10]=0;
c=a[0]*b[0];
d=a[0]*b[1];
e=a[1]*b[0];
f=a[1]*b[1];
c1=c&0x00ff;
c2=((c&0xff00)>>8);
d1=d&0x00ff;
d2=((d&0xff00)>>8);
e1=e&0x00ff;
e2=((e&0xff00)>>8);
f1=f&0x00ff;
f2=((f&0xff00)>>8);
result[0]=c1;
result[1]=c2+d1+e1;
if(CY==1) carry=1;
else carry=0;
CY=0;
result[2]=carry+d2+e2+f1;
if(CY==1) carry=1;
else carry=0;
CY=0;
result[3]=carry+f2;
P0=result[0];
P1=result[1];
P2=result[2];
P3=result[3];
while(1);
}
