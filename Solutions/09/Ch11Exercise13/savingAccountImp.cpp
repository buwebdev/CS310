/*
	Students Name: Professor Krasso
	Date: 11/13/2023
	File Name: savingAccountImp.cpp
*/

#include <iostream>; 
#include "savingAccount.h"; 
#include <string>;

using namespace std;

void savingAccount::print()
{
	bankAccount::print(); 

	double balance = bankAccount::getBalance(); 

	cout << "  Interest Rate: " << interestRate << "%" << endl;
}

/* 
void savingAccount::setInterestRate(double iRate)
{
	interestRate = iRate; 
}

double savingAccount::getInterestRate()
{
	return interestRate; 
}

void savingAccount::withdraw(double wAmt)
{
	bankAccount::withdraw(wAmt); 
}
*/ 
void savingAccount::postInterest()
{
	double acctBalance = bankAccount::getBalance(); 

	double interest = acctBalance * (interestRate / 100); 

	bankAccount::withdraw(interest); 
}

