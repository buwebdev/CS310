/*
    Students Name: Professor Krasso
    Date: 10/30/2023
    File Name: Ch03Exercise7
*/

#include <iostream>;
#include <conio.h>; // needed for _getch() method 
#include <iomanip>; // needed for decimal formatting 

using namespace std;

int main()
{
    // Variables
    double netBalance; 
    double payment; 
    double billingCycleDays; 
    double paymentMadeBeforeCycle; 
    double averageDailyBalance; 
    double interestPerMonth; 
    double interest; 

    // Dispaly the welcome message to users
    cout << "\n\n  Welcome to the Interest Calculator";

    // Capture the net balance 
    cout << "\n\n  Enter the net balance: "; 
    cin  >> netBalance; 
    cout << endl; 

    // Capture the payment amount 
    cout << "  Enter your payment: "; 
    cin  >> payment;
    cout << endl;

    // Capture the billing cycle days 
    cout << "  Enter the number of days in the billing cycle: "; 
    cin  >> billingCycleDays; 
    cout << endl;

    // Capture the number of days the payment was made before the billing cycle
    cout << "  Enter the number of days the payment was made before billing cycle: ";
    cin  >> paymentMadeBeforeCycle; 
    cout << endl; 

    //  Capture the interest rate per month 
    cout << "  Enter the interest rate per month: "; 
    cin  >> interestPerMonth; 
    cout << endl; 

    // calculate the average daily balance 
    averageDailyBalance = ((netBalance * billingCycleDays) - (payment * paymentMadeBeforeCycle)) / billingCycleDays; 

    // calculate the interest rate 
    interest = averageDailyBalance * (interestPerMonth / 100);

    cout << fixed << setprecision(2); // set the decimal to two palces
    locale loc(""); // for the thousands separator
    cout.imbue(loc); // for the thousands separator 

    cout << "\n  -- SUMMARY --"; 
    cout << "\n  Interest: " << interest; // display the interest amount 

    cout << "\n\n  Press any key to continue ...";  // display a closing message 
     
    _getch(); // halt processing 

    return 0; // exit the program 
}
