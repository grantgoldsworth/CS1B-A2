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
 * FUNCTION - getData
 * ____________________________________________________________________________
 * This function receives a 2-D array of floats and an array of strings, and prompts
 * user to input data into the temperatures array correspondingly with months
 * from the months array.
 * ===> returns nothing
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 		Following must be defined prior to function call:
 * 		    months      : an array of strings, parallel with temperatures
 * 			temperatures: an array of floats, parallel with months
 *
 * POST-CONDITIONS
 *		This function will not modify the months array
 *		This function will modify contents of the temperatures array
 ******************************************************************************/

void getData(const string months[],  // REF - the array of months, parallel with temperatures
             float temperatures[][2] // REF - the array of temperatures, parallel with months
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