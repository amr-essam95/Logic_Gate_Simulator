#ifndef NODE_H
#define NODE_H

class Node
{
	private:
		int nodeValue;
		int nodeId;
	public:
		Node();
		int getNodeValue();
		void setNodeValue(int val);
		int getNodeId();
		void setNodeId(int val);

};

#include "node.cpp"
#endif
