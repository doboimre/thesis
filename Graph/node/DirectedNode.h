#ifndef DIRECTEDNODE_H
#define DIRECTEDNODE_H

#include <string>
#include <vector>

#include "./Node.h"
#include "../edge/Edge.h"

class DirectedNode : public Node
{
    private:
        std::vector<Edge*> inEdges;
        std::vector<Edge*> outEdges;

    public:
        DirectedNode(const std::string nodeID);
        DirectedNode(const std::string nodeID, const double val);

        std::vector<Edge*> getInEdges() const;
        std::vector<Edge*> getOutEdges() const;

        void addInEdge(Edge *edge);
        void addOutEdge(Edge *edge);

        // TODO : remove if not needed
        // void connectEdge(Edge *edge);
        //

        bool isDirected() const;

        ~DirectedNode();
};

#endif // DIRECTEDNODE_H
