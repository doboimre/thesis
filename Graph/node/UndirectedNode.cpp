#include "./Node.h"

#include "UndirectedNode.h"

UndirectedNode::UndirectedNode(const std::string nodeID) : Node(nodeID)
{
}

UndirectedNode::UndirectedNode(const std::string nodeID, const double val) : Node(nodeID,val)
{
}

std::vector<Edge*> UndirectedNode::getNeighbouringEdges() const
{
    return this->neighbouringEdges;
}

void UndirectedNode::addEdgeASide(Edge *edge)
{
    edge->setSrcNode(this);
    this->neighbouringEdges.push_back(edge);
}

void UndirectedNode::addEdgeBSide(Edge *edge)
{
    edge->setDstNode(this);
    this->neighbouringEdges.push_back(edge);
}


// TODO : remove if not needed
//void UndirectedNode::connectEdge(Edge *edge)
//{
//    if (edge->getSrcID().compare(this->id) == 0) {
//        this->neighbouringEdges.push_back(edge);
//    }
//    else if (edge->getDstID().compare(this->id) == 0) {
//        this->neighbouringEdges.push_back(edge);
//    }
//}

bool UndirectedNode::isDirected() const
{
    return false;
}

UndirectedNode::~UndirectedNode()
{

}
