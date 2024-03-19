#include <iostream>
#include "Node.h"

class BinarySearchTree
{
    public:
        
        Node* root;

        BinarySearchTree()
        {
            // A root is created as a nullptr initially.
            root = nullptr;
        }

    /*
    * Creates new nodes for the binary tree.
    * There are 4 steps in order to create a node:
    * 1- Create a new node. 
    * 2- Set the node value.
    * 3- Check if root is null, set the new node to the root. Otherwise, call insertNode method.
    * 4- Return the reference of this node.
    */
    Node* createNode(int value)
    {
        //Step 1: create new node.
        Node* newNode = new Node();
        //Step 2: Setting the value of node.
        newNode->value = value;

        if(this->root == nullptr)
        {
            this->root = newNode;
            return newNode;
        }
        else
        {
            this->insertNode(this->root, newNode);
        }

        //Step 4: Return the reference of node.
        return newNode;
    }

    private:
    //Insert node has two parameters of current node and new node.
    //If the value is grater than the current node, it places new node to the right, otherwise vice versa.
    //No need to return anything because it takes parameters as referances.
    void insertNode(Node* currentNode, Node* newNode)
    {
        if(newNode->value > currentNode->value)
        {
            if(currentNode->right == nullptr)
            {
                currentNode->right = newNode;
            }
            else
            {
                this->insertNode(currentNode->right, newNode);
            }
        }
        else
        {
            if(currentNode->left == nullptr)
            {
                currentNode->left = newNode;
            }
            else
            {
                this->insertNode(currentNode->left, newNode);
            }
        }
    }

    //In order algorithm (LDR)
    void printInOrderRecursive(Node* root) {
        if (root != nullptr) {
            printInOrderRecursive(root->left);
            std::cout << root->value << " ";
            printInOrderRecursive(root->right);
        }
    }

    public:
    //Prints the binary search tree with in order method.
    void printInOrder() {
        printInOrderRecursive(this->root);
    }
};