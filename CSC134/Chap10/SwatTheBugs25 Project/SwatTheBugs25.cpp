//SwatTheBugs25.cpp - displays the sum of two numbers
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

//function prototype
void calcSum(int &n1, int &n2, int n3);

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;

	calcSum(num1, num2, sum);
	cout << "Sum: " << sum << endl;
	return 0;
}	//end of main function

//*****function definitions*****
void calcSum(int &n1, int &n2, int n3)
{
	n3 = n1 + n2;
}   //end of calcSum function
