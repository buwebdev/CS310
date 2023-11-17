/*
    Students Name: Professor Krasso
    Date: 11/13/2023
    File Name: Ch11Exercise13.cpp
*/

#include <iostream>;
#include <iomanip>
#include <string>; 
#include <conio.h>; 
#include "savingAccount.h"; 
#include "checkingAccount.h"; 

using namespace std;

string name; 
string accountType; 
double startingBalance; 
double interestRate; 
int accountNumber; 

int main()
{
    savingAccount mySavingAccount(2.5, 1007, 15000, "John Smith"); 
    checkingAccount myCheckingAccount(3.5, 25000, 35, 1008, 25000, "Jane Doe"); 

    mySavingAccount.print();
    myCheckingAccount.print();

    /*
    cout << "\n\n  Bank One of Bellevue" << endl; 

    cout << "\n  Enter the account holder name: ";
    getline(cin, name); 
    cout << endl;

    cout << "  Enter the account type (checking or saving): "; 
    cin  >> accountType; 
    cout << endl;

    cout << "  Enter the account number: "; 
    cin  >> accountNumber; 
    cout << endl;

    cout << "  Enter the starting balance: "; 
    cin >> startingBalance;
    cout << endl;

    cout << "  Enter the interestRate: "; 
    cin  >> interestRate; 
    cout << endl; 

    

    // savingAccount myAccount(interestRate, accountNumber, startingBalance, name);

    // myAccount.print(); 

    if (accountType == "saving")
    {
        cout << "  Seleted account type is saving" << endl;
    }
    /* 
    cout << "\n  Balance: " << savingAccount.getBalance();

    savingAccount.print(); 
    
    savingAccount.deposit(1500); 

    savingAccount.print(); 

    savingAccount.withdraw(5000); 

    savingAccount.print();

    savingAccount.postInterest(); 

    savingAccount.print(); 
    */

    cout << "\n\n  Press any key to continue ..."; // display an exit message 

    _getch(); // halt processing 

    return 0; // system exit code 
}
