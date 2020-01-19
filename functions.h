/*******************************************
 * AUTHOR   : GRANT GOLDSWORTH
 * ID	    : 1164709
 * PROJECT  : A2 - WEATHER
 * DUE DATE : 1/22/2020
*******************************************/

#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string>
using namespace std;

#ifndef A2_FUNCTIONS_H
#define A2_FUNCTIONS_H

void  getData(float [][2], string []);

float averageHigh(const float [][2]);

float averageLow(const float [][2]);

int   indexHighTemp(const float [][2]);

int   indexLowTemp(const float [][2]);

#endif //A2_FUNCTIONS_H
