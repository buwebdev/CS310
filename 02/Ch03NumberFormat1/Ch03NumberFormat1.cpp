/*
    Students Name: Professor Krasso
    Date: 11/27/2023
    File Name: Ch03NumberFormat1.cpp
*/

#include <iostream>;
#include <conio.h>; // for _getch() 
#include <iomanip>; // for number formatting

using namespace std;

int main()
{
    double goal; // variable to hold the users input.

    cout << "\n\n  Welcome to Number Format Example 01" << endl; 

    // Prompt the user to enter their saving goal.
    cout << "\n  Enter your saving account goal: "; 
    cin  >> goal; // Accept the user intput and assign it to the goal variable.
    cout << endl;

    // format the output to two decimal places with the thousands seperator
    cout << fixed << setprecision(2); // set the decimal to two places.
    locale loc(""); // for the thousands seperator 
    cout.imbue(loc); // for the thousands seperator 

    // Display the results to the user.
    cout << "  -- SUMMARY --"; 
    cout << "\n  Saving Account Goal: " << goal;

    cout << "\n\n  Press any key to continue ...";

    _getch(); // halt processing 

    return 0; // return exit code
}
