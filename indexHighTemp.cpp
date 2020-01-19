/*******************************************
 * AUTHOR   : GRANT GOLDSWORTH
 * ID	    : 1164709
 * PROJECT  : A2 - WEATHER
 * DUE DATE : 1/22/2020
*******************************************/

#include "functions.h"

int indexHighTemp(const float temperatures[][2] // 2-dim array, rows = months, col1= high, col2 = low
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
