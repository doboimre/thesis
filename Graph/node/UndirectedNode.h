#ifndef UNDIRETEDNODE_H
#define UNDIRETEDNODE_H

#include <string>
#include <vector>

#include "./Node.h"
#include "../edge/Edge.h"

class UndirectedNode : public Node
{
    private:
        std::vector<Edge*> neighbouringEdges;
    public:
        UndirectedNode(const std::string nodeID);
        UndirectedNode(const std::string nodeID, const double val);

        std::vector<Edge*> getNeighbouringEdges() const;


        void addEdgeASide(Edge *edge);      // TODO : maybe find a better name?
        void addEdgeBSide(Edge *edge);      // TODO : maybe find a better name?
        // TODO : remove if not needed
        // void connectEdge(Edge *edge);
        //

        bool isDirected() const;

        ~UndirectedNode();
};

#endif // UNDIRETEDNODE_H
