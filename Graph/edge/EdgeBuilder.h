#ifndef EDGEBUILDER_H
#define EDGEBUILDER_H

#include <stdexcept>
#include <string>

#include "./Edge.h"

class EdgeBuilder           // TODO : consider if it was possible to make it with a nested class in Edge
{
    private:
        std::string id;
        double val;
        bool isDirected;

        bool isValid() const;
    public:
        EdgeBuilder();

        EdgeBuilder& addID(const std::string addID);
        EdgeBuilder& addVal(const double addVal);
        EdgeBuilder& addIsDirected(const bool isDirected);

        Edge build() const;
};

#endif // EDGEBUILDER_H
