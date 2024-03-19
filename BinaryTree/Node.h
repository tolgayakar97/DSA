#include <iostream>


/*
    *Binary tree nodes consist of three components:
    * 1- Value of the node.
    * 2- Pointer to left node.
    * 3- Pointer to right node.
    */
class Node
{
    public: 
        int value;
        Node* left = nullptr;
        Node* right = nullptr;
};