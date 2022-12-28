/** 
* @file Organ.hpp
* @description organ oluşturma
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/

#ifndef Organ_HPP
#define Organ_HPP
#include "Tissue.hpp"
#include "BinarySearchTree.hpp"

class Organ
{
public:
    
    Organ();
    ~Organ();
    BinaryTree *tree;
    int organToSystem=100;
    int lineNumber = 0;
    int linecounter(std::string);
  
    

};
#endif