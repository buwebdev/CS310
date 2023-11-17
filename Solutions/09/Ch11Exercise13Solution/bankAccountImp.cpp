
//Implementation file bankAccountImp.cpp

#include <iostream>
#include <iomanip>
#include "bankAccount.h"

using namespace std;

bankAccount::bankAccount(int acctNumber, double bal)
{
    accountNumber = acctNumber;
    balance = bal;
}

void bankAccount::setAccountNumber(int acct)
{
    accountNumber = acct;
}

int bankAccount::getAccountNumber() const
{
    return accountNumber;
}

double bankAccount::getBalance() const
{
    return balance;
}

void bankAccount::withdraw(double amount)
{
    balance = balance - amount;
}

void bankAccount::deposit(double amount)
{
    balance = balance + amount;
}

void bankAccount::print() const
{
    cout << fixed << setprecision(2);
    cout << accountNumber << " balance : $"
        << balance << endl;
}
