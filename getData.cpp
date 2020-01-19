/*******************************************
 * AUTHOR   : GRANT GOLDSWORTH
 * ID	    : 1164709
 * PROJECT  : A2 - WEATHER
 * DUE DATE : 1/22/2020
*******************************************/

#include "functions.h"

void getData(float temperatures[][2], // 2-dim array, rows = months, col1= high, col2 = low - parallel with months
			 string months[]		  // array containing months in order - parralel with temperatures array
			 ) {
	
	// for each month (index), output the month and prompt input
	// for the high and low of that month
	for (int month = 0; month < 12; month ++) {
		cout << months[month] << endl;
		
		cout << "\tEnter high: ";
		cin  >> temperatures[month][0];
		
		cout << "\tEnter low:  ";
		cin  >> temperatures[month][1];
	}
	
	
	return;
}