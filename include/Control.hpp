/** 
* @file Control.hpp
* @description Avl control , mutasyon gibi fonksiyonları barındırır
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/

#ifndef Control_HPP
#define Control_HPP
#include "BinarySearchTree.hpp"
#include "Tissue.hpp"
#include "Organ.hpp"
#include "ReadFile.hpp"
#include "Control.hpp"
#include <iomanip>
#include <cmath>
#include <iostream>

class Control
{

public:
    Control();
    bool avlControl(BinaryTree *tree);
    void testMutasyon(Tissue *data);
    Organ **mutationOrgan;
    bool ifEnter();
    void Mutation(Organ **organs, int count);
    void printSpace();
    void printSquare();
    
};

#endif