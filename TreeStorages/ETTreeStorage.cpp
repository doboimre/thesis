#include <stdexcept>

#include "ETTreeStorage.h"

#include "../Graph/Graph.h"
#include "../Graph/node/Node.h"
#include "../Graph/edge/Edge.h"
#include "../Graph/edge/EdgeBuilder.h"

void ETTreeStorage::init(Graph graph)
{

// TODO : revise commented code
//    if (graph.isDirected()) {
//        throw std::invalid_argument("Invalid argument. Cannot convert from directed graph.");
//    }

//    std::string etGraphID("ET_graph");
//    Graph etGraph(etGraphID, true);

//    std::vector<Node> nodesOfSourceGraph = graph.getNodes();
//    for (Node node : nodesOfSourceGraph) {
//        etGraph.addNode(node);
//    }

//    // add loops
//    std::vector<Node> nodesOfETGraph = etGraph.getNodes();
//    for (Node node : nodesOfETGraph) {
//        std::string nodeID = node.getID();
//        EdgeBuilder edgeBuilder;
//        Edge edge = edgeBuilder
//                            .addSrcID(nodeID)
//                            .addDstID(nodeID)
//                            .addIsDirected(true)
//                            .addID("edgeID")            // TODO : fix this & add proper edgeD
//                            .addVal(0)                  // TODO : figure out which value should be added
//                        .build();

//        etGraph.addEdge(edge);
//    }

//    // add all edges directed
//    std::vector<Edge> edgesOfSourceGraph = graph.getEdges();
//    for (Edge edge : edgesOfSourceGraph) {
//        EdgeBuilder fromSrcToDstEdgeBuilder;
//        Edge edgeFromSrcToDst = fromSrcToDstEdgeBuilder
//                                    .addSrcID(edge.getSrcID())
//                                    .addDstID(edge.getDstID())
//                                    .addIsDirected(true)
//                                    .addID("edgeID")        // TODO : fix this, add proper edgeID
//                                    .addVal(edge.getVal())  // TODO : look up in the paper if this is the proper valu
//                                .build();

//        EdgeBuilder fromDstToSrcEdgeBuilder;
//        Edge edgeFromDstToSrc = fromDstToSrcEdgeBuilder
//                                    .addSrcID(edge.getDstID())
//                                    .addDstID(edge.getSrcID())
//                                    .addIsDirected(true)
//                                    .addID("edgeID")        // TODO : fix this : add proper edge ID
//                                    .addVal(edge.getVal())  // TODO : look up in paper if this is the proper value
//                                .build();

//        etGraph.addEdge(edgeFromSrcToDst);
//        etGraph.addEdge(edgeFromDstToSrc);

//    }

    // TODO : find Euler tour



}
