#include <REGX52.H>
void delay(unsigned char);
code unsigned char a[10]={
	0xC0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90
};
code unsigned char b[8]={
	0xa4,0xC0,0xa4,0xf9,0xC0,0xb0,0xa4,0x99
};
void main(void)
{
	unsigned char i,count=0,j,k;
	for(;;)
	{
		for(count=0;count<8;count++)
		{
		  for(j=0;j<30;j++)
		  {
			  for(k=0;k<8;k++)
			  {
			  	if(count+k>=8)
			  		P0=b[count+k-8];
			  	else
			      P0=b[count+k];
			   	delay(1);
			    P2=1<<k;
			  	delay(1);
			  	P2=0;
		   	}
		  }
			delay(30);
		}
	}
}
void delay(unsigned char time)
{
	unsigned char i;
	unsigned int j;
	for(i =0;i<time;i++)
	for(j=0;j<100;j++);
}