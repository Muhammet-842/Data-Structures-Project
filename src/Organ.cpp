/** 
* @file Organ.cpp
* @description Fonksiyon tanımlamaları.
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/
#include "Organ.hpp"
#include "ReadFile.hpp"
#include <iostream>
#include <iomanip>
using namespace std;


Organ::Organ()
{
    this->tree=new BinaryTree();
    // root = NULL;
}
Organ::~Organ()
{

}


int Organ::linecounter(string fileName)
{
    string tmpLine = "";
    ifstream readFile;
    readFile.open(fileName);
    while (getline(readFile, tmpLine)) 
    {
        lineNumber++;
    }
    readFile.close();
    return lineNumber;
}



