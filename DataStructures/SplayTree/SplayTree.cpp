#include <iostream>
#include <string>
#include <stdexcept>

#include "SplayTree.h"

template <class T>
const std::string SplayTree<T>::RECEIVED_NULLPTR_MSG("Error! Received unexpected null pointer.");
template <class T>
const std::string SplayTree<T>::ELEMENT_NOT_IN_GRAPH_MSG("The element is not found in the graph.");
template <class T>
const std::string SplayTree<T>::GRAPH_IS_EMPTY_MSG("The graph is empty.");

template <class T>
SplayTree<T>::SplayTree()
{
    this->root = nullptr;
}

template <class T>
void SplayTree<T>::printInOrderRecursive(SplayTreeNode<T> *node) const
{
    if (node != nullptr) {
        printInOrderRecursive(node->getLeftChild());

        std::cout << node->getVal() << " ";

        printInOrderRecursive(node->getRightChild());
    }
}


template <class T>
void SplayTree<T>::printInOrder() const
{
    printInOrderRecursive(root);
}

template <class T>
SplayCase SplayTree<T>::getSplayCase(SplayTreeNode<T> *node) const
{
    SplayCase splayCase;

    if (isNodeRoot(node)) {
        splayCase = SplayCase::ROOT;
    }
    else if (isNodeLeftChildOfRoot(node)) {
        splayCase = SplayCase::LEFT_CHILD_OF_ROOT;
    }
    else if (isNodeRightChildOfRoot(node)) {
        splayCase = SplayCase::RIGHT_CHILD_OF_ROOT;
    }
    else {
        if (isNodeRightChildOfLeftChild(node)) {
            splayCase = SplayCase::RIGHT_CHILD_OF_LEFT_CHILD;
        }
        else if (isNodeLeftChildOfRightChild(node)) {
            splayCase = SplayCase::LEFT_CHILD_OF_RIGHT_CHILD;
        }
        else if (isNodeLeftChildOfLeftChild(node)) {
            splayCase = SplayCase::LEFT_CHILD_OF_LEFT_CHILD;
        }
        else if (isNodeRightChildOfRightChild(node)) {
            splayCase = SplayCase::RIGHT_CHILD_OF_RIGHT_CHILD;
        }
    }

    return splayCase;
}

// TODO : check if it ever should throe exception
template <class T>
void SplayTree<T>::rotateLeft(SplayTreeNode<T> *node)
{
    throwExceptionIfNodePtrIsNull(node);

    if (!isNodeRoot(node)) {
        SplayTreeNode<T> *parent = node->getParent();
        SplayTreeNode<T> *grandParent = parent->getParent();
        SplayTreeNode<T> *leftChildOfNode = node->getLeftChild();

        // update the child of g from p to x
        if (grandParent != nullptr) {
            if (isNodeLeftChildOfParent(grandParent, parent)) {
                grandParent->setLeftChild(node);
            }
            else {
                grandParent->setRightChild(node);
            }
        }
        else {
            node->setParent(nullptr);
        }

        node->setLeftChild(parent);
        parent->setRightChild(leftChildOfNode);
    }
}

template <class T>
void SplayTree<T>::rotateRight(SplayTreeNode<T> *node)
{
    throwExceptionIfNodePtrIsNull(node);

    if (!isNodeRoot(node)) {
        SplayTreeNode<T> *parent = node->getParent();
        SplayTreeNode<T> *grandParent = parent->getParent();
        SplayTreeNode<T> *rightChildOfNode = node->getRightChild();

        if (grandParent != nullptr) {
            if (isNodeLeftChildOfParent(grandParent, parent)) {
                grandParent->setLeftChild(node);
            }
            else {
                grandParent->setRightChild(node);
            }
        }
        else {
            node->setParent(nullptr);
        }

        node->setRightChild(parent);
        parent->setLeftChild(rightChildOfNode);
    }
}

