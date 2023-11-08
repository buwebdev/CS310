/* 
    Students Name: Professor Krasso
    Date: 11/07/2023
    File Name: Ch06Exercise14.cpp
*/

#include <iostream>;
#include <conio.h>;
#include <string>; 
#include <iomanip>; 

using namespace std; 

// Variables 
double hourlyRate; 
double consultTime; 
string isLowIncome; 

// Constants 
int LOW_INCOME = 25000;
double LOW_INCOME_SRV_CHRG = .40; 
double SRV_CHRG = .70; 


// Function prototypes
double calcBillingAmt(double rate, double time, string lowIncome); 
void showMenu(); 

int main()
{
    double billingTotal; 

    // Display a welcome message to the user 
    cout << "\n\n  Welcome to J&J Accounting Firm" << endl; 

    showMenu(); // Call the showMenu() function

    billingTotal = calcBillingAmt(hourlyRate, consultTime, isLowIncome); 

    locale loc(""); 
    cout.imbue(loc); 
    cout << fixed << showpoint << setprecision(2); // for number formatting

    cout << "\n  Your billing total is $" << billingTotal << endl;

    cout << "\n\n  Press any key to continue ..."; // prompt the user to exit the program 

    _getch(); // halt processing 

    return 0; // exit code
}

void showMenu() 
{
    // Prompt the user to enter an hourly rate.
    cout << "\n  Enter the hourly rate: ";
    cin >> hourlyRate;
    cout << endl;

    // Prompt the user to enter the total consulting time in minutes.
    cout << "  Enter the total consulting time in minutes: ";
    cin >> consultTime;
    cout << endl;

    cout << "  Was your yearly income $25,000 or less?\n    Enter <yes> or <no>: ";
    cin >> isLowIncome;
    cout << endl;
}

double calcBillingAmt(double rate, double time, string lowIncome) 
{
    // Local variables
    double billableTime; 
    double billingAmt;
    bool isLowIncomeAndFree = time <= 30; 
    bool isFree = time <= 20; 

    // If lowIncome is selected and it is billable hours, calculate the billing amount
    if (lowIncome == "yes" && !isLowIncomeAndFree)
    {
        billableTime = time - 30; 

        billingAmt = rate * LOW_INCOME_SRV_CHRG * (billableTime / 60); 

        return billingAmt; 
    }
    // If low income is selected, but its less than the required billable hours, 
    // it is free. 
    else if (lowIncome == "yes" && isLowIncomeAndFree) 
    {
        return 0; 
    }
    // If low income is not selected and it is billable hours, calculate the billing amount
    else if (lowIncome == "no" && !isFree)
    {
        billableTime = time - 20; 

        billingAmt = rate * SRV_CHRG * (billableTime / 60); 

        return billingAmt; 
    }
    // If low income is not selected, but its less than the required billing hours,
    // it is free.
    else if (lowIncome == "no" && isFree)
    {
        return 0; 
    }
    // if the value of low income is not <yes> or <no> return 0 for the value
    else
    {
        return 0; 
    }
}
