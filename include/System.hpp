/** 
* @file System.hpp
* @description Sistem oluşturma
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/

#ifndef System_HPP
#define System_HPP
#include "BinarySearchTree.hpp"
#include "Organ.hpp"
#include "ReadFile.hpp"
#include "Control.hpp"




struct system_Node
{
public:
    int data;
    system_Node *left;
    system_Node *right;
    system_Node(int data_node);
};
class System
{
public:
    
    System();
    
    
    ~System();
    Organ**organ;
    void add(int* data);
    void add(system_Node *&subNode, const int* newItem);
    void systemAdd();
    BinaryTree *tree;
    void beforeMutation();
  
    
private:
    Tissue * firstLine;
    system_Node *root;
};


#endif