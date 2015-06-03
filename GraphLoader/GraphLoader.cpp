#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <stdexcept>

#include "GraphLoader.h"
#include "../Graph/node/DirectedNode.h"
#include "../Graph/edge/EdgeBuilder.h"
#include "../Graph/edge/Edge.h"

const std::string GraphLoader::WRONG_NUMBER_OF_ARGUMENTS_ERROR_MSG("There are missing arguments.");
const std::string GraphLoader::INVALID_VALUE_ERROR_MSG("The given value is invalid.");
const std::string GraphLoader::CANT_OPEN_FILE_ERROR_MSG("Cannot open the file with the given name.");

const std::string GraphLoader::COMMENT_LINE_INIT("#");
const std::string GraphLoader::FIELD_LINE_INIT("FIELD:");
const std::string GraphLoader::GRAPH_DATA_FIELDID("<GRAPH>");
const std::string GraphLoader::EDGES_DATA_FIELDID("<EDGE>");
const std::string GraphLoader::NODES_DATA_FIELDID("<NODE>");

const char GraphLoader::FIELD_DELIMITER = ',';

// constants for the graph
const int GraphLoader::GRAPH_ID_FIELD_NUM = 0;
const int GraphLoader::GRAPH_DIRECTED_FIELD_NUM = 1;
const int GraphLoader::TOTAL_GRAPH_FIELD_NUM = 2;
const std::string GraphLoader::GRAPH_DIRECTED_VAL("directed");
const std::string GraphLoader::GRAPH_UNDIRECTED_VAL("undirected");

// constants for the edge
const int GraphLoader::EDGE_ID_FIELD_NUM = 0;
const int GraphLoader::EDGE_SRC_ID_FIELD_NUM = 1;
const int GraphLoader::EDGE_DST_ID_FIELD_NUM = 2;
const int GraphLoader::EDGE_VAL_FIELD_NUM = 3;
const int GraphLoader::TOTAL_EDGE_FIELD_NUM = 4;

// constants for the node
const int GraphLoader::NODE_ID_FIELD_NUM = 0;
const int GraphLoader::NODE_VAL_FIELD_NUM = 1;
const int GraphLoader::TOTAL_NODE_FIELD_NUM = 2;

std::vector<std::string> GraphLoader::split(const std::string str, const char delimiter)
{
    std::vector<std::string> items;

    std::stringstream ss(str);
    std::string curItem;
    while (std::getline(ss, curItem, delimiter)) {
        items.push_back(curItem);
    }

    return items;
}

std::string GraphLoader::trim(const std::string str)
{
    std::string res = str;
    size_t lp = res.find_first_not_of(" \t");
    res.erase(0, lp);

    size_t rp = res.find_last_not_of(" \t");
    if (rp != std::string::npos) {
        res.erase(rp + 1);
    }

    return res;
}

void GraphLoader::processFieldLine(const std::string line)
{
    std::string fieldName(line.substr(line.find_first_of(GRAPH_DATA_FIELDID), line.length()));

    if (fieldName.compare(GRAPH_DATA_FIELDID) == 0) {
        this->lineType = LineType::GRAPH_LINE;
    }
    else if (fieldName.compare(EDGES_DATA_FIELDID) == 0) {
        this->lineType = LineType::EDGE_LINE;
    }
    else if (fieldName.compare(NODES_DATA_FIELDID) == 0) {
        this->lineType = LineType::NODE_LINE;
    }
    else {
        this->lineType = LineType::UNKNOWN;
    }
}

void GraphLoader::processGraphDataLine(const std::string line)
{
    std::vector<std::string> graphFields = GraphLoader::split(line, FIELD_DELIMITER);

    if (graphFields.size() < TOTAL_GRAPH_FIELD_NUM) {
        throw std::invalid_argument(WRONG_NUMBER_OF_ARGUMENTS_ERROR_MSG);
    }

    for (std::string &fieldVal : graphFields) {
        fieldVal = GraphLoader::trim(fieldVal);
    }

    this->graphID = graphFields[GRAPH_ID_FIELD_NUM];

    if (graphFields[GRAPH_DIRECTED_FIELD_NUM].compare(GRAPH_DIRECTED_VAL) == 0) {
        this->isGraphDirected = true;
    }
    else if (graphFields[GRAPH_DIRECTED_FIELD_NUM].compare(GRAPH_UNDIRECTED_VAL) == 0) {
        this->isGraphDirected = false;
    }
    else {
        throw std::invalid_argument(INVALID_VALUE_ERROR_MSG);
    }
}

