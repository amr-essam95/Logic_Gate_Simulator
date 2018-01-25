#include "and.h"

void And::computeOutput()
{
	Node *in1 =getFirstInput();
	Node *out =getOutput();

	if(*in1==1 )
	{
		out->setNodeValue(0);
	}
	else
	{
		out->setNodeValue(1);
	}


}