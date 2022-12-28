/** 
* @file System.cpp
* @description Mutasyon öncesi avl
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/
#include "System.hpp"
#include "ReadFile.hpp"
#include "Control.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

System::System()
{
   organ=new Organ*[100];
}
System::~System()
{

}
system_Node::system_Node(int data_node)
{
    data = data_node;
    left = NULL;
    right = NULL;
}


void System::beforeMutation()
{
    ReadFile *bringfile = new ReadFile();
    bringfile->checkLines(bringfile->fileName);
    Control *control= new Control();
    Organ *bringorgan = new Organ;
    
    for (int i = 0; i < bringfile->organCounter; i++)
    {
        if (i % bringorgan->organToSystem == 0)
        {
            if (i != 0)
            {
                cout << endl;
            }
        }

        control->avlControl(bringfile->organ[i]->tree);
    }
}

void System::systemAdd()
{
    
}
void System::add(system_Node*&active_Node, const int* tissue)
{

    if (active_Node == NULL)
        active_Node = new system_Node(*tissue);
    else if (*tissue < active_Node->data)
        add(active_Node->left, tissue);
    else if (*tissue == active_Node->data)
        add(active_Node->left, tissue);
    else if (*tissue > active_Node->data)
        add(active_Node->right, tissue);
    else
        return;
}
void System::add(int *tissue)
{
    add(root, tissue);
}