#include "gate.h"

Gate::Gate()
{
	;
}
Gate::Gate(Node *i1,Node *i2)
{
	in1 = i1;
	in2 = i2;
}
Node* Gate::getFirstInputNode()
{
	return in1;
}
Node* Gate::getSecondInputNode()
{
	return in2;
}
Node* Gate::getOutputNode()
{
	return out;
}
int Gate::getFirstInput()
{
	return in1->getNodeValue();
}
int Gate::getSecondInput()
{
	return in2->getNodeValue();
}
int Gate::getOutput()
{
	return out->getNodeValue();
}
void Gate::setFirstInput(Node* i)
{
	in1 = i;
}
void Gate::setFirstInput(int i)
{
	in1->setNodeValue(i);
}
void Gate::setSecondInput(Node* i)
{
	in2 = i;
}
void Gate::setSecondInput(int i)
{
	in2->setNodeValue(i);
}
void Gate::setOutput(Node* o)
{
	out = o;
}