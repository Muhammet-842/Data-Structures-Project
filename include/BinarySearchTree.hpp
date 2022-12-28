/** 
* @file BinarySearchTree.hpp
* @description Düğüm yapısını kurdum ve fonksiyonları tanımladım.
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <iostream>
#include "Tissue.hpp"
#include "Radix.hpp"

using namespace std;

struct Node
{
public:
    Tissue *data;
    Node *left;
    Node *right;
    Node(Tissue *data_node);
    int height;
};
class BinaryTree
{
public:
    BinaryTree();
    ~BinaryTree();
    int i;
    int Is_there(Tissue *data);
    bool find(int data);
    void add(Tissue *data);

    int height();
    int height(Node *active_Node);
    bool find(int search, Node *active);
    int Is_there(Tissue *search, Node *active);
    void add(Node *&subNode, Tissue *newItem);
    bool avlControl(Node *active_Node);
    bool avlControl();
    void postOrder(Node *active, BinaryTree *btTree);
    int left;
    int right;
    BinaryTree *SortAndAdd();
    Node *root;
    void mutationPost_order();
    void mutationPost_order(Node *sub);

private:
};

#endif