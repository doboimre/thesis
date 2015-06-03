#ifndef SPLAYTREENODE_H
#define SPLAYTREENODE_H

template <class T>
class SplayTreeNode
{
    private:
        SplayTreeNode<T> *leftChild;
        SplayTreeNode<T> *rightChild;
        SplayTreeNode<T> *parent;

        T val;

    public:
        SplayTreeNode(T val);

        void setVal(T val);
        T getVal();

        SplayTreeNode<T>* getLeftChild() const;
        void setLeftChild(SplayTreeNode<T> *leftChild);

        SplayTreeNode<T>* getRightChild() const;
        void setRightChild(SplayTreeNode<T>* rightChild);

        SplayTreeNode<T>* getParent() const;
        void setParent(SplayTreeNode<T>* parent);



};

#endif // SPLAYTREENODE_H
