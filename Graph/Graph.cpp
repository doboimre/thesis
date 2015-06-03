#include <iostream>     // remove!

#include <string>
#include <vector>
#include <stdexcept>
#include <cmath>

#include "Graph.h"
#include "./node/Node.h"
#include "./node/DirectedNode.h"

const double Graph::EPSILON = 0.00001;
const std::string Graph::DIR_NOT_MATCH_ERROR_MSG("The direction of the component and the graph does not match (directd/undirected mismatch).");

Graph::Graph(const std::string graphID, const bool isDirected)
{
    this->id = graphID;
    this->isGraphDirected = isDirected;
}

std::string Graph::getID() const
{
    return this->id;
}

bool Graph::isDirected() const
{
    return this->isGraphDirected;
}

void Graph::addNode(Node *node)
{
    // TODO : fix add node

    // check if node is already in the graph: if not, add it, otherwise ignore
//    try {
//        Node *nodeInGraph = this->getNode(node->getID());

//        // TODO: maybe through exception if node is already in the graph?
//    }
//    catch (std::invalid_argument &ex) {
//        // this->nodes.push_back(node);     // TODO : fix this
//    }
}

Node *Graph::getNode(const std::string id) const
{
    // TODO fix this

//    for (Node *node : this->nodes) {
//        if (node->getID().compare(id) == 0) {
//            return node;
//        }
//    }

//    throw std::invalid_argument("There is no node in the graph with the given identifer.");
}

std::vector<Node *> Graph::getNodes() const
{
    return this->nodes;
}

void Graph::addEdge(const Edge edge)
{
    // TODO : fix this! Refactor how add edge should be implemented

//    // check if the direction of the grap & the edge matches
//    if (edge.isDirected() != this->isGraphDirected) {
//        throw std::invalid_argument(DIR_NOT_MATCH_ERROR_MSG);
//    }

//    // check if edge is already in the graph: if not, add it, otherwise ignore
//    try {
//        Edge edgeInGraph = this->getEdge(edge.getID());

//        // TODO : maybe through exception if edge is already in the node?
//    }
//    catch (std::invalid_argument &ex) {
//        this->edges.push_back(edge);

//        DirectedNode src(edge.getSrcID());      // TODO : fix this : check out which kind of node should be created? (dir/undir)
//        DirectedNode dst(edge.getDstID());      // TODO : fix this : check out which kind of node should be created? (dir/undir)

//        this->addNode(&src);
//        this->addNode(&dst);
//    }
}

Edge Graph::getEdge(const std::string id) const
{
    for (Edge edge : this->edges) {
        if ((edge.getID().compare(id)) == 0) {
            return edge;
        }
    }

    throw std::invalid_argument("There is no edge in the graph with the given identifer.");
}

std::vector<Edge> Graph::getEdges() const
{
    return this->edges;
}
