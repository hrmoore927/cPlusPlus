//Introductory15.cpp - number guessing game
//Created/revised by Heather Moore on 3/28/18

#include <iostream>
#include <ctime>
//#include <cstdlib>
using namespace std;

void randomNum(int &upper, int &lower, int &number);

int main()
{
	int randomNumber = 0;
	int numberGuess = 0;
    int minNum = 0;
    int maxNum = 0;

    //user enter minium number
    cout << "Please enter the minimum random number: ";
    cin >> minNum;
    //user enter maxium number
	cout << "Please enter the maximum random number: ";
    cin >> maxNum;

    //random number is generated
    randomNum(maxNum, minNum, randomNumber);
	//get first guess from user
	cout << "Guess a number from " << minNum << " through " << maxNum << ": ";
	cin >> numberGuess;

    //while guess is wrong
	while (numberGuess != randomNumber)
	{
		cout << "Sorry, guess again: ";
		cin >> numberGuess;
	}	//end while

    //if guess if right
	cout << endl << "Yes, the number is "
		<< randomNumber << "." << endl;
	return 0;
}   //end of main function


//function
void randomNum(int &upper, int &lower, int &number) {
    srand(static_cast<int>(time(0)));
	number = lower + rand() % (upper - lower + 1);
}