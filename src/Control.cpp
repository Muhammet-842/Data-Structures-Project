/** 
* @file Control.cpp
* @description Control fonksiyon tanımlamaları
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/
#include "BinarySearchTree.hpp"
#include "Tissue.hpp"
#include "Organ.hpp"
#include "ReadFile.hpp"
#include "Control.hpp"
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

Control::Control()
{
}



bool Control::ifEnter()
{
    return cin.get();
}


bool Control::avlControl(BinaryTree *tree)
{
    bool tmp = tree->avlControl();

    switch (tmp)
    {
    case true:
        printSpace();
        break;
    case false:
        printSquare();
        break;
    
    default:
        break;
    }


}


void Control::printSpace()
{
    cout<< " ";
}




void Control::printSquare()
{
    cout<< "#";
}


void Control::Mutation(Organ **organs, int count)
{
    for (int i = 0; i < count; ++i)
    {
        if (organs[i]->tree->root->data->medianValue % 50 == 0)
        {
            organs[i]->tree->mutationPost_order();
            organs[i]->tree = organs[i]->tree->SortAndAdd();
        }
    }
}