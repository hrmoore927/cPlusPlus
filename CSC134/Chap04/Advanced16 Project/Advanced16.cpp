//Advanced16.cpp
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare constant and variables
	const double increase = 1.05;
	double store1 = 0.0;
	double store2 = 0.0;
	double total  = 0.0;

	cout << "Store 1 sales: ";
	cin >> store1;
	cout << "Store 2 sales: ";
	cin >> store2;

	store1 = store1 * increase;
	store2 = store2 * increase;
	total = store1 + store2;

	cout << fixed << setprecision(2) << endl;
	cout << store1 << " --->Store 1" << endl;
	cout << store2 << " --->Store 2" << endl;
	cout << "-----------------" << endl;
	cout << total << " --->Total" << endl;
	
	return 0;
}	//end of main function

//1.  Declare and initalize three int variables named store1Int, store2Int, and totalInt
//2.  Change the first assignment statement to store1Int = static_cast<int>(store1 * increase * 100 + .5);
//3.  Change the second assignment statement to store2Int = static_cast<int>(store2 * increase * 100 + .5);
//4.  Change the third assignment statement to totalInt = store1Int + store2Int;
//5.  Change store1 in the second cout statement to store1Int / 100.0
//6.  Change store2 in the third cout statement to store2Int / 100.0
//7.  Change total in the last cout statement to totalInt / 100.0