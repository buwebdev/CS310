/*
    Student Name: Professor Krasso
    Date: 10/30/2023
    File Name: Ch03Exercise3.cpp
*/

#include <iostream>
#include <conio.h>; 
#include <iomanip>;

using namespace std;

const double POUND_IN_KILO = 2.2;

int main()
{
    // Variables 
    double kilos; 
    double pounds;

    // Welcome message
    cout << "\n\n  Welcome to the Weight Converter Application" << endl; 

    // Prompt the user to enter their weight in kilograms.
    cout << "\n  Enter your weight in kilograms: ";
    cin  >> kilos;
    cout << endl;

    pounds = kilos * POUND_IN_KILO; // convert the weight to pounds.

    cout << fixed << setprecision(2); // set the decimal percision to 2 places. 

    // Display the results 
    cout << "  -- SUMMARY --";
    cout << "\n  Kilograms: " << kilos; 
    cout << "\n  Pounds: " << pounds << endl; // conver
    
    cout << "\n\n  Press any key to continue ..."; 

    _getch(); // halt processing 

    return 0;
}
