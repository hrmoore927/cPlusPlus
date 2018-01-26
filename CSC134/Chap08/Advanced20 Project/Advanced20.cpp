//Advanced20.cpp - displays a pattern of asterisks
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	for (int outer = 2; outer < 11; outer += 2)
	{
		for (int nested = 1; nested <= outer; nested += 1)
			cout << '*';
		//end for
		cout << endl;
	}	//end for
	return 0;
}	//end of main function