#include "binaryTree.h"
#include <stack>
using namespace std;

template <class T>
void Tree<T>::NonrecPreorder()
{                           // Non recursive preorder traveral using a stack
    stack<TreeNode<T> *> s; // declare and initialize stack
    TreeNode<T> *currentNode = root;

    while (1)
    {
        while (currentNode)
        {
            visit(currentNode);
            if (currentNode->rightChild)
                s.Push(currentNode->rightChild);
            currentNode = currentNode->leftChild;
        }
        if (s.IsEmpty())
            return;
        currentNode = s.Top();
        s.Pop();
    }
}