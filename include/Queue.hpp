/** 
* @file Queue.hpp
* @description Kuyruk yapısı
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/

#ifndef Queue_hpp
#define Queue_hpp

#include <iostream>
using namespace std;
class queueNode
{
public:
    int item;
    queueNode *next;
    queueNode(int itm);
};
class Queue
{
private:
    queueNode *front;
    queueNode *back;
    int length;

public:
    Queue();
    ~Queue();
    void clear();
    int count();
    bool isEmpty();
    int peek();
    void enqueue(const int &item);
    void dequeue();
};
#endif