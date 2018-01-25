#include "node.h"

Node::Node()
{
	nodeValue= -1;
}

void setNodeValue(int val)
{
	nodeValue = val;
}

int getNodeValue()
{
	return nodeValue;
}

int getNodeId()
{
	return nodeId;
}
void setNodeId(int val)
{
	nodeId = val;
}