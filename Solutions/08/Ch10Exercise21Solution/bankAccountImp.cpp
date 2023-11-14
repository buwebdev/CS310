
#include <iostream>
#include "bankAccount.h"
#include <iomanip>

using namespace std;

int bankAccount::num = 100;

void bankAccount::setdata(string name, string accType,
    double bal, double intRate)
{
    accountHolderName = name;
    accountType = accType;
    accountNumber = num;
    num = num + 100;
    balance = bal;
    interestRate = intRate / 100;
}

void bankAccount::deposit(double amt)
{
    balance = balance + amt;
}

void bankAccount::updateBalance()
{
    balance = balance + balance * interestRate;
}

double bankAccount::getInterest()
{
    return balance * interestRate;
}

void bankAccount::withdraw(double amt)
{
    cout << fixed << showpoint << setprecision(2);

    if (amt <= balance)
        balance = balance - amt;
    else
        cout << "Insufficeint funds. Current balance is: $" << balance << endl;
}
void bankAccount::print() const
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Account Holder Name: " << accountHolderName << endl;
    cout << "Account Type: " << accountType << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: $" << balance << endl;
    cout << "Interest Rate: " << interestRate * 100 << "%" << endl;
}

int bankAccount::getAccountNumber() const
{
    return accountNumber;
}

string bankAccount::getAccountHolderName() const
{
    return accountHolderName;
}

string bankAccount::getAccountType() const
{
    return accountType;
}

double bankAccount::getBalance() const
{
    return balance;
}

double bankAccount::getInterestRate() const
{
    return interestRate * 100;
}


bankAccount::bankAccount(string name, string accType,
    double bal, double intRate)
{
    setdata(name, accType, bal, intRate);
}