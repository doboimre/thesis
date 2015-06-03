#include <iostream>

#include <stdexcept>

#include "Edge.h"
#include "EdgeBuilder.h"

EdgeBuilder::EdgeBuilder()
{
    this->id = "";

    this->val = Edge::DEFAULT_VALUE;
    this->isDirected = false;
}

EdgeBuilder& EdgeBuilder::addID(const std::string id)
{
    this->id = id;
    return *this;
}

EdgeBuilder& EdgeBuilder::addVal(const double val)
{
    this->val = val;
    return *this;
}

EdgeBuilder& EdgeBuilder::addIsDirected(const bool isDirected)
{
    this->isDirected = isDirected;
    return *this;
}

bool EdgeBuilder::isValid() const
{
    return (!this->id.empty());
}

Edge EdgeBuilder::build() const
{
    if (!this->isValid()) {
        throw std::invalid_argument("The given arguments are invalid! One or more fields are missing.");
    }

    return Edge(this->id, this->val, this->isDirected);
}
