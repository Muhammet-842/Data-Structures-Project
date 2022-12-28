/** 
* @file ReadFile.hpp
* @description Dosya okuma işlemi
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/

#ifndef ReadFile_HPP
#define ReadFile_HPP
#include <string>
#include "Cell.hpp"
#include "Tissue.hpp"
#include "Organ.hpp"
#include "System.hpp"
#include <fstream>
#include <iostream>
#include <sstream>

class ReadFile
{
private:
public:
    std::string fileName = "veri.txt";
    int organCounter = 0;
    int mutationCounter = 0;
    int systemCounter = 0;
    Organ **organ;
    int count = 0;
    Tissue **dynamicTissueArray;
    string lineLength;
    Organ *createOrgan = new Organ();
    BinaryTree *bst = new BinaryTree();
    void addOrgan(Tissue *data);
    void findMediumValue(Tissue* tissue,int emptyPrmtr,int Array[]);
    void mutationOrganEkle(Tissue *data);
    void Mutasyon();
    void systemAdd();
    int publicCancer = 0;
    int p;
    int s;
    int lineNumber = 0;
    int checkLines(std::string);
    ReadFile();
    ~ReadFile();
};

#endif