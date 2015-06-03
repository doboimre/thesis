#ifndef EDGE_H
#define EDGE_H

#include <string>

#include "../node/Node.h"

class Edge
{
    friend class EdgeBuilder;

    public:
        static const double DEFAULT_VALUE;

    private:
        std::string id;
        double val;
        bool isEdgeDirected;

        Node *srcNode;
        Node *dstNode;

        Edge(const std::string id, const double val, const bool isEdgeDirected);
    public:

        std::string getID() const;

        double getVal() const;
        void setVal(const double val);

        bool isDirected() const;

        Node *getSrcNode() const;
        Node *getDstNode() const;

        void setSrcNode(Node *node);        // TODO : make sure that it can pnly be called by the node!
        void setDstNode(Node *node);        // TODO : make sure that it can pnly be called by the node!
};

#endif // EDGE_H
