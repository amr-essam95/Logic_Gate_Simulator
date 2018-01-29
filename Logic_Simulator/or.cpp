#include "or.h"

void Or::computeOutput()
{
	if(getFirstInputNode()->getNodeValue()==1 || getSecondInputNode()->getNodeValue()==1)
	{
		getOutputNode()->setNodeValue(1);
	}
	else
	{
		getOutputNode()->setNodeValue(0);
	}
}