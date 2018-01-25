#ifndef NOT_H
#define NOT_H
#include "gate.h"
class Nand : public Gate
{
	void computeOutput();
};

#include "not.cpp"
#endif