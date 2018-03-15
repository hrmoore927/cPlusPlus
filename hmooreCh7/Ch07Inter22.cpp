// Ch07Inter22.cpp : Calculates and displays total score and average score.
// Created by Heather Moore on 3/5/18

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// declare and initialize score, totalScore, avgScore, and numScores
	int score = 0;
	int totalScore = 0;
	double avgScore = 0.0;
	int numScores = 0;

	// user enters first score
	cout << "Please enter the first score (enter negative to end): ";
	cin >> score;

	// while score is greater than or equal to 0 AND less than or equal to 10
	while (score >= 0 && score <= 10)
	{
		// totalScore increase by score amount, numScores increases by 1, and user can enter the next score or negative to end
		totalScore += score;
		numScores++;
		cout << "Enter the next score (enter negative to end): ";
		cin >> score;
	} // end while
	
	// avgScore = totalScore divided by numScores
	avgScore = totalScore / numScores;

	// display totalScore and avgScore
	cout << "The skater's total score is " << totalScore << " and the average score is " << avgScore << endl;
    return 0;
}

