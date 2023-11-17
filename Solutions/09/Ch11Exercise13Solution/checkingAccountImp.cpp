
//Implementation file checkingAccountImp.cpp

#include <iostream>
#include <iomanip>
#include "checkingAccount.h"

using namespace std;

checkingAccount::checkingAccount(int acctNumber, double bal,
    double minBal, double intRate, double servC)
    : bankAccount(acctNumber, bal)
{
    interestRate = intRate;
    minimumBalance = minBal;
    serviceCharge = servC;
}

double checkingAccount::getMinimumBalance() const
{
    return minimumBalance;
}

void checkingAccount::setMinimumBalance(double minBalance)
{
    minimumBalance = minBalance;
}

double checkingAccount::getInterestRate() const
{
    return interestRate;
}

void checkingAccount::setInterestRate(double intRate)
{
    interestRate = intRate;
}

double checkingAccount::getServiceCharge() const
{
    return serviceCharge;
}

void checkingAccount::setServiceCharge(double servC)
{
    serviceCharge = servC;
}

void checkingAccount::postInterest()
{
    balance = balance + balance * interestRate;
}

bool checkingAccount::verifyMinimumumBalance(double amount)
{
    return (balance - amount >= minimumBalance);
}

void checkingAccount::writeCheck(double amount)
{
    withdraw(amount);
}

void checkingAccount::withdraw(double amount)
{
    if (balance - amount < 0)
        cout << "Not enough money in the account." << endl;
    else if (balance - amount < minimumBalance)
    {
        if (balance - amount - serviceCharge < minimumBalance)
        {
            cout << "After this transaction, the balanace will be "
                << "below the minimum balance." << endl
                << "However account does not have enough money "
                << "to process the transaction and apply service charge." << endl
                << "Transaction denied!" << endl;
        }
        else
        {
            cout << "After this transaction, the balanace will be "
                << "below the minimum balance." << endl
                << "Service charges will apply." << endl;

            balance = balance - amount - serviceCharge;
        }
    }
    else
        balance = balance - amount;
}

void checkingAccount::print() const
{
    cout << fixed << setprecision(2);
    cout << "Interest Checking ACCT#:\t" << getAccountNumber()
        << "\tBalance: $" << getBalance() << endl;
}