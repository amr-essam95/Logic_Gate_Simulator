#include "or.h"

void Or::computeOutput()
{
	if(getFirstInput()->getNodeValue()==1 || getSecondInput()->getNodeValue()==1)
	{
		getOutput()->setNodeValue(1);
	}
	else
	{
		getOutput()->setNodeValue(0);
	}
}