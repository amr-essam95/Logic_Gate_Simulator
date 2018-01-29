#include "node.h"

Node::Node()
{
	nodeValue= -1;
}

void Node::setNodeValue(int val)
{
	nodeValue = val;
}

int Node::getNodeValue()
{
	return nodeValue;
}

int Node::getNodeId()
{
	return nodeId;
}
void Node::setNodeId(int val)
{
	nodeId = val;
}