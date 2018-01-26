//enter your name
//enter the date here
//enter identifying information about the assignment

#include <iostream> //directive needed for input and output
using namespace std; //identify the namespace used

int main() { //declare the main function

// declare and initialize variables
double salary = 0.0;
double weeklyPay = 0.0;
double biweeklyPay = 0.0;

// Inputs - enter salary
cout << "Please enter the salary: $" ;
cin >> salary;

// processing - divide salary by 52 for weekly gross pay
weeklyPay = salary/52;

// processing - divide salary by 26 for biweekly gross pay
biweeklyPay = salary/26;

// output - display weekly and biweekly gross pay
cout << endl << "Weekly Pay: $" << weeklyPay << endl;
cout << endl << "biWeekly Pay: $" << endl;

return 0; //indicate all is well for the operating system
} // end of the main function