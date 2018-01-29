#ifndef OR_H
#define OR_H
#include "gate.h"

class Or : public Gate
{
public:
	void computeOutput();
};


#include "or.cpp"
#endif