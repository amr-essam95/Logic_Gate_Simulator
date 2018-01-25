#ifndef NAND_H
#define NAND_H
#include "gate.h"
class Nand : public Gate
{
	public:
	void computeOutput();

};

#include "nand.cpp"
#endif