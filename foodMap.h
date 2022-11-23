#pragma once
#include <string>
#include <algorithm>
#include "food.h"
using namespace std;

class FoodMap
{

    private:

    // Holds the key/value pair
    struct FoodNode
    {
        // FoodNode Properties
        float key;
        string value;
        int height;
        int balance;
        FoodNode *foodLeft;
        FoodNode *foodRight;

        // FoodNode Constructors
        FoodNode() : key(0.0), value(""), height(0), balance(0), foodLeft(nullptr), foodRight(nullptr) {}
        FoodNode(float K, string V) : key(K), value(V), height(0), balance(0), foodLeft(nullptr), foodRight(nullptr){}
    };

    // Root of the map's tree
    FoodNode *root = nullptr;
    int numNodes = 0;

    FoodMap::FoodNode *helperInsert(FoodNode *helpRoot, float K, string V);
    //int helperPrintInorder(FoodNode *helpRoot, int nodeCount); //  helper test function
    FoodMap::FoodNode *balance(FoodMap::FoodNode *helpRoot);
    FoodMap::FoodNode *rotateLeft(FoodNode *helpRoot);
    FoodMap::FoodNode *rotateRight(FoodNode *helpRoot);
    FoodMap::FoodNode *rotateLeftRight(FoodNode *helpRoot);
    FoodMap::FoodNode *rotateRightLeft(FoodNode *helpRoot);
    int getHeight(FoodNode *helpRoot);

    public:
    
    void insert(float K, string V);
    //void printInorder(); // Test function
};

// Print height of node (Repurposed from Project 1 Code)
int FoodMap::getHeight(FoodNode *helpRoot)
{
    // Return -1 if root is a nullptr since FoodMap uses 0 based height
    if (helpRoot == nullptr)
    {
        return -1;
    }

    // Otherwise return the height of the node
    return helpRoot->height;
}

// Add a Key/Value Pair to the map (Repurposed from Project 1)
void FoodMap::insert(float K, string V)
{
    this->root = helperInsert(this->root, K, V);
}

// Inserts a Key-Value pair into the map (Repurposed from Project 1 Code)
FoodMap::FoodNode *FoodMap::helperInsert(FoodMap::FoodNode *helpRoot, float K, string V)
{
    // If the end of the branch has been reached, create a new FoodNode and increment numNodes in tree
    if (helpRoot == nullptr)
    {
        cout << "successful" << endl;
        this->numNodes = numNodes + 1;
        return new FoodNode(K, V);
    }

    // If the target  is less than the current K and is not a duplicate, traverse/insert left
    if (K < helpRoot->key && K != helpRoot->key)
    {
        helpRoot->foodLeft = helperInsert(helpRoot->foodLeft, K, V);
    }
    // If the target K is greater than the current K and is not a duplicate, traverse/insert right
    else if (K > helpRoot->key && K != helpRoot->key)
    {
        helpRoot->foodRight= helperInsert(helpRoot->foodRight, K, V);
    }
    // Otherwise the insert was unsuccessful
    else
    {
        cout << "unsuccessful" << endl;
        return helpRoot;
    }

    // Update height and balance of each node inserted here as directed by Aman in Lecture
    // Use a getHeight function to avoK nullptr Errors
    helpRoot->height = 1 + max(getHeight(helpRoot->foodLeft), getHeight(helpRoot->foodRight));
    helpRoot->balance = getHeight(helpRoot->foodLeft) - getHeight(helpRoot->foodRight);

    // Balance the tree
    helpRoot = balance(helpRoot);

    return helpRoot;
}

// Private helper function that automatically balances the AVL tree/ Map (Repurposed from Project 1)
FoodMap::FoodNode *FoodMap::balance(FoodMap::FoodNode *helpRoot)
{

    // Once heights/balance are updated, if the threshold is > +-1 and the passed root is not a nullptr
    if (abs(helpRoot->balance) > 1 && helpRoot != nullptr)
    {

        // Left Left Alignment Case => Right Rotation
        if (helpRoot->balance == 2 && helpRoot->foodLeft->balance == 1)
        {
            helpRoot = rotateRight(helpRoot);
        }
        // Right Right Alignment Case => Left Rotation
        else if (helpRoot->balance == -2 && helpRoot->foodRight->balance == -1)
        {
            helpRoot = rotateLeft(helpRoot);
        }
        // Left Right Alignment Case
        else if (helpRoot->balance == 2 && helpRoot->foodLeft->balance == -1)
        {
            helpRoot = rotateLeftRight(helpRoot);
        }
        // Right Left Alignment Case
        else if (helpRoot->balance == -2 && helpRoot->foodRight->balance == 1)
        {
            helpRoot = rotateRightLeft(helpRoot);
        }
    }

    return helpRoot;
}

