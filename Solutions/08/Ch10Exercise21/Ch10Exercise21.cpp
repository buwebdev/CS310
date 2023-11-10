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

// Function prototypes 
void configureAccounts(bankAccount accounts[]);
void menuOptions(bankAccount accounts[]);
bankAccount findAccount(bankAccount accounts[], int acctNum);

int main()
{
    configureAccounts(accounts); // call the configure accounts function 

    cout << "\n\n  Bank One of Omaha" << endl;

    menuOptions(accounts);

    cout << "\n\n  Press any key to continue ..."; 

    _getch(); // halt processing 

    return 0; // system exit code
}

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

bankAccount findAccount(bankAccount accounts[], int acctNum)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (accounts[i].getAccountNumber() == acctNum)
        {
            return accounts[i]; 
        }
    }
}

void menuOptions(bankAccount accounts[])
{
    int accountNum; 
    int choice; 
    double depositAmount; 
    double withdrawnAmount; 
    bankAccount account;
    bankAccount selectedAccount;

    cout << "\n  Displaying Open Accounts" << endl; 

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        account = accounts[i];

        cout << "\n  Account Number: " << account.getAccountNumber() << endl;
        cout << "  Accound Holder Name: " << account.getAccountHolderName() << endl;
    }

    cout << "\n  Enter an account number: "; 
    cin  >> accountNum; 
    cout << endl; 

    selectedAccount = findAccount(accounts, accountNum); 

    cout << "\n  MENU OPTIONS" << endl;
    cout << "  1. Account Holder Name" << endl;
    cout << "  2. Account Number" << endl;
    cout << "  3. Account Balance" << endl;
    cout << "  4. Deposit" << endl;
    cout << "  5. Withdraw" << endl;
    cin  >> choice; 
    cout << endl; 

    switch (choice)
    {
        case 1: 
            cout << "  Account Holder Name: " << selectedAccount.getAccountHolderName(); 
            break;
        case 2: 
            cout << "  Account Number: " << selectedAccount.getAccountNumber(); 
            break;
        case 3: 
            cout << "  Account Balance: " << selectedAccount.getBalance(); 
            break;
        case 4:
            cout << "  Enter deposit amount: ";
            cin >> depositAmount; 
            cout << "  Old Account Balance: " << selectedAccount.getBalance() << endl;

            selectedAccount.deposit(depositAmount); 

            cout << "  New Account Balance: " << selectedAccount.getBalance(); 
            break;
        case 5:
            cout << "  Enter withdraw amount: ";
            cin >> withdrawnAmount; 
            cout << "  Old Account Balance: " << selectedAccount.getBalance() << endl;

            selectedAccount.withdraw(withdrawnAmount); 

            cout << "  New Account Balance: " << selectedAccount.getBalance(); 
            break;
        default:
            cout << "  Invalid selection" << endl;
    }
}
