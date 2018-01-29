#ifndef AND_H
#define AND_H
#include "gate.h"
class And : public Gate
{
public:
	void computeOutput();
};

#include "and.cpp"
#endif