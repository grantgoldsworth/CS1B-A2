/*******************************************
 * AUTHOR   : GRANT GOLDSWORTH
 * ID	    : 1164709
 * PROJECT  : A2 - WEATHER
 * DUE DATE : 1/22/2020
*******************************************/

#include "functions.h"

int main() {
	
	system("cls");
	
	float avgHigh;		// holds the average of highs across all data entries
	float avgLow;		// holds the average of lows across all data entries
	int   highIndex;	// the index of the highest temperature
	int   lowIndex;		// the index of the lowest temperature
	
	// array of strings containing months arranged in order - used for output
	string months[12] = {"January", "February", "March", "April","May", "June",
	"July", "August", "Setpember", "October", "November", "December"};
	
	
	// INITIALIZATIONS - set all temperatures to 0.0 
	float temperatures[12][2] = {0};
	
	// obtain data input from the user
	getData(temperatures, months);
	
	// calculate averages and the locations of the high and the low in temperatures
	avgHigh   = averageHigh(temperatures);
	avgLow    = averageLow(temperatures);
	highIndex = indexHighTemp(temperatures);
	lowIndex  = indexLowTemp(temperatures);
	
	// OUTPUT - output the results, format decimals 2 places
	cout << fixed << setprecision(2);
	cout << "\n--- YEAR STATS ---\n\n";
	cout << "Average High: " << avgHigh << '\370' << endl;
	cout << "Average Low:  " << avgLow  << '\370' << endl << endl;
	
	cout << "Highest Temperature: " << temperatures[highIndex][0] << '\370' << " - Month: " << months[highIndex] << endl;
	cout << "Lowest Temperature:  " << temperatures[lowIndex][1]  << '\370' << " - Month: " << months[lowIndex]  << endl;
	
	system("pause");
	return 0;
}