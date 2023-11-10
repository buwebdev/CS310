/*
    Students Name: Professor Krasso
    Date: 11/9/2023
    File Name: Ch10Example1.cpp
*/

#include <iostream>
#include <conio.h>; 
#include <string>; 
#include <iomanip>; 
#include "fruitVendor.h";

// Variables 
double fruitQty; 
double fruitPrice; 
double oTotal; 

using namespace std;

int main()
{
    fruitVendor vendor; // create a class object 

    cout << "\n\n  Classes Example 1" << endl; // display program header

    // Prompt the user to enter the fruit qty
    cout << "\n  Enter fruit qty: "; 
    cin  >> fruitQty; 
    cout << endl;

    // Prompt the user to enter the fruit price 
    cout << "  Enter the fruit price: "; 
    cin  >> fruitPrice; 
    cout << endl; 

    oTotal = vendor.orderTotal(fruitQty, fruitPrice); // call the class objects function member

    cout << fixed << setprecision(2); // set the fixed decimal places to 2

    cout << "  Your order total is " << oTotal << endl; // display the total 

    cout << "\n\n  Press any key to continue ..."; // exit message 

    _getch(); // halt processing 

    return 0; // system exit code
}
