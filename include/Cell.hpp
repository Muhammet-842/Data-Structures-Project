/** 
* @file Cell.hpp
* @description Düğüm oluşturma
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/

#ifndef Cell_HPP
#define Cell_HPP

class Cell
{
public:
  Cell(int data);
  ~Cell();
  int data;
  Cell *next;
  Cell *prev;
};

#endif