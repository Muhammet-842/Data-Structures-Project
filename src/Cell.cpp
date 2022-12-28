/** 
* @file ell.cpp
* @description Düğüm tanımı
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/
#include "Cell.hpp"
#include <iostream>
using namespace std;

Cell::Cell(int data)
{
    this->data = data;
    this->next = 0;
    this->prev = 0;
}

Cell::~Cell()
{
    // cout<<veri<<": dugumu silindi --->";
}
