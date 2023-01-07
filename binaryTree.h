#ifndef BINARYTREE_H
#define BINARYTREE_H

template <class T>
class Tree;

template <class T>
class TreeNode
{
    friend class Tree<T>;

private:
    T data;
    TreeNode<T> *leftChild;
    TreeNode<T> *rightChild;
};

template <class T>
class Tree
{
public:
    void NonrecPreorder();

private:
    TreeNode<T> *root;
};
#endif