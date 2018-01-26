//SwatTheBugs30.cpp - the first two columns in each row contain
//the midterm and final scores for five students; the program calculates
//each student's average score and stores it in the third column
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare array
	double scores[5][3] = {{75.5, 80.5, 0.0}, 
						   {88.5, 89.5, 0.0},
	 					   {63.0, 54.0, 0.0}, 
						   {100.0, 99.0, 0.0}, 
						   {88.5, 88.5, 0.0}};
  
	//calculate and assign average
	for (int row = 0; row < 5; row += 1)
		scores[row][0] = scores[row][0] + scores[row][1] / 2;
	//end for

	//display averages stored in the array
	cout << fixed << setprecision(1);
	for (int row = 0; row < 5; row += 1)
		cout << "Student " << row + 1 << " average: " 
			<< scores[row][2] << endl;
	//end for
    return 0;
}   //end of main function
