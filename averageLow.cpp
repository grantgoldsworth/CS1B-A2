/*******************************************
 * AUTHOR   : GRANT GOLDSWORTH
 * ID	    : 1164709
 * PROJECT  : A2 - WEATHER
 * DUE DATE : 1/22/2020
*******************************************/

#include "functions.h"

float averageLow(const float temperatures[][2] // 2-dim array, rows = months, col1= high, col2 = low
				) {
	
	int month;					// index representing month being compared
	float temperatureSum = 0;	// the sum of all temperatures to be averaged
	
	// sum over the low column of the temperature array
	for (month = 0; month < 12; month ++) {
		temperatureSum += temperatures[month][1];
	}
	
	return temperatureSum / (month);
}