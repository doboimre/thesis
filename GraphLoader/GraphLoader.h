#ifndef GRAPHLOADER_H
#define GRAPHLOADER_H

#include <vector>
#include <string>

#include "../Graph/Graph.h"
#include "../Graph/edge/Edge.h"
#include "../Graph/node/Node.h"

class GraphLoader
{
    public:
        static const std::string WRONG_NUMBER_OF_ARGUMENTS_ERROR_MSG;
        static const std::string INVALID_VALUE_ERROR_MSG;
        static const std::string CANT_OPEN_FILE_ERROR_MSG;

    private:
        // store constants
        static const std::string COMMENT_LINE_INIT;
        static const std::string FIELD_LINE_INIT;
        static const std::string GRAPH_DATA_FIELDID;
        static const std::string EDGES_DATA_FIELDID;
        static const std::string NODES_DATA_FIELDID;

        static const char FIELD_DELIMITER;

        // constants related to the graph fields
        static const int GRAPH_ID_FIELD_NUM;
        static const int GRAPH_DIRECTED_FIELD_NUM;
        static const int TOTAL_GRAPH_FIELD_NUM;
        static const std::string GRAPH_DIRECTED_VAL;
        static const std::string GRAPH_UNDIRECTED_VAL;

        // constants related to the edge fields
        static const int EDGE_ID_FIELD_NUM;
        static const int EDGE_SRC_ID_FIELD_NUM;
        static const int EDGE_DST_ID_FIELD_NUM;
        static const int EDGE_VAL_FIELD_NUM;
        static const int TOTAL_EDGE_FIELD_NUM;

        // constants related to the node fields
        static const int NODE_ID_FIELD_NUM;
        static const int NODE_VAL_FIELD_NUM;
        static const int TOTAL_NODE_FIELD_NUM;

        // temporary storage of data related to the graph
        std::string graphID;
        bool isGraphDirected;

        // store the number of exceptions of the last reading
        int numberOfExceptions;

        // store graph components
        std::vector<Edge> edges;
        std::vector<Node*> nodes;

        // line type
        enum class LineType {GRAPH_LINE, NODE_LINE, EDGE_LINE, UNKNOWN};
        LineType lineType;

        // process lines
        void processFieldLine(const std::string line);
        void processGraphDataLine(const std::string line);
        void processEdgeDataLine(const std::string line);
        void processNodeDataLine(const std::string line);

        void processLine(const std::string line);

    public:
        static std::vector<std::string> split(const std::string str, const char delimiter);
        static std::string trim(const std::string str);

        Graph readGraphFromFile(const std::string pathToGraph);
        int getNumberOfExceptions();
};

#endif // GRAPHLOADER_H
