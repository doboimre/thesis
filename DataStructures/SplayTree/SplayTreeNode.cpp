#include "SplayTreeNode.h"

template <class T>
SplayTreeNode<T>::SplayTreeNode(T val)
{
    this->val = val;

    this->parent = nullptr;
    this->leftChild = nullptr;
    this->rightChild = nullptr;
}

template <class T>
void SplayTreeNode<T>::setVal(T val)
{
    this->val = val;
}

template <class T>
T SplayTreeNode<T>::getVal()
{
    return this->val;
}

template <class T>
SplayTreeNode<T> *SplayTreeNode<T>::getLeftChild() const
{
    return this->leftChild;
}

template <class T>
void SplayTreeNode<T>::setLeftChild(SplayTreeNode<T>* leftChild)        // TODO : find a name which indicates that the parent of leftchild is set
{
    this->leftChild = leftChild;
    if (leftChild != nullptr) {
        leftChild->setParent(this);
    }
}

template <class T>
SplayTreeNode<T>* SplayTreeNode<T>::getRightChild() const
{
    return this->rightChild;
}

template <class T>
void SplayTreeNode<T>::setRightChild(SplayTreeNode<T> *rightChild)
{
    this->rightChild = rightChild;
    if (rightChild != nullptr) {
        rightChild->setParent(this);
    }
}

template <class T>
SplayTreeNode<T>* SplayTreeNode<T>::getParent() const
{
    return this->parent;
}

template <class T>
void SplayTreeNode<T>::setParent(SplayTreeNode<T> *parent)
{
    this->parent = parent;
}

template class SplayTreeNode<int>;