template <class T>
void SplayTree<T>::splay(SplayTreeNode<T> *x)
{
    if (x != nullptr) {
        SplayCase splayCase = getSplayCase(x);

        while (splayCase != SplayCase::ROOT) {
            switch (splayCase) {
                case SplayCase::ROOT : {
                    //
                }
                break;
                case SplayCase::LEFT_CHILD_OF_ROOT : {
                    rotateRight(x);
                }
                break;
                case SplayCase::RIGHT_CHILD_OF_ROOT : {
                    rotateLeft(x);
                }
                break;
                case SplayCase::LEFT_CHILD_OF_RIGHT_CHILD : {
                    rotateRight(x);
                    rotateLeft(x);
                }
                break;
                case SplayCase::RIGHT_CHILD_OF_LEFT_CHILD : {
                    rotateLeft(x);
                    rotateRight(x);
                }
                break;
                case SplayCase::LEFT_CHILD_OF_LEFT_CHILD : {
                    rotateRight(x->getParent());
                    rotateRight(x);
                }
                break;
                case SplayCase::RIGHT_CHILD_OF_RIGHT_CHILD : {
                    rotateLeft(x->getParent());
                    rotateLeft(x);
                }
                break;
                default:
                break;
            }

            splayCase = getSplayCase(x);
        }

        this->root = x;
    }
}

template <class T>
SplayTreeNode<T>* SplayTree<T>::findRecursive(SplayTreeNode<T> *x, const T &val) const
{
    if (x == nullptr) {
        return nullptr;
    }

    if (x->getVal() == val) {
        return x;
    }
    else if (x->getVal() < val) {
        return this->findRecursive(x->getRightChild(), val);
    }
    else if (x->getVal() > val) {
        return this->findRecursive(x->getLeftChild(), val);
    }

    return nullptr;
}

template <class T>
void SplayTree<T>::findAndSplay(const T &val)
{
    SplayTreeNode<T> *foundNode = this->findRecursive(this->root, val);
    if (foundNode != nullptr) {
        this->splay(foundNode);
    }
    else {
        throw std::invalid_argument(ELEMENT_NOT_IN_GRAPH_MSG);
    }
}

template <class T>
void SplayTree<T>::insertAndSplayRecursive(SplayTreeNode<T> *x, T val)
{
    if (x->getVal() == val) {
        ;   // 'val' is already in the tree => do nothing
    }
    else if (x->getVal() < val) {
        if (x->getRightChild() == nullptr) {
            x->setRightChild(new SplayTreeNode<T>(val));
            splay(x->getRightChild());
        }
        else {
            this->insertAndSplayRecursive(x->getRightChild(), val);
        }
    }
    else if (x->getVal() > val) {
        if (x->getLeftChild() == nullptr) {
            x->setLeftChild(new SplayTreeNode<T>(val));
            splay(x->getLeftChild());
        }
        else {
            this->insertAndSplayRecursive(x->getLeftChild(), val);
        }
    }
}

template <class T>
void SplayTree<T>::insertAndSplay(const T &val)
{
    if (this->root == nullptr) {
        this->root = new SplayTreeNode<T>(val);
    }
    else {
        insertAndSplayRecursive(this->root, val);
    }
}

template <class T>
T SplayTree<T>::getRootVal()
{
    if (this->root == nullptr) {
        throw std::invalid_argument(GRAPH_IS_EMPTY_MSG);
    }

    return this->root->getVal();
}

template <class T>
bool SplayTree<T>::isNodeRoot(SplayTreeNode<T> *node) const
{
    throwExceptionIfNodePtrIsNull(node);
    return (node->getParent() == nullptr);
}

template <class T>
bool SplayTree<T>::isNodeLeftChildOfRoot(SplayTreeNode<T> *node) const
{
    throwExceptionIfNodePtrIsNull(node);

    bool isLeftChildOfRoot = false;
    if (isNodeChildOfRoot(node)) {
        isLeftChildOfRoot = isNodeLeftChildOfParent(node->getParent(), node);
    }

    return isLeftChildOfRoot;
}

template <class T>
bool SplayTree<T>::isNodeRightChildOfRoot(SplayTreeNode<T> *node) const
{
    throwExceptionIfNodePtrIsNull(node);

    bool isRightChildOfRoot = false;
    if (isNodeChildOfRoot(node)) {
        isRightChildOfRoot = isNodeRightChildOfParent(node->getParent(), node);
    }

    return isRightChildOfRoot;
}

