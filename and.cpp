#include "and.h"

void And::computeOutput()
{
	Node *in1 =getFirstInput();
	Node *in2 =getSecondInput();
	Node *out =getOutput();
	// if(*in1==-1 || *in2==-1)
	// {
	// 	out->setNodeValue(-1)
	// }
	if(*in1==1 && *in2==1)
	{
		out->setNodeValue(1);
	}
	else
	{
		out->setNodeValue(0);
	}


}