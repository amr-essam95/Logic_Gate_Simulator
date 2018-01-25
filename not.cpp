#include "not.h"

void Not::computeOutput()
{
	Node *i1 =getFirstInputNode();
	Node *o =getOutputNode();

	if(i1->getNodeValue()==1 )
	{
		o->setNodeValue(0);
	}
	else
	{
		o->setNodeValue(1);
	}


}