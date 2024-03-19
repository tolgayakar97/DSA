#include <iostream>
#include "BinarySearchTree.h"

int main()
{
    //Creating of binaryTree instance.
    BinarySearchTree binaryTree;

    //Creating of root node.
    binaryTree.createNode(10);
    binaryTree.createNode(7);
    binaryTree.createNode(15);
    binaryTree.createNode(8);
    binaryTree.createNode(2);
    binaryTree.createNode(12);

    binaryTree.printInOrder();

    return 0;
}