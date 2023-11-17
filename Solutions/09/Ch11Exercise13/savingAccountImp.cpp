/*
	Students Name: Professor Krasso
	Date: 11/13/2023
	File Name: savingAccountImp.cpp
*/

#include <iostream>; 
#include "savingAccount.h"; 

using namespace std;

void savingAccount::setInterestRate(double iRate)
{
	interestRate = iRate;
}

double savingAccount::getInterestRate()
{
	return interestRate; 
}

void savingAccount::postInterest()
{
	double acctBalance = bankAccount::getBalance();

	double interest = acctBalance * (interestRate / 100);

	bankAccount::deposit(interest);
}

void savingAccount::withdraw(double wAmt)
{
	double acctBalance = bankAccount::getBalance();

	bankAccount::withdraw(wAmt); 
}

void savingAccount::print()
{
	bankAccount::print();

	cout << "  Interest Rate: " << interestRate << "%" << endl;
}
