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

// const variables 
const string SAVING = "saving"; 
const string CHECKING = "checking"; 

// global variables 
int choice = 0; 
int subChoice = 0; 
char discard; 
checkingAccount myCheckingAccount; 
savingAccount mySavingAccount; 

// protptypes 
void menuDisplay(); 
void subMenuDisplay(string acctType); 
void addCustomer(string acctType);
void processRequest(string acctType); 

int main()
{
    menuDisplay(); 

    while (choice != -1)
    {
        int customerCount = 0; 

        switch (choice)
        {
            case 1: 
                addCustomer(CHECKING);
                subMenuDisplay(CHECKING); 
                processRequest(CHECKING); 
                break;
            case 2: 
                addCustomer(SAVING);
                subMenuDisplay(SAVING); 
                processRequest(SAVING);
                break;
            default:
                cout << "\n  Invalid choice. Please try again." << endl;
        }

        menuDisplay(); 
    }

    cout << "\n\n  Press any key to continue ...";

    _getch(); // halt processing   

    return 0; 
}

void menuDisplay()
{
    // display menu to user
    cout << "\n  MENU OPTIONS "
         << "\n    1.  Checking "
         << "\n    2.  Saving "
         << "\n   -1.  To exit " << endl;

    cout << "\n  Please choose an option:    ";

    cin >> choice; // captures the users choice 

    cin.get(discard); 
}

void addCustomer(string acctType)
{
    string name; 
    int accountNum; 
    double bal; 
    double intRate; 
    double minBal; 
    double servCharge; 

    cout << "\n  Enter customer's name: ";
    getline(cin, name);
    cout << endl;

    cout << "  Enter account number: ";
    cin >> accountNum;
    cout << endl;

    cout << "  Enter the starting balance: ";
    cin >> bal;
    cout << endl;

    cout << "  Enter interest rate (as a percet): ";
    cin >> intRate;
    cout << endl;

    if (acctType == CHECKING)
    {
        cout << "  Enter the minimum balance: ";
        cin >> minBal;
        cout << endl;

        cout << "  Enter service charge: ";
        cin >> servCharge;
        cout << endl;

        // create a new checking account class object 
        myCheckingAccount.setInfo(accountNum, name, acctType, bal, intRate, minBal, servCharge); 
    }
    else if (acctType == SAVING)
    {
        mySavingAccount.setInfo(accountNum, name, acctType, bal, intRate); 
    }
    else
    {
        cout << "\n  Invalid account type. Unable to process your request" << endl;
    }
}

void subMenuDisplay(string acctType)
{
    // display sub menu to user 
    cout << "\n  SUB MENU OPTIONS "
         << "\n    1.  Deposit "
         << "\n    2.  Withdraw "
         << "\n    3.  Balance ";

    // if account type is checking show the option to 
    // write a check 
    if (acctType == CHECKING)
    {
        cout << "\n    4.  Write Check ";
    }

    // display the remaining options to the user 
    cout << "\n    5.  Post interest "
         << "\n    6.  Interest rate "
         << "\n    7.  Print "
         << "\n   -1.  To return ";

    cout << "\n  Please choose an option:    ";

    cin >> subChoice; // capture the users choice 
}

void processRequest(string acctType)
{
    bool isChecking = acctType == CHECKING ? true : false;

    double depositAmt;
    double withdrawAmt;
    double checkAmt;
    string output; 

    while (subChoice != -1)
    {
        switch (subChoice)
        {
        case 1:
            cout << "\n  Enter the deposit amount: ";
            cin  >> depositAmt;
            if (isChecking)
                myCheckingAccount.deposit(depositAmt);
            else
                mySavingAccount.deposit(depositAmt);
            break;
        case 2:
            cout << "\n  Enter the withdrawn amount: "; 
            cin  >> withdrawAmt;
            if (isChecking)
                myCheckingAccount.withdraw(withdrawAmt);
            else
                mySavingAccount.withdraw(withdrawAmt); 
            break;
        case 3:
            output = "\n  Your current balance is: "; 
            if (isChecking)
                cout << output << myCheckingAccount.getBalance() << endl;
            else
                cout << output << mySavingAccount.getBalance() << endl;
            break;
        case 4:
            if (isChecking)
            {
                cout << "\n  Enter the check amount: "; 
                cin  >> checkAmt; 
                myCheckingAccount.writeCheck(checkAmt); 
            }
            else 
            {
                cout << "\n  Invalid selection. Saving account does not support check writing." << endl;
            }
            break;
        case 5:
            if (isChecking)
                myCheckingAccount.postInterest();
            else
                mySavingAccount.postInterest(); 
            break;
        case 6:
            output = "\n  Your interest rate is: ";
            if (isChecking)
                cout << output << myCheckingAccount.getInterestRate() << endl;
            else
                cout << output << mySavingAccount.getInterestRate() << endl;
            break;
        case 7:
            if (isChecking)
                myCheckingAccount.print();
            else
                mySavingAccount.print();
            break;
        default:
            cout << "\n  Invalid selection." << endl;
        }

        if (isChecking)
            subMenuDisplay(CHECKING);
        else
            subMenuDisplay(SAVING);
    }
}
