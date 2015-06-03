#include "Edge.h"

const double Edge::DEFAULT_VALUE = 0.0;

Edge::Edge(const std::string id, const double val, const bool isDirected)
{
    this->id = id;
    this->val = val;
    this->isEdgeDirected = isDirected;

    this->srcNode = nullptr;
    this->dstNode = nullptr;
}

std::string Edge::getID() const
{
    return this->id;
}

double Edge::getVal() const
{
    return this->val;
}

void Edge::setVal(const double val)
{
    this->val = val;
}

Node *Edge::getSrcNode() const
{
    return this->srcNode;
}

Node* Edge::getDstNode() const
{
    return this->dstNode;
}

void Edge::setSrcNode(Node *node)
{
    this->srcNode = node;
}

void Edge::setDstNode(Node *node)
{
    this->dstNode = node;
}

bool Edge::isDirected() const
{
    return this->isEdgeDirected;
}
