/*
	Studens Name: Professor Krasso
	Date: 11/16/2023
	File Name: checkingAccountImp.cpp
*/

#include <iostream>; 
#include "checkingAccount.h";
#include "bankAccount.h";

using namespace std;

// Default constructor with initialized data members
checkingAccount::checkingAccount()
{
	interestRate = 0.0;
	minBalance = 0.0;
	serviceCharge = 0.0; 
}

// function sets the data for the class object 
void checkingAccount::setInfo(int num, string name, string acctType, double bal, double intRate, double mBal, double servCharge)
{
	bankAccount::setBankInfo(num, name, acctType, bal); 
	interestRate = intRate;
	minBalance = mBal;
	serviceCharge = servCharge;
}

// Function to set the checking account interest rate 
void checkingAccount::setInterestRate(double intRate)
{
	interestRate = intRate; 
}

// Returns the interest rate
double checkingAccount::getInterestRate()
{
	return interestRate; 
}

// Sets the minimum balance for the checking account
void checkingAccount::setMinBalance(double mBal)
{
	minBalance = mBal;
}

// Returns the checking accounts minimum balance
double checkingAccount::getMinBalance()
{
	return minBalance;
}

// Set the service charge for the checking account
void checkingAccount::setServiceCharge(double servCharge)
{
	serviceCharge = servCharge;
}

// Returns the checking account service charge for balances 
// that fall lower than the minimum balance
double checkingAccount::getServiceCharge()
{
	return serviceCharge; 
}

// Posts the interest earned; based on the checking account 
// balance and set interest rate 
void checkingAccount::postInterest()
{
	double balance = bankAccount::getBalance(); // get the account balance 

	double interestAmt = (interestRate / 100) * balance; // calculate the earned interest 

	bankAccount::deposit(interestAmt); // add the earned interest to the account by deposting it
}

// Verify whether the balance is less than the minimum allowable balance
bool checkingAccount::verifyMinBalance()
{
	double balance = bankAccount::getBalance(); // get the account balance 

	return balance < getMinBalance(); // return true or false
}

// Withdraw the money according to the parameter check amount.
// Also, checks if the minimum balance is maintained; otherwise, a service 
// charge is applied to the account
void checkingAccount::writeCheck(double checkAmt)
{
	double balance = bankAccount::getBalance(); // get the account balance 

	if (balance < checkAmt)
	{
		cout << "\n  Insufficient funds." << endl; 
	}
	else  
	{
		bankAccount::withdraw(checkAmt); 

		balance = bankAccount::getBalance(); // get the new balance 

		// if the balance is less than the minimum balance
		// the account gets charged a service fee
		if (balance < getMinBalance())
		{
			bankAccount::withdraw(getServiceCharge()); // appy the service charge to the balance of the account
		}
	}
}

// witdrawns money from the checking account 
void checkingAccount::withdraw(double wAmt)
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

		balance = bankAccount::getBalance(); // get the new balance 

		// if the balance is less than the minimum balance 
		// the account gets charged a service fee 
		if (balance < getMinBalance())
		{
			bankAccount::withdraw(getServiceCharge()); // apply the service charge to the blance of the account
		}
	}
}

// Prints the checking account information on the screen
void checkingAccount::print()
{
	bankAccount::print(); // call the print function from the base class

	cout << "\n    Interest Rate: " << interestRate << "%"
		 << "\n    Minimum Balance: " << minBalance
		 << "\n    Service Charge: " << serviceCharge << endl;
}
