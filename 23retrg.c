#include <REGX52.H>
void delay(unsigned char);
code unsigned char a[10]={
	0xC0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90
};
void main(void)
{
	unsigned char i,count1=0,count2=0,j;
	for(;;)
	{
		for(j=0;j<10;j++)
		{
			P2=0X01;
			P0=a[count1];
			delay(1);
			P2=0X02;
			P0=a[count2];
			delay(1);
	  }
		if(count2==9)
		{
			if(count1==9)
			{
				count1=0;
				count2=0;
			}
			else{
			count1++;
			count2=0;}
		}
		else
		count2++;
	}
}
void delay(unsigned char time)
{
	unsigned char i;
	unsigned int j;
	for(i =0;i<time;i++)
	for(j=0;j<1000;j++);
}