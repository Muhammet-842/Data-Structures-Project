/** 
* @file ReadFile.cpp
* @description Fonskiyon tanımlamaları,organ oluşturma 
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/
#include "ReadFile.hpp"
#include "Cell.hpp"
#include "Organ.hpp"
#include "Tissue.hpp"
#include "Radix.hpp"
#include "BinarySearchTree.hpp"
#include "Control.hpp"
#include "System.hpp"
#include <iostream>
using namespace std;


ReadFile::ReadFile()
{
    Organ *organn = new Organ();
    this->lineNumber = organn->linecounter(fileName);
    this->dynamicTissueArray = new Tissue *[lineNumber];
    organ = new Organ *[lineNumber / 20];

    for (int i = 0; i < lineNumber / 20; i++)
    {
        organ[i] = new Organ();
    }
    for (int i = 0; i < lineNumber; i++)
    {
        dynamicTissueArray[i] = new Tissue();
    }
}

void ReadFile::addOrgan(Tissue *data)
{
    organ[organCounter]->tree->add(data);
    if (count % 20 == 0)
    {
        if (count != 0)
        {
            organCounter++;
        }
    }
}

void ReadFile::findMediumValue(Tissue* tissue,int emptyPrmtr,int Array[])
{
    for (int i = 0; i < emptyPrmtr; i++)
    {
        tissue->add(Array[i]);
                
    }
    tissue->medianValue = Array[emptyPrmtr / 2];
    delete[] Array;
}

int ReadFile::checkLines(string fileName)
{
    
    Tissue *tissue;
    

    int emptyNumber = 0;
    int sifir = 0;
    int value;
    int radixnumber[100];
    ifstream readFile;
    readFile.open(fileName);

    if (readFile.is_open())
    {

        while (getline(readFile, lineLength))
        {

            tissue = dynamicTissueArray[count];

            istringstream space(lineLength);
            int i = 0;
            while (space >> value)
            {
                radixnumber[i] = value;
                emptyNumber++;
                i++;
            }

            Radix *radix = new Radix(radixnumber, emptyNumber);
            int *inOrder = radix->Sort();

            findMediumValue(tissue,emptyNumber,inOrder);
            count++;
            addOrgan(tissue);
            tissue->empty = emptyNumber;
            emptyNumber = 0;
            delete radix;
        }


    }
}


