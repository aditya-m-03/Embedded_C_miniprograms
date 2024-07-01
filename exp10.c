#include<reg51.h>
void main()
{
unsigned char x1=0,x2=0,x3=0,x4=0;
x1=0xcf/0x0a;
x2=0xcf%0x0a;
P2=x2;
x4=x1/0x0a;
x3=x1%0x0a;
P1=x3;
P0=x4;
}

