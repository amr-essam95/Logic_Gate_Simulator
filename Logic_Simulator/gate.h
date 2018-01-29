#ifndef GATE_H
#define GATE_H
#include "node.h"

class Gate
{
	Node *out;
	Node *in1;
	Node *in2;
public:
	Gate();
	Gate(Node *i1,Node *i2);
	Node* getFirstInputNode();
	Node* getSecondInputNode();
	Node* getOutputNode();
	int getFirstInput();
	int getSecondInput();
	int getOutput();
	void setFirstInput(Node* i);
	void setFirstInput(int i);
	void setSecondInput(Node* i);
	void setSecondInput(int i);
	void setOutput(Node* o);
	virtual void computeOutput() =0;
};

#include "gate.cpp"
#endif