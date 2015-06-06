#ifndef __SETMESSAFGE_H__
#define __SETMESSAFGE_H__

#include<avr/io.h>
#include<math.h>
#include<stdlib.h>

#include "Number.h"
#include "SetSignal.h"

/*
const uint guideCode=1;
const uint idCode=2;
const uint coordCode=3;
const uint checkCode=4;
*/


uchar guideMessage[8]={0,1,0,1,0,1,0,1};
uchar idMessage[8]   ={0,0,0,0,0,0,0,1};
uchar coordMessage[8]={0,0,0,0,0,0,0,1};
uchar checkMessage[8]={0,0,0,0,0,0,0,0};

/*
struct code
{
	uint guideCode;
	uint idCode;
	uint coordCode;
	uint checkCode;
}

struct message
{
	uchar guideMessage [8];
	uchar idMessage [8];
	uchar coordMessage [8];
	uchar checkMessage [8];
}
*/

void checkOut();
void setMessage(uchar message[8]);
void setMessage_all();

#endif
