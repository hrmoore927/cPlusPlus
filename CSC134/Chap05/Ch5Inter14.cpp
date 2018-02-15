#include <iostream>
using namespace std;

int main()
{
	int age = 0;
	int weight = 0;
	double height = 0.0;
	char gender = ' ';
	double bmr = 0.0;
	
	
	cout << "Enter the age: ";
	cin >> age;
	cout << "Enter the weight in pounds: ";
	cin >> weight;
	cout << "Enter the height in feet: ";
	cin >> height;
	cout << "Enter gender (M or F): ";
	cin >> gender;
	
	weight *= .45;
	height *= 30.48;
	if (gender == 'M') {
		bmr = (10 *weight) + (6.25 * height) - (5* age) + 5;
	}
	else {
		bmr = (10 *weight) + (6.25 * height) - (5* age) - 161;
	}
	
	cout << "BMR = " << bmr << endl;
	return 0;
}