// Perform a Left Rotation on the input node (Stepik/Project 1 sourced for this)
FoodMap::FoodNode *FoodMap::rotateLeft(FoodMap::FoodNode *helpRoot)
{

    FoodMap::FoodNode *newRoot = helpRoot->foodRight;
    FoodMap::FoodNode *pivot = newRoot->foodLeft;
    newRoot->foodLeft = helpRoot;
    helpRoot->foodRight = pivot;

    // After rotating update the heights and balances of the nodes here as directed in lecture
    helpRoot->height = 1 + max(getHeight(helpRoot->foodLeft), getHeight(helpRoot->foodRight));
    helpRoot->balance = getHeight(helpRoot->foodLeft) - getHeight(helpRoot->foodRight);
    newRoot->height = 1 + max(getHeight(newRoot->foodLeft), getHeight(newRoot->foodRight));
    newRoot->balance = getHeight(newRoot->foodLeft) - getHeight(newRoot->foodRight);

    return newRoot;
}

// Perform a Right Rotation on the input node (Stepik/Project 1 sourced for this)
FoodMap::FoodNode *FoodMap::rotateRight(FoodMap::FoodNode *helpRoot)
{

    FoodMap::FoodNode *newRoot = helpRoot->foodLeft;
    FoodMap::FoodNode *pivot = newRoot->foodRight;
    newRoot->foodRight = helpRoot;
    helpRoot->foodLeft = pivot;

    // After rotating update the heights and balances of the nodes here as directed in lecture
    helpRoot->height = 1 + max(getHeight(helpRoot->foodLeft), getHeight(helpRoot->foodRight));
    helpRoot->balance = getHeight(helpRoot->foodLeft) - getHeight(helpRoot->foodRight);
    newRoot->height = 1 + max(getHeight(newRoot->foodLeft), getHeight(newRoot->foodRight));
    newRoot->balance = getHeight(newRoot->foodLeft) - getHeight(newRoot->foodRight);

    return newRoot;
}

// Perform a Left Rotation on the left child and a Right Rotation on the input node (Stepik/Project 1 sourced for this)
FoodMap::FoodNode *FoodMap::rotateLeftRight(FoodMap::FoodNode *helpRoot)
{
    FoodMap::FoodNode *newRoot;
    FoodMap::FoodNode *leftChild;
    leftChild = helpRoot->foodLeft;
    helpRoot->foodLeft = rotateLeft(leftChild);
    newRoot = rotateRight(helpRoot);

    return newRoot;
}

// Perform a Right Rotation on the right child and a Left Rotation on the input node (Stepik/Project 1 sourced for this)
FoodMap::FoodNode *FoodMap::rotateRightLeft(FoodMap::FoodNode *helpRoot)
{
    FoodMap::FoodNode *newRoot;
    FoodMap::FoodNode *rightChild;
    rightChild = helpRoot->foodRight;
    helpRoot->foodRight = rotateRight(rightChild);
    newRoot = rotateLeft(helpRoot);

    return newRoot;
}

/* Test Functions

// Prints comma separated list of Keys Inorder
void FoodMap::printInorder()
{
    helperPrintInorder(this->root, this->numNodes);
}

// Helper function that prints comma seperated traversal Inorder by using nodecount to determine when to end the list
int FoodMap::helperPrintInorder(FoodMap::FoodNode *helpRoot, int nodeCount)
{
    // If the end of tree has been reached do not print anything
    if (helpRoot == nullptr)
    {
        return nodeCount;
    }

    // Traverse left
    nodeCount = helperPrintInorder(helpRoot->foodLeft, nodeCount);

    // If the nodecount is not the last node, then the list still needs to be comma separated
    if (nodeCount != 1)
    {
        cout << helpRoot->key << ", ";
        --nodeCount;
    }
    // Last node needs to have no comma and start a new line
    else
    {
        cout << helpRoot->key << endl;
        return nodeCount;
    }

    // Traverse right
    nodeCount = helperPrintInorder(helpRoot->foodRight, nodeCount);

    return nodeCount;
}
*/