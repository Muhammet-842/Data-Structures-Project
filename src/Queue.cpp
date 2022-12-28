/** 
* @file Queue.cpp
* @description Hocalarımızın kuyruk kodları
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/
#include "Queue.hpp"
#include <iomanip>
#include <iostream>
using namespace std;
queueNode::queueNode(int itm)
{
    item = itm;
    next = NULL;
}
Queue::Queue()
{
    front = back = NULL;
    length = 0;
}
Queue::~Queue()
{
    clear();
}
void Queue ::clear()
{
    while (!isEmpty())
        dequeue();
}
int Queue::count()
{
    return length;
}
bool Queue::isEmpty()
{
    return length == 0;
}
int Queue::peek()
{
    if (isEmpty())
        throw "Queue is empty";
    return front->item;
}
void Queue::enqueue(const int &item)
{
    queueNode *last = new queueNode(item);
    if (isEmpty())
        front = back = last;
    else
    {
        back->next = last;
        back = last;
    }
    length++;
}
void Queue::dequeue()
{
    if (isEmpty())
        throw "Queue is empty";
    queueNode *eskiOn = front;
    front = front->next;
    delete eskiOn;
    length--;
}
