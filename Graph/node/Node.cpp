#include <string>

#include "Node.h"

const double Node::DEFAULT_VALUE = 0.0;

Node::Node(const std::string id)
{
    this->id = id;
    this->val = Node::DEFAULT_VALUE;
}

Node::Node(const std::string id, const double val)
{
    this->id = id;
    this->val = val;
}

std::string Node::getID() const
{
    return this->id;
}

double Node::getVal() const
{
    return this->val;
}

void Node::setVal(const double val)
{
    this->val = val;
}
