#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "./BinaryTreeNode.h"

template <class T>
class BinaryTree
{
    private:
        BinaryTreeNode<T> *root;
    public:
        BinaryTree();

        void insertVal(const T val);
        BinaryTreeNode<T> *findVal(const T val) const;
        void removeVal(const T val);


    // TODO : add destructor!
};

#endif // BINARYTREE_H
