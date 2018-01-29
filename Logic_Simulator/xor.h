#ifndef XOR_H
#define XOR_H
#include "gate.h"

class Xor : public Gate
{
public:
	void computeOutput();
};


#include "xor.cpp"
#endif