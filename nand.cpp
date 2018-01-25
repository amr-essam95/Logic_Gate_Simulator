#include "nand.h"

void Nand::computeOutput()
{
	Node *i1 =getFirstInputNode();
	Node *i2 =getSecondInputNode();
	Node *o =getOutputNode();
	// if(*in1==-1 || *in2==-1)
	// {
	// 	out->setNodeValue(-1)
	// }
	if(i1->getNodeValue()==0 && i2->getNodeValue()==0)
	{
		o->setNodeValue(1);
	}
	else
	{
		o->setNodeValue(0);
	}


}