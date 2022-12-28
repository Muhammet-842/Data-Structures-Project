/** 
* @file Tissue.hpp
* @description Doku oluşturma.
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/

#ifndef Tissue_hpp
#define Tissue_hpp
#include "Cell.hpp"
#include <iostream>
#include <iomanip>
using namespace std;
class Tissue
{
public:
    Tissue();
    Tissue(Tissue *data);
    int count;
    void add(int veri);
    void print();
    ~Tissue();
    int medianValue;
    friend ostream &operator<<(ostream &os, Tissue &tissue);
    Cell *bringNode(int sira);
    void mutationPost_order();
    bool IsEmpty();
    void Deque();
    Tissue *next;
    Tissue *prev;
    int empty;

private:
    Cell *firstLine;
    Tissue *data;
};

#endif