void GraphLoader::processEdgeDataLine(const std::string line)
{
    // TODO : revise this code

//    std::vector<std::string> edgeFields = GraphLoader::split(line, FIELD_DELIMITER);

//    if (edgeFields.size() < TOTAL_EDGE_FIELD_NUM) {
//        throw std::invalid_argument(WRONG_NUMBER_OF_ARGUMENTS_ERROR_MSG);
//    }

//    for (std::string &fieldVal : edgeFields) {
//        fieldVal = GraphLoader::trim(fieldVal);
//    }

//    std::string edgeID = edgeFields[EDGE_ID_FIELD_NUM];
//    std::string edgeSrcID = edgeFields[EDGE_SRC_ID_FIELD_NUM];
//    std::string edgeDstID = edgeFields[EDGE_DST_ID_FIELD_NUM];
//    double edgeVal = std::stod(edgeFields[EDGE_VAL_FIELD_NUM]);

//    EdgeBuilder edgeBuilder;
//    Edge edge = edgeBuilder
//                    .addID(edgeID)
//                    .addSrcID(edgeSrcID)
//                    .addDstID(edgeDstID)
//                    .addVal(edgeVal)
//                    .addIsDirected(this->isGraphDirected)
//                .build();

//    this->edges.push_back(edge);
}

void GraphLoader::processNodeDataLine(const std::string line)
{
    std::vector<std::string> nodeFields = GraphLoader::split(line, FIELD_DELIMITER);
    if (nodeFields.size() < TOTAL_NODE_FIELD_NUM) {
        throw std::invalid_argument(WRONG_NUMBER_OF_ARGUMENTS_ERROR_MSG);
    }

    for (std::string &nodeVal : nodeFields) {
        nodeVal = GraphLoader::trim(nodeVal);
    }

    std::string nodeID = nodeFields[NODE_ID_FIELD_NUM];
    double nodeVal = std::stod(nodeFields[NODE_VAL_FIELD_NUM]);

    DirectedNode *node = new DirectedNode(nodeID, nodeVal);     // TODO : fix this : decide whether it should be directed or undirected, and also consider construction

    this->nodes.push_back(node);
}

void GraphLoader::processLine(const std::string line)
{
    if (!line.empty() && !(line.find(COMMENT_LINE_INIT) == 0)) {    // skip empty lines and comments

        if (line.find(FIELD_LINE_INIT) == 0) {
            processFieldLine(line);
        }
        else {
            switch (this->lineType) {
            case LineType::GRAPH_LINE : {
                    processGraphDataLine(line);
                break;
            }
            case LineType::EDGE_LINE : {
                    processEdgeDataLine(line);
                break;
            }
            case LineType::NODE_LINE : {
                    processNodeDataLine(line);
                break;
            }
            default:
                break;
            }
        }

    }
}

Graph GraphLoader::readGraphFromFile(const std::string pathToGraph)
{
    this->numberOfExceptions = 0;

    std::ifstream inputFile(pathToGraph);
    if (!inputFile.is_open()) {
        throw std::ios_base::failure(CANT_OPEN_FILE_ERROR_MSG);
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        try {
            processLine(line);
        }
        catch (std::exception &ex) {
            this->numberOfExceptions++;
        }
    }

    inputFile.close();

    // throw exception if graph ID is empty
    if (this->graphID.empty()) {
        throw std::invalid_argument("The identifier of the graph cannot be empty. The graph is not loaded.");
    }

    Graph graph(this->graphID, this->isGraphDirected);

    // add nodes
    for (Node *node : this->nodes) {
        graph.addNode(node);
    }

    // add edges
    for (Edge edge : this->edges) {
        graph.addEdge(edge);
    }

    return graph;
}

int GraphLoader::getNumberOfExceptions()
{
    return this->numberOfExceptions;
}
