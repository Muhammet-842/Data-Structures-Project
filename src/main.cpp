/** 
* @file main.cpp
* @description Fonksiyonları çağırma ve yazdırma
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "Cell.hpp"
#include "Control.hpp"
#include "Tissue.hpp"
#include "ReadFile.hpp"
#include "Organism.hpp"
using namespace std;

void printandMutate()
{
    ReadFile *file = new ReadFile();
    file->checkLines(file->fileName);
    Control *control = new Control();
    Organism *organism = new Organism();
    Organ *organ = new Organ();
    System *system = new System();

    organism->printOrganism();

    system->beforeMutation();

    control->ifEnter();

    organism->printMutatedOrganism();

    for (int i = 0; i < file->organCounter; i++)
    {
        if (i % organ->organToSystem == 0)
        {
            if (i != 0)
            {
                cout << endl;
            }
        }

        control->Mutation(file->organ, file->organCounter);
        control->avlControl(file->organ[i]->tree);
    }

}



int main()
{
    printandMutate();
}