#ifndef XNOR_H
#define XNOR_H
#include "gate.h"

class Xnor : public Gate
{
public:
	void computeOutput();
};


#include "xnor.cpp"
#endif