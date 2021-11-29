#include <stc15.h>
#include <intrins.h>

void Delay500ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 22;
	j = 3;
	k = 227;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void Delay200ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 9;
	j = 104;
	k = 139;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}



void BUZZER()
{
P2 = (P2&0X1F) |0XA0;
P04 =	0;
P06 = 0;
P2 = 0X1F;

}

void LED()
{
	int i;
	for(i=0;i<8;i++)
{P2 = (P2&0X1F) |0X80;
P0 = 0XFE<<i;
P2 = 0X1F;
Delay500ms();
}

P2 = (P2&0X1F) |0XA0;
P04 = 1;
P2 =0X1F;
Delay200ms();

P2 = (P2&0X1F) |0XA0;
P04 = 0;
P2 = 0X1F;
Delay200ms();

for(i=0;i<8;i++)
{P2 = (P2&0X1F) |0X80;
P0 = 0X7F>>i;
P2 = 0X1F;
Delay500ms();}

P2 = (P2&0X1F) |0XA0;
P04 = 1;
P2 =0X1F;
Delay200ms();

	
P2 = (P2&0X1F) |0XA0;
P04 = 0;
P2 = 0X1F;
Delay200ms();

}












                                                                                                                                                                                                                                                                                              



void main(void)
{  BUZZER();
  

   while(1){
	 LED();
	 
	 }
}