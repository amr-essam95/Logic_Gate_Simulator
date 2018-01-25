#include "nand.h"

void Nand::computeOutput()
{
	Node *in1 =getFirstInputNode();
	Node *in2 =getSecondInputNode();
	Node *out =getOutput();
	// if(*in1==-1 || *in2==-1)
	// {
	// 	out->setNodeValue(-1)
	// }
	if(in1->getNodeValue()==0 && in2->getNodeValue()==0)
	{
		out->setNodeValue(1);
	}
	else
	{
		out->setNodeValue(0);
	}


}