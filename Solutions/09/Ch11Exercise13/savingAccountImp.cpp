/*
	Students Name: Professor Krasso
	Date: 11/13/2023
	File Name: savingAccountImp.cpp
*/

#include <iostream>; 
#include "savingAccount.h"; 
#include "bankAccount.h"; 

using namespace std;

savingAccount::savingAccount()
{
	interestRate = 0.0; 
}

// Set the saving account information 
void savingAccount::setInfo(int num, string name, string acctType, double bal, double intRate)
{
	bankAccount::setBankInfo(num, name, acctType, bal);
	interestRate = intRate; 
}

// Set the interest rate 
void savingAccount::setInterestRate(double intRate)
{
	interestRate = intRate; 
}

// Return the interest rate 
double savingAccount::getInterestRate()
{
	return interestRate; 
}

// Post the interest earned 
void savingAccount::postInterest()
{
	double acctBalance = bankAccount::getBalance(); // get account balance 

	double interest = acctBalance * (interestRate / 100); // calculate interest 

	bankAccount::deposit(interest); // deposit the earned interest 
}

// Make a withdraw (overrides the base class member function)
void savingAccount::withdraw(double wAmt)
{
	double balance = bankAccount::getBalance(); // get the account balance

	// if the balance is less than the withdraw amt, 
	// post an error for the user 
	if (balance < wAmt)
	{
		cout << "\n  Insufficient funds." << endl;
	}
	else
	{
		bankAccount::withdraw(wAmt); // withdraw the request amount
	}
}

// Print the account information 
void savingAccount::print()
{
	bankAccount::print(); /// call the base class print function 

	cout << "\n    Interest Rate: " << interestRate << "%" << endl;
}
