/*
    Students Name: Professor Krasso
    Date: 11/9/2023
    File Name: Ch10Excercise21.cpp
*/

#include <iostream>
#include <conio.h>; 
#include <iomanip>;
#include "bankAccount.h";
#include <string>; 

using namespace std;

// Constants 
const int ARRAY_SIZE = 10; 

// Variables
bankAccount accounts[ARRAY_SIZE];
int choice; 

// Function prototypes 
void configureAccounts(bankAccount accounts[]);
void menuOptions();
void displayAccounts(bankAccount accounts[]);
bankAccount findAccount(bankAccount accounts[], int acctNum);


int main()
{
    // variables 
    int accountNum; 
    double depositAmt;
    double withdrawAmt;
    bankAccount selectedAccount;

    configureAccounts(accounts); // call the configure accounts function 

    cout << "\n\n  Bank One of Omaha" << endl;

    displayAccounts(accounts); // call the display accounts function 

    // prompt the user to enter an account number 
    cout << "\n\n  Enter an account number: "; 
    cin  >> accountNum; 
    cout << endl;

    selectedAccount = findAccount(accounts, accountNum); // call the findAccount function to return the account number

    // if the interest rate is 0.0; it means the findAccount returned an empty class object (a.k.a., invalid account number)
    if (selectedAccount.getInterestRate() == 0.0)
    {
        cout << "  ERROR: Invalid account number.  Program exiting." << endl;

        cout << "\n\n  Press any key to continue ..."; 

        _getch(); // halt processing 

        return 0; // system exit code 
    }

    menuOptions(); // call the menuOptions function 

    // While the choice does not equal -1, process the users request 
    while (choice != -1)
    {
        switch (choice)
        {
        case 1:
            cout << "  Account Holder Name: " << selectedAccount.getAccountHolderName();
            break;
        case 2:
            cout << "  Account Balance: " << selectedAccount.getBalance();
            break;
        case 3:
            cout << "  Enter deposit amount: ";
            cin >> depositAmt;
            cout << "  Old Account Balance: " << selectedAccount.getBalance() << endl;

            selectedAccount.deposit(depositAmt);

            cout << "  New Account Balance: " << selectedAccount.getBalance();
            break;
        case 4:
            cout << "  Enter withdraw amount: ";
            cin >> withdrawAmt;
            cout << "  Old Account Balance: " << selectedAccount.getBalance() << endl;

            selectedAccount.withdraw(withdrawAmt);

            cout << "  New Account Balance: " << selectedAccount.getBalance();
            break;
        default:
            cout << "  Invalid selection." << endl;
        }
        
        cout << endl; // add a new line at the end of the selection 

        menuOptions(); // call the menuOptions function to display the menu options again.
    }

    cout << "\n\n  Press any key to continue ..."; 

    _getch(); // halt processing 

    return 0; // system exit code
}

// Function to add 10 bank account class objects to the accounts array 
void configureAccounts(bankAccount accounts[])
{
    accounts[0] = bankAccount("Ludwig van Beethoven", "checking", 3500);
    accounts[1] = bankAccount("Johann Sebastian Bach", "checking", 15500);
    accounts[2] = bankAccount("Wolfgang Amadeus Mozart", "savings", 32350.86);
    accounts[3] = bankAccount("Johannes Brahms", "savings", 1244.86);
    accounts[4] = bankAccount("Richard Wagner", "checking", 1200.33);
    accounts[5] = bankAccount("Claude Debussy", "savings", 112355.99);
    accounts[6] = bankAccount("Pyotr Ilyich Tchaikovsky", "checking", 905.33);
    accounts[7] = bankAccount("Frederic Chopin", "checking", 3500);
    accounts[8] = bankAccount("Joseph Haydn", "savings", 32000);
    accounts[9] = bankAccount("Antonio Vivaldi", "checking", 4200);
}

// Function to find a selected account from the accounts array 
bankAccount findAccount(bankAccount accounts[], int acctNum)
{
    bankAccount selAccount; 

    // Loop over the accounts array 
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        // if the account number matchesd the acctNum argument
        // return the account class object.
        if (accounts[i].getAccountNumber() == acctNum)
        {
            selAccount = accounts[i];
            return selAccount;  
        }
    }

    return selAccount; // return an empty class object if no account is selected
}

// Function to display a list of account class objects
void displayAccounts(bankAccount accounts[])
{
    bankAccount account; // account class object variable 
    string accountList = ""; // string to hold account list

    cout << "\n  Displaying Open Accounts" << endl; // display message 

    // Iterate over the accounts array and output the results
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        accountList.append(to_string(accounts[i].getAccountNumber()) + ", ");
    }

    cout << "  " << accountList.substr(0, accountList.size() -2); // remove the last two characters from the string value
}

// Function to display the menu options 
void menuOptions()
{
    cout << "\n  Menu Options" << endl;
    cout << "    1  Account Holder Name" << endl;
    cout << "    2  Account Balance" << endl;
    cout << "    3  Deposit" << endl;
    cout << "    4  Withdraw" << endl;
    cout << "   -1  Terminate the Program.         ->       ";
    cin >> choice;
    cout << endl;
}
