#ifndef NODE_H
#define NODE_H

#include <string>
#include <vector>

class Node
{
    public:
        static const double DEFAULT_VALUE;

    protected:
        std::string id;
        double val;
    public:
        Node(const std::string id);
        Node(const std::string id, const double val);

        std::string getID() const;

        double getVal() const;
        void setVal(const double val);

        // TODO : remove if not needed anymore
        // virtual void connectEdge(Edge *edge) = 0;
        //

        virtual bool isDirected() const = 0;

        virtual ~Node() {}
};

#endif // NODE_H
