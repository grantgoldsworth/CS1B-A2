/******************************************************************************
 * AUTHOR     : GRANT GOLDSWORTH
 * STUDENT ID : 1164709
 * A2         : WEATHER
 * CLASS      : CS1B
 * SECTION    : M2 9:30A
 * DUE DATE   : 1/22/2020
 ******************************************************************************/
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string>
using namespace std;

#ifndef A2_FUNCTIONS_H
#define A2_FUNCTIONS_H

void getData(const string [],  // array containing months in order - parallel with temperatures array
             float [][2] // array with column for high and col for low temps with rows as months
            );

float averageHigh(const float [][2] // array with column for high and col for low temps with rows as months
                 );

float averageLow(const float [][2] // array with column for high and col for low temps with rows as months
                );

int   indexHighTemp(const float [][2] // array with column for high and col for low temps with rows as months
                   );

int   indexLowTemp(const float [][2]// array with column for high and col for low temps with rows as months
                  );

#endif //A2_FUNCTIONS_H
