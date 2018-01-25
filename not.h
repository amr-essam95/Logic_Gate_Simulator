#ifndef NOT_H
#define NOT_H
#include "gate.h"
class Not: public Gate
{
public:
	void computeOutput();
};

#include "not.cpp"
#endif