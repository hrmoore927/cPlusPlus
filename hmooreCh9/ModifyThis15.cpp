//ModifyThis15.cpp - number guessing game
//Created/revised by Heather Moore on 3/26/18

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int randomNumber = 0;
	int numberGuess = 0;
    int wrong = 0;

	//generate a random number from 1 through 10
	srand(static_cast<int>(time(0)));
	randomNumber = 1 + rand() % (10 - 1 + 1);

    //get first guess from user
    cout << "Guess a number from 1 through 10: ";
    cin >> numberGuess;

    //while the number guessed is not the random number and less than 4 tries
    while (numberGuess != randomNumber && wrong < 4) {
        wrong +=1;
        cout << "Sorry, guess again: ";
        cin >> numberGuess; 
    }
    //if the amount of tries is equal to 4
    if (wrong == 4) {
        cout << endl << "The correct number was " << randomNumber << "." << endl;
    } else {
        cout << endl << "Yes, the number is "
        << randomNumber << "." << endl;
    }
        
    return 0;
	
}   //end of main function