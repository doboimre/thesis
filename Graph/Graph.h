#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <string>

#include "./node/Node.h"
#include "./edge/Edge.h"

class Graph
{
    private:
        static const double EPSILON;
        static const std::string DIR_NOT_MATCH_ERROR_MSG;

        std::string id;
        bool isGraphDirected;

        std::vector<Node*> nodes;
        std::vector<Edge> edges;
    public:

        Graph(const std::string graphID, const bool isGraphDirected = false);

        std::string getID() const;
        bool isDirected() const;

        void addNode(Node *node);               // TODO : consider how a node should be added to the graph
        Node* getNode(const std::string id) const;
        std::vector<Node*> getNodes() const;

        void addEdge(const Edge edge);          // TODO : consider how an edge should be added to the graph
        Edge getEdge(const std::string id) const;
        std::vector<Edge> getEdges() const;
};

#endif // GRAPH_H
