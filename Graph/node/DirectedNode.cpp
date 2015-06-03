#include "./Node.h"
#include "DirectedNode.h"

DirectedNode::DirectedNode(const std::string nodeID) : Node(nodeID)
{
}

DirectedNode::DirectedNode(const std::string nodeID, const double val) : Node(nodeID, val)
{
}

std::vector<Edge*> DirectedNode::getInEdges() const
{
    return this->inEdges;
}

std::vector<Edge*> DirectedNode::getOutEdges() const
{
    return this->outEdges;
}

void DirectedNode::addInEdge(Edge *edge)
{
    edge->setDstNode(this);
    this->inEdges.push_back(edge);
}

void DirectedNode::addOutEdge(Edge *edge)
{
    edge->setSrcNode(this);
    this->outEdges.push_back(edge);
}

// TODO : remove if not needed
//void DirectedNode::connectEdge(Edge *edge)
//{
//    if (edge->getSrcID().compare(this->id) == 0) {
//        this->outEdges.push_back(edge);
//    }
//    if (edge->getDstID().compare(this->id) == 0) {
//        this->inEdges.push_back(edge);
//    }
//}
//

bool DirectedNode::isDirected() const
{
    return true;
}

DirectedNode::~DirectedNode()
{

}
