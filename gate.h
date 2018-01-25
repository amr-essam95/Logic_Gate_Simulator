#ifndef GATE_H
#define GATE_H
#include "node.h"

class Gate
{
	Node *out;
	Node *in1;
	Node *in2;
public:
	Gate(Node *i1,Node *i2);
	Node* getFirstInput();
	Node* getSecondInput();
	Node* getOutput();
	void setFirstInput(Node* i);
	void setSecondInput(Node* i);
	void setOutput(Node* o);
	virtual void computeOutput() =0;
};

#endif