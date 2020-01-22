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
 * FUNCTION - indexHighTemp
 * ____________________________________________________________________________
 * This function receives a 2-D array of floats representing temperatures
 * of months throughout a single year
 * ===> returns the index of the highest temperature
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 		Following must be defined prior to function call:
 * 			temperatures: an array with 12 rows and 2 columns
 *
 * POST-CONDITIONS
 *		This function will not modify the array argument
 *		This function will return a number representing an index
 ******************************************************************************/

int indexHighTemp(const float temperatures[][2] // REF - the array of temperatures
				 ) {
	
	int   highIndex;	// holds the index of the current highest temperature 
	float high;			// holds the value of the current highest temperature
	
	// first element is largest
	highIndex = 0;
	high 	  = temperatures[highIndex][0];
	
	// compare each temperature; if higher than current higher, set it as new high and 
	// record the index
	for (int month = 0; month < 12; month ++){
		if (high < temperatures[month][0]) {
			highIndex = month;
			high = temperatures[highIndex][0];
		}
	}
	
	return highIndex;
}
