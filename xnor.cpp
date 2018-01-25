#include "xnor.h"

void Xnor::computeOutput()
{
	if((getFirstInput()->getNodeValue()==1 && getSecondInput()->getNodeValue()==1)||(getFirstInput()->getNodeValue()==0 && getSecondInput()->getNodeValue()==0))
	{
		getOutput()->setNodeValue(1);
	}
	else
	{
		getOutput()->setNodeValue(0);
	}
}