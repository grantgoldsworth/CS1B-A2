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
 * A2 - WEATHER
 *-----------------------------------------------------------------------------
 * This program will accept information about the highs and lows of months
 * for an entire year, then display the average high, average low,
 * and the month with the highest high as well as the month with the
 * lowest low.
 *-----------------------------------------------------------------------------
 * INPUT:
 *      This program accepts input from the user in the format of:
 *          high temperature
 *          low temperature
 *
 *      for each month
 *
 * OUTPUT:
 * 		This program will output the average highs and lows, as well as the
 * 		highest/lowest temperatures with their respective months
 *
 * 		Example:
 * 		    --- YEAR STATS ---
 *
 * 		    Average High: 78.91
 * 		    Average Low:  41.55
 *
 * 		    Highest Temperature: 85.01 - August
 * 		    Lowest Temperature:  38.55 - January
 ******************************************************************************/

int main() {
	
	system("cls");

	float avgHigh;		// CALC & OUT - holds the average of highs across all data entries
	float avgLow;		// CALC & OUT - holds the average of lows across all data entries
	int   highIndex;	// CALC & OUT - the index of the highest temperature
	int   lowIndex;		// CALC & OUT - the index of the lowest temperature
	
	// array of strings containing months arranged in order - used for output
	string months[12] = {"January", "February", "March", "April","May", "June",
	"July", "August", "September", "October", "November", "December"};
	
	
	// INITIALIZATIONS - set all temperatures to 0.0 
	float temperatures[12][2] = {0};
	
	// INPUT - obtain data input from the user
	getData(months, temperatures);
	
	// calculate averages and the locations of the high and the low in temperatures array
	avgHigh   = averageHigh(temperatures);
	avgLow    = averageLow(temperatures);
	highIndex = indexHighTemp(temperatures);
	lowIndex  = indexLowTemp(temperatures);


    /****************************************************************
    * OUTPUT
     * --------------------------------------------------------------
     * Output the averages and max/mins/months with decimals
     * formatted to two places.
    *****************************************************************/

	cout << fixed << setprecision(2);
	cout << "\n--- YEAR STATS ---\n\n";
	cout << "Average High: " << avgHigh << '\370' << endl;
	cout << "Average Low:  " << avgLow  << '\370' << endl << endl;
	
	cout << "Highest Temperature: " << temperatures[highIndex][0] << '\370' << " - Month: " << months[highIndex] << endl;
	cout << "Lowest Temperature:  " << temperatures[lowIndex][1]  << '\370' << " - Month: " << months[lowIndex]  << endl;
	
	system("pause");
	return 0;
}