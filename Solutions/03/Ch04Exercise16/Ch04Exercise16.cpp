/*
    Students Name: Professor Krasso
    Date: 10/30/2023
    File Name: Ch04Exercise16.cpp
*/

#include <iostream>;
#include <conio.h>;
#include <iomanip>; 

using namespace std;

const double OP_1_PAY = 25000; 
const double OP_2_RATE = .125; 
const double OP_3_RATE_BEFORE_4K = .10; 
const double OP_3_RATE_AFTER_4K = .14; 
const double COPIES_4K = 4000; 

int main()
{
    double netPrice; 
    double copies;
    double copiesOver4k;
    double copies4kPay; 
    double copiesOver4kPay; 
    double op1 = OP_1_PAY; 
    double op2; 
    double op3; 

    // Welcome message 
    cout << "\n\n  Welcome to the Royalty Application" << endl; 

    cout << "\n  Enter the net price per copy: "; 
    cin  >> netPrice; 
    cout << endl;

    cout << "  Enter the number of estimated copies: ";
    cin  >> copies;
    cout << endl; 

    // calculate the pay for option 2
    op2 = (OP_2_RATE * netPrice) * copies;

    // calculate the pay for option 3
    // If the copies are greater than 4000, the author is 
    // paid 10% for the first 4000 copies and 14% for copies over 4,000
    if (copies > COPIES_4K) 
    {
        copiesOver4k = copies - COPIES_4K; 
        copies4kPay = (OP_3_RATE_BEFORE_4K * netPrice) * COPIES_4K;
        copiesOver4kPay = (OP_3_RATE_AFTER_4K * netPrice) * copiesOver4k; 
        op3 = copiesOver4kPay + copies4kPay;
    }
    else
    {
        copies4kPay = (OP_3_RATE_BEFORE_4K * netPrice) * copies;
        op3 = copies4kPay; 
    }

    cout << fixed << setprecision(2); // set the decimal to two places
    locale loc(""); // thousand seperator 
    cout.imbue(loc); // thousand seperator 

    // Display the royalties of each option 
    cout << "\n  -- SUMMARY --"; 
    cout << "\n  Option 1 Royalties: " << op1;
    cout << "\n  Option 2 Royalties: " << op2; 
    cout << "\n  Option 3 Royalties: " << op3 << endl; 

    // Display the best royalties option
    if (op1 > op2 && op1 > op3) 
    {
        cout << "\n  Option 1 is the best choice!"; 
    } 
    else if (op2 > op1 && op2 > op3) 
    {
        cout << "\n  Option 2 is your best choice!"; 
    }
    else 
    {
        cout << "\n  Option 3 is your best choice!"; 
    }

    cout << "\n\n  Press any key to continue ...";  // ending message 

    _getch(); // halt processing 

    return 0;
}
