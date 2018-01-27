#ifndef SIMULATOR_H
#define SIMULATOR_H
#include <vector>
#include "gate.h"
#include "node.h"

class Simulator
{
	std::vector<Gate> gates;
	std::vector<Node> input_nodes;
	std::vector<Node> output_nodes;  
public:
	Simulator();
	void fillInputs();
	void sortGates();
	void fillOutputs();
	void computeFinalOutput();
	void setInputValues();

};

#include "simulator.cpp"
#endif