#include "and.h"

void Not::computeOutput()
{
	Node *in1 =getFirstInputNode();
	Node *out =getOutputNode();

	if(in1->getNodeValue()==1 )
	{
		out->setNodeValue(0);
	}
	else
	{
		out->setNodeValue(1);
	}


}