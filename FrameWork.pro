TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
        Graph/Graph.cpp \
        Graph/edge/Edge.cpp \
        Graph/node/Node.cpp \
        Graph/edge/EdgeBuilder.cpp \
        GraphLoader/GraphLoader.cpp \
        DataStructures/SplayTree/SplayTree.cpp \
        DataStructures/SplayTree/SplayTreeNode.cpp \
    DataStructures/BinaryTree/BinaryTreeNode.cpp \
    DataStructures/BinaryTree/BinaryTree.cpp \
    CommandExecutors/CommandExecutor.cpp \
    CommandExecutors/Command.cpp \
    TreeStorages/ETTreeStorage.cpp \
    Graph/node/DirectedNode.cpp \
    Graph/node/UndirectedNode.cpp

HEADERS += \
        Graph/Graph.h \
        Graph/edge/Edge.h \
        Graph/node/Node.h \
        Graph/edge/EdgeBuilder.h \
        GraphLoader/GraphLoader.h \
        DataStructures/SplayTree/SplayTree.h \
        DataStructures/SplayTree/SplayTreeNode.h \
    DataStructures/BinaryTree/BinaryTreeNode.h \
    DataStructures/BinaryTree/BinaryTree.h \
    CommandExecutors/CommandExecutor.h \
    CommandExecutors/Command.h \
    TreeStorages/ETTreeStorage.h \
    Graph/node/DirectedNode.h \
    Graph/node/UndirectedNode.h
