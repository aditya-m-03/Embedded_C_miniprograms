#include<reg51.h>
void sertx(unsigned char);
void main()
{
TMOD=0x20;
TH1=0xFD;
SCON=0x50;
TR1=1;
sertx('H');
sertx('E');
sertx('L');
sertx('L');
sertx('O');
sertx('W');
sertx('O');
sertx('R');
sertx('L');
sertx('D');
}
void sertx (unsigned char x)
{
SBUF=x;
while(TI==0);
TI=0;
}