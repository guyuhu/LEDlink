#include "SetSignal.h"

void initPWM()
{
	DDRB=01000000;		
}

void setSignal_1()
{
	TCCR1=01100111;//ʹ��PWM��ʱ��ΪCK/2��3Mhz;
	OCR1B=149;		//3*50��
	OCR1A=60;		//ռ�ձ�
}

void setSignal_0()
{
	TCCR1=01100111;//ʹ��PWM��ʱ��ΪCK/2��3Mhz;
	OCR1B=90;			//3*30
	OCR1A=60;			//ռ�ձ�
}
