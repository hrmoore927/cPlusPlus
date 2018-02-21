// pies.cpp displays the total number of pies sold and shows the percentage for each size of pie
// Created by Heather Moore on 2/21/18

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // declare and initialize number of different types of pies, percentages, and total number of pies
    double small = 0.0;
    double medium = 0.0;
    double large = 0.0;
    double family = 0.0;
    double smallPercent = 0.0;
    double mediumPercent = 0.0;
    double largePercent = 0.0;
    double familyPercent = 0.0;
    int numPies = 0;
    
    // input number of different types of pies and set one decimal point
    cout << "Please enter the number of small pies sold: ";
    cin >> small;
    cout << "Please enter the number of medium pies sold: ";
    cin >> medium;
    cout << "Please enter the number of large pies sold: ";
    cin >> large;
    cout << "Please enter the number of family pies sold: ";
    cin >> family;
    cout << fixed << setprecision(1) << endl;
    
    // calculate total number of pies
    numPies = small + medium + large + family;
    
    // find percentage of different types of pies
    smallPercent = (small / numPies) * 100;
    mediumPercent = (medium / numPies) * 100;
    largePercent = (large / numPies) * 100;
    familyPercent = (family / numPies) * 100;
    
    // display total pies sold and percentages of different types of pies
    cout << "Total number of pies sold: " << numPies << endl;
    cout << "Small Percentage: " << smallPercent << "%" << endl;
    cout << "Medium Percentage: " << mediumPercent << "%" << endl;
    cout << "Large Percentage: " << largePercent << "%" << endl;
    cout << "Family Percentage: " << familyPercent << "%" << endl;
    
    return 0;
    // end of main function
}