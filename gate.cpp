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
Node* Gate::getFirstInput()
{
	return in1;
}
Node* Gate::getSecondInput()
{
	return in2;
}
Node* Gate::getOutput()
{
	return out;
}
void Gate::setFirstInput(Node* i)
{
	in1 = i;
}
void Gate::setSecondInput(Node* i)
{
	in2 = i;
}
void Gate::setOutput(Node* o)
{
	out = o;
}