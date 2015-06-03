#ifndef BINARYTREENODE_H
#define BINARYTREENODE_H

template <class T>
class BinaryTreeNode
{
    private:
        T val;

        BinaryTreeNode<T> *leftChild;
        BinaryTreeNode<T> *rightChild;
    public:
        BinaryTreeNode(const T val);

        void setVal(const T val);
        T getVal() const;

        void setLeftChild(BinaryTreeNode<T> *leftChild);
        BinaryTreeNode<T> *getLeftChild() const;

        void setRightChild(BinaryTreeNode<T> *rightChild);
        BinaryTreeNode<T> *getRightChild() const;
};

#endif // BINARYTREENODE_H
