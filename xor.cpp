#include "xor.h"

void Xor::computeOutput()
{
	int i1 = getFirstInputNode()->getNodeValue();
	int i2 = getSecondInputNode()->getNodeValue();
	if((i1==1 && i2==1)||(i1==0 && i2==0))
	{
		getOutputNode()->setNodeValue(0);
	}
	else
	{
		getOutputNode()->setNodeValue(1);
	}
}