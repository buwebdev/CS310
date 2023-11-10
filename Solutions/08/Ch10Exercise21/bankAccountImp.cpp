/*
	Students Name: Professor Krasso
	Date: 11/9/2023
	File Name: bankAccountImp.cpp
*/

#include "bankAccount.h";
#include <string>; 
#include <cstdlib>; // for random number generator 

using namespace std; 

// Implement the static member 
int bankAccount::generateAccountNumber()
{
	return 1000 + (rand() % 1001);
}

// Default constructor 
bankAccount::bankAccount()
{
	accountNumber = generateAccountNumber(); 
	accountHolderName = ""; 
	accountType = ""; 
	balance = 0.0; 
	interestRate = 0.0; 
}

// Parameter constructor 
bankAccount::bankAccount(string name, string type, double bal)
{
	accountNumber = generateAccountNumber(); 
	accountHolderName = name;
	accountType = type; 
	balance = bal; 

	// Checking accounts 1.25%
	// Savings accounts 2.25%
	interestRate = type == "checking" ? 1.25 : 2.25; 
}

// Show the account number
int bankAccount::getAccountNumber()
{
	return accountNumber;
}

// Show the account holders name
string bankAccount::getAccountHolderName()
{
	return accountHolderName; 
}

// Show the account type
string bankAccount::getAccountType()
{
	return accountType; 
}

// Show the account balance 
double bankAccount::getBalance()
{
	return balance;
}

// Show the interest rate
double bankAccount::getInterestRate()
{
	return interestRate; 
}

// Make a deposit 
void bankAccount::deposit(double depositAmt)
{
	balance += depositAmt;
}

// Withdraw money
void bankAccount::withdraw(double withdrawAmt)
{
	balance -= withdrawAmt;
}

// Apply interst rate to account balance 
void bankAccount::applyInterest()
{
	balance = balance + (balance * interestRate);
}