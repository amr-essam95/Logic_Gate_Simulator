#include "xnor.h"

void Xnor::computeOutput()
{
	int in1 = getFirstInputNode()->getNodeValue();
	int in2 = getSecondInputNode()->getNodeValue();
	if((in1==1 && in2==1)||(in1==0 && in2==0))
	{
		getOutputNode()->setNodeValue(1);
	}
	else
	{
		getOutputNode()->setNodeValue(0);
	}
}