template <class T>
bool SplayTree<T>::isNodeRightChildOfRightChild(SplayTreeNode<T> *node) const
{
    throwExceptionIfNodePtrIsNull(node);

    bool isRightChildOfRightChild = false;
    if (!isNodeRoot(node) && !isNodeChildOfRoot(node)) {
        SplayTreeNode<T> *parent = node->getParent();
        SplayTreeNode<T> *grandParent = parent->getParent();

        isRightChildOfRightChild = (isNodeRightChildOfParent(grandParent, parent) && isNodeRightChildOfParent(parent, node));
    }

    return isRightChildOfRightChild;
}

template <class T>
bool SplayTree<T>::isNodeLeftChildOfRightChild(SplayTreeNode<T> *node) const
{
    throwExceptionIfNodePtrIsNull(node);

    bool isLeftChildOfRightChild = false;
    if (!isNodeRoot(node) && !isNodeChildOfRoot(node)) {
        SplayTreeNode<T> *parent = node->getParent();
        SplayTreeNode<T> *grandParent = parent->getParent();

        isLeftChildOfRightChild = (isNodeRightChildOfParent(grandParent, parent) && isNodeLeftChildOfParent(parent, node));
    }

    return isLeftChildOfRightChild;
}

template <class T>
bool SplayTree<T>::isNodeRightChildOfLeftChild(SplayTreeNode<T> *node) const
{
    throwExceptionIfNodePtrIsNull(node);

    bool isRightChildOfLeftChild = false;
    if (!isNodeRoot(node) && !isNodeChildOfRoot(node)) {
        SplayTreeNode<T> *parent = node->getParent();
        SplayTreeNode<T> *grandParent = parent->getParent();

        isRightChildOfLeftChild = (isNodeLeftChildOfParent(grandParent, parent) && isNodeRightChildOfParent(parent, node));
    }

    return isRightChildOfLeftChild;
}

template <class T>
bool SplayTree<T>::isNodeLeftChildOfLeftChild(SplayTreeNode<T> *node) const
{
    throwExceptionIfNodePtrIsNull(node);

    bool isLeftChildofLeftChild = false;
    if (!isNodeRoot(node) && !isNodeChildOfRoot(node)) {
        SplayTreeNode<T> *parent = node->getParent();
        SplayTreeNode<T> *grandParent = parent->getParent();

        isLeftChildofLeftChild = (isNodeLeftChildOfParent(grandParent, parent) && isNodeLeftChildOfParent(parent, node));
    }

    return isLeftChildofLeftChild;
}

template <class T>
bool SplayTree<T>::isNodeChildOfRoot(SplayTreeNode<T> *node) const
{
    throwExceptionIfNodePtrIsNull(node);
    bool isChildOfRoot = false;
    if (!isNodeRoot(node)) {
        SplayTreeNode<T> *parent = node->getParent();
        isChildOfRoot = (parent->getParent() == nullptr);
    }

    return isChildOfRoot;
}

template <class T>
bool SplayTree<T>::isNodeLeftChildOfParent(SplayTreeNode<T> *parent, SplayTreeNode<T> *child) const
{
    throwExceptionIfNodePtrIsNull(child);
    bool isLeftChild = false;
    if (parent != nullptr) {
        isLeftChild = (parent->getLeftChild() == child);
    }

    return isLeftChild;
}

template <class T>
bool SplayTree<T>::isNodeRightChildOfParent(SplayTreeNode<T> *parent, SplayTreeNode<T> *child) const
{
    throwExceptionIfNodePtrIsNull(child);
    bool isRightChild = false;
    if (parent != nullptr) {
        isRightChild = (parent->getRightChild() == child);
    }

    return isRightChild;
}

template <class T>
void SplayTree<T>::throwExceptionIfNodePtrIsNull(SplayTreeNode<T> *node) const
{
    if (node == nullptr) {
        throw std::invalid_argument(RECEIVED_NULLPTR_MSG);
    }
}


template class SplayTree<int>;
