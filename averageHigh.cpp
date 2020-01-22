/******************************************************************************
 * AUTHOR     : GRANT GOLDSWORTH
 * STUDENT ID : 1164709
 * A2         : WEATHER
 * CLASS      : CS1B
 * SECTION    : M2 9:30A
 * DUE DATE   : 1/22/2020
 ******************************************************************************/

#include "functions.h"

/******************************************************************************
 * FUNCTION - averageLow
 * ____________________________________________________________________________
 * This function receives a 2-D array of floats and calculates the average of
 * the column representing high temperatures
 * ===> returns the average of the high temperatures column
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 		Following must be defined prior to function call:
 * 			temperatures: an array of floats
 *
 * POST-CONDITIONS
 *		This function will not modify contents of the temperatures array
 *		This function will return a float representing an average
 ******************************************************************************/

float averageHigh(const float temperatures[][2]	// 2-dim array, rows = months, col1= high, col2 = low
				 ) {
	
	int month;					// index representing month being compared
	float temperatureSum = 0;	// the sum of all temperatures to be averaged

	// sum over the high column of the temperature array
	for (month = 0; month < 12; month ++) {
		temperatureSum += temperatures[month][0];
	}
	
	return temperatureSum / (month);
}