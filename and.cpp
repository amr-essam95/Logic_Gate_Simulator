#include "and.h"

void And::computeOutput()
{
	Node *in1 =getFirstInputNode();
	Node *in2 =getSecondInputNode();
	Node *out =getOutputNode();
	// if(*in1==-1 || *in2==-1)
	// {
	// 	out->setNodeValue(-1)
	// }
	if(in1->getNodeValue()==1 && in2->getNodeValue()==1)
	{
		out->setNodeValue(1);
	}
	else
	{
		out->setNodeValue(0);
	}


}