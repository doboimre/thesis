#ifndef SPLAYTREE_H
#define SPLAYTREE_H

#include <string>

#include "SplayTreeNode.h"

enum class SplayCase {ROOT, LEFT_CHILD_OF_ROOT, RIGHT_CHILD_OF_ROOT, LEFT_CHILD_OF_LEFT_CHILD,
                     RIGHT_CHILD_OF_RIGHT_CHILD, LEFT_CHILD_OF_RIGHT_CHILD, RIGHT_CHILD_OF_LEFT_CHILD};

template <class T>
class SplayTree                 // TODO : put the methods in the right order (also in the cpp file)
{
    private:
        static const std::string RECEIVED_NULLPTR_MSG;
        static const std::string ELEMENT_NOT_IN_GRAPH_MSG;
        static const std::string GRAPH_IS_EMPTY_MSG;

        SplayTreeNode<T> *root;

        SplayTreeNode<T> *findRecursive(SplayTreeNode<T> *x, const T &val) const;
        void insertAndSplayRecursive(SplayTreeNode<T> *x, T val);

        bool isNodeRoot(SplayTreeNode<T> *node) const;
        bool isNodeLeftChildOfRoot(SplayTreeNode<T> *node) const;
        bool isNodeRightChildOfRoot(SplayTreeNode<T> *node) const;
        bool isNodeRightChildOfRightChild(SplayTreeNode<T> *node) const;
        bool isNodeLeftChildOfRightChild(SplayTreeNode<T> *node) const;
        bool isNodeRightChildOfLeftChild(SplayTreeNode<T> *node) const;
        bool isNodeLeftChildOfLeftChild(SplayTreeNode<T> *node) const;

        bool isNodeChildOfRoot(SplayTreeNode<T> *node) const;
        bool isNodeLeftChildOfParent(SplayTreeNode<T> *parent, SplayTreeNode<T> *child) const;
        bool isNodeRightChildOfParent(SplayTreeNode<T> *parent, SplayTreeNode<T> *child) const;
        void throwExceptionIfNodePtrIsNull(SplayTreeNode<T> *node) const;

    public:

        SplayCase getSplayCase(SplayTreeNode<T> *node) const;

        void rotateLeft(SplayTreeNode<T> *node);
        void rotateRight(SplayTreeNode<T> *node);

        void splay(SplayTreeNode<T> *x);

        void printInOrderRecursive(SplayTreeNode<T> *node) const;      // TODO : should be private in the end

        SplayTree();

        void printInOrder() const;

        void findAndSplay(const T &val);
        void insertAndSplay(const T &val);

        T getRootVal();

        // TODO : add test cases

        // TODO : add delete


        // TODO : add destructor

};

#endif // SPLAYTREE_H
