#include "xor.h"

void Xor::computeOutput()
{
	if((getFirstInput()->getNodeValue()==1 && getSecondInput()->getNodeValue()==1)||(getFirstInput()->getNodeValue()==0 && getSecondInput()->getNodeValue()==0))
	{
		getOutput()->setNodeValue(0);
	}
	else
	{
		getOutput()->setNodeValue(1);
	}
}