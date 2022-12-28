/** 
* @file Tissue.cpp
* @description Doku oluşturma fonksiyonları
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/
#include "Tissue.hpp"
#include "ReadFile.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

Tissue::Tissue()
{
    firstLine = 0;
    this->count = 0;
    empty = 0;
}

Tissue::~Tissue()
{
    Cell *gec = firstLine;
    while (gec != 0)
    {
        Cell *sil = gec;
        gec = gec->next;
        delete sil;
    }
}
void Tissue::add(int data)
{
    Cell *neW = new Cell(data);
    if (firstLine == 0)
    {
        firstLine = neW;
    }
    else
    {
        Cell *gec = firstLine;
        while (gec->next != 0)
            gec = gec->next;

        gec->next = neW;
    }
    this->count++;
}
Cell *Tissue::bringNode(int sira)
{
    Cell *gec = firstLine;
    while (sira >= 0 && gec != 0)
    {
        if (sira == 0)
            return gec;
        gec = gec->next;
        sira--;
    }
    return 0;
}
bool Tissue::IsEmpty()
{
    return this->count == 0;
}
ostream &operator<<(ostream &os, Tissue &doku)
{
    return os;
}
void Tissue::print()
{
    for (int i = 0; i < count; i++)
    {

        cout << this->bringNode(i)->data << " ";
    }

    cout << "orta " << this->medianValue << endl;
}
void Tissue::mutationPost_order()
{
    Cell *tmp = this->firstLine;
    while (tmp != 0)
    {
        if (tmp->data % 2 == 0)
            tmp->data = tmp->data / 2;
        tmp = tmp->next;
    }
}
void Tissue::Deque(){
    Cell *tmp=this->firstLine;
    if(tmp!=0){
        this->firstLine=this->firstLine->next;
        delete tmp;
        this->count--;
    }
}
