#include "BinaryTreeNode.h"

template <class T>
BinaryTreeNode<T>::BinaryTreeNode(const T val)
{
    this->val = val;

    this->leftChild = nullptr;
    this->rightChild = nullptr;
}

template <class T>
void BinaryTreeNode<T>::setVal(const T val)
{
    this->val = val;
}

template <class T>
T BinaryTreeNode<T>::getVal() const
{
    return this->val;
}

template <class T>
void BinaryTreeNode<T>::setLeftChild(BinaryTreeNode<T> *leftChild)
{
    this->leftChild = leftChild;
}

template <class T>
BinaryTreeNode<T> *BinaryTreeNode<T>::getLeftChild() const
{
    return this->leftChild;
}

template <class T>
void BinaryTreeNode<T>::setRightChild(BinaryTreeNode<T> *rightChild)
{
    this->rightChild = rightChild;
}

template <class T>
BinaryTreeNode<T> *BinaryTreeNode<T>::getRightChild() const
{
    return this->rightChild;
}

template class BinaryTreeNode<int>;
