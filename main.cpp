#include "or.h"
#include "not.h"
#include "xor.h"
#include "and.h"
#include "xnor.h"
#include "nand.h"
#include "node.h"
#include "gate.h"
#include <iostream>

using namespace std;

int main()
{
	Node in1;
	Node in2;
	Node out;
	Not y;
	y.setFirstInput(&in1);
	// y.setSecondInput(&in2);
	y.setOutput(&out);
	y.setFirstInput(1);
	// y.setSecondInput(1);
	y.computeOutput();
	cout << y.getOutput()<<endl;


	return 0;
}