#include "SetMessage.h"

void checkOut()
{
	for(i=0;i<=7;i++)
	{
		checkMessage[i]=guideMessage[i]|idMessage[i]|coordMessage[i];
	}
}

void setMessage(uchar message[8])
{
	for(i=0;i<=7;i++)
	{
		if(message[i]==0)
		{
			setSignal_0();
		}
		else
		{
			setSignal_1();
		}
	}
}

void setMessage_all()
{
	setMessage(guideMessage[8]);
	setMessage(idMessage[8]);
	setMessage(coordMessage[8]);
	setMessage(checkMessage[8]);
}
