//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by Heather Moore on 2/28/18

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
	// declare and initialize day, totalTexts, dailyTexts, and average
	int day = 0;
	int totalTexts = 0;	
    int dailyTexts = 0;
    double average = 0.0;
 
	// for loop to enter data for 7 days of the week
	for (day = 1; day < 8; day += 1)
	{
		cout << "How many text messages did you send on day " 
			<< day << "? ";
		cin >> dailyTexts;
		totalTexts += dailyTexts;
	}	//end for

	// find and display average number texts
	average = static_cast<double>(totalTexts) / (day - 1);
	cout << fixed << setprecision(0);
	cout << endl << "You sent approximately " 
			<< average << " text messages per day." << endl;
    return 0;
}   //end of main function