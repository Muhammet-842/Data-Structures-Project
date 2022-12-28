/** 
* @file Organism.cpp
* @description Fonksiyon tanımlamaları
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/
#include "Organism.hpp"
#include <iostream>
#include<iomanip>
using namespace std;


void Organism::printOrganism()
{
    cout<<setw(28)<<"ORGANIZMA"<<endl;
}

void Organism::printMutatedOrganism()
{
    cout<<setw(35)<<"ORGANIZMA  (MUTASYONA UGRADI)"<<endl;
}
