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
 * FUNCTION - indexLowTemp
 * ____________________________________________________________________________
 * This function receives a 2-D array of floats representing temperatures
 * of months throughout a single year
 * ===> returns the index of the lowest temperature
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 		Following must be defined prior to function call:
 * 			temperatures: an array with 12 rows and 2 columns
 *
 * POST-CONDITIONS
 *		This function will not modify the array argument
 *		This function will return a number representing an index
 ******************************************************************************/

int indexLowTemp(const float temperatures[][2] // REF - the array of temperatures
				) {
	
	int   lowIndex;		// holds the index of the current lowest temperature 
	float low;			// holds the value of the current lowest temperature
	
	// first element is smallest
	lowIndex = 0;
	low 	 = temperatures[lowIndex][1];
	
	// compare each temperature; if lower than current low, set it as new low and 
	// record the index
	for (int month = 0; month < 12; month ++){
		if (low > temperatures[month][1]) {
			lowIndex = month;
			low = temperatures[lowIndex][1];
		}
	}
	
	return lowIndex;
}
