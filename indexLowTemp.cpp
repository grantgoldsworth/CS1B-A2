/*******************************************
 * AUTHOR   : GRANT GOLDSWORTH
 * ID	    : 1164709
 * PROJECT  : A2 - WEATHER
 * DUE DATE : 1/22/2020
*******************************************/

#include "functions.h"

int indexLowTemp(const float temperatures[][2] // 2-dim array, rows = months, col1= high, col2 = low
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
