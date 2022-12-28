/** 
* @file BinarySearchTree.cpp
* @description Fonk tanımlamaları
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/
#include "BinarySearchTree.hpp"
#include "Organ.hpp"
#include "Control.hpp"
#include "ReadFile.hpp"
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;
Node::Node(Tissue *data_node)
{
    data = data_node;
    left = NULL;
    right = NULL;
    height = 0;
}
BinaryTree::BinaryTree()
{
    root = NULL;
}
BinaryTree::~BinaryTree()
{
}
int BinaryTree::Is_there(Tissue *data)
{
    return Is_there(data, root);
}
int BinaryTree::Is_there(Tissue *search, Node *active)
{
    if (active->data < search)
    {
        if (active->right)
            return Is_there(search, active->right);

        return false;
    }
    else if (active->data > search)
    {
        if (active->left)
            return Is_there(search, active->left);

        return false;
    }
    else
        return true;
}
void BinaryTree::add(Tissue *newItem)
{
    add(root, newItem);
}

void BinaryTree::add(Node *&active_Node, Tissue *newItem)
{

    if (active_Node == NULL)
        active_Node = new Node(newItem);
    else if (newItem->medianValue < active_Node->data->medianValue)
        add(active_Node->left, newItem);
    else if (newItem->medianValue == active_Node->data->medianValue)
        add(active_Node->left, newItem);
    else if (newItem->medianValue > active_Node->data->medianValue)
        add(active_Node->right, newItem);
    else
        return;
}

int BinaryTree::height(Node *active_Node)
{
    if (active_Node == NULL)
        return 0;

    return 1 + max(height(active_Node->left), height(active_Node->right));
}
int BinaryTree::height()
{
    return height(root);
}
bool BinaryTree::find(int item, Node *subNode)
{
    if (subNode == NULL)
        return false;
    if (subNode->data->medianValue == item)
        return true;
    if (item < subNode->data->medianValue)
        return find(item, subNode->left);
    else
        return find(item, subNode->right);
}
bool BinaryTree::find(int item)
{
    return find(item, root);
}
void BinaryTree::mutationPost_order()
{
    mutationPost_order(this->root);
}
void BinaryTree::mutationPost_order(Node *mutated)
{
    if (mutated != NULL)
    {
        mutationPost_order(mutated->left);
        mutationPost_order(mutated->right);
        mutated->data->mutationPost_order();
    }
}
BinaryTree *BinaryTree::SortAndAdd()
{
    BinaryTree *tree = new BinaryTree();

    postOrder(this->root, tree);

    return tree;
}

void BinaryTree::postOrder(Node *active, BinaryTree *bstTree)
{
    if (active != 0)
    {
        postOrder(active->left, bstTree);
        postOrder(active->right, bstTree);
        bstTree->add(active->data);
    }
}

bool BinaryTree::avlControl(Node *root)
{
    // for height of left subtree
    int lh;

    // for height of right subtree
    int rh;

    // If tree is empty then return true
    if (root == NULL)
        return 1;

    // Get the height of left and right sub trees
    lh = height(root->left);
    rh = height(root->right);

    if (abs(lh - rh) <= 1 && avlControl(root->left) && avlControl(root->right))
        return 1;

    // If we reach here then tree is not height-balanced
    return 0;
}
bool BinaryTree::avlControl()
{
    return avlControl(root);
}
