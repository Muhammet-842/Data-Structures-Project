/** 
* @file Radix.hpp
* @description Radix yapısı
* @course 2C
* @assignment 2
* @date 17.12.2022
* @author Muhammet Ali Şahal muhammet.sahal@ogr.sakarya.edu.tr
*/

#ifndef Radix_hpp
#define Radix_hpp

#include "Queue.hpp"
#include <cmath>
#include "Tissue.hpp"
class Radix
{
private:
	int *numbers;
	int length;
	Queue **queues;
	int maxStep;

	int MaxStepNumber();
	int StepCount(int);
	int *QueueCurrentLengths();

public:
	Radix(Tissue *tissueRadix);
	Radix(int *, int);
	Tissue *SortTissue();
	int *Sort();
	~Radix();
};
#endif