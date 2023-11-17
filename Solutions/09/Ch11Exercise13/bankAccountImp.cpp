/*
	Students Name: Professor Krasso
	Date: 11/13/2023
	File Name: bankAccountImp.cpp
*/

#include <iostream>
#include <string>; 
#include "bankAccount.h";

using namespace std; 

// Default constructor 
bankAccount::bankAccount()
{
	accountNumber = 0; 
	accountHolder = ""; 
	accountType = ""; 
	balance = 0.0;
}

// Set the bank account info 
void bankAccount::setBankInfo(int num, string name, string acctType, double bal)
{
	accountNumber = num;
	accountHolder = name;
	accountType = acctType;
	balance = bal;
}

// Set the account number 
void bankAccount::setAccountNumber(int num)
{
	accountNumber = num; 
}

// Return the account number 
int bankAccount::getAccountNumber()
{
	return accountNumber;
}

// Return the account balance
double bankAccount::getBalance()
{
	return balance; 
}

// Set the account holder name 
void bankAccount::setAccountHolder(string name)
{
	accountHolder = name;
}

// Return the account holder name 
string bankAccount::getAccountHolder()
{
	return accountHolder;
}

// Make a deposit 
void bankAccount::deposit(double dAmt)
{
	balance += dAmt;
}

// Make a withdraw 
void bankAccount::withdraw(double wAmt)
{
	balance -= wAmt;
}

// Print an account sumamry 
void bankAccount::print()
{
	// display the data on the screen 
	cout << "\n  ACCOUNT SUMMARY "
		 << "\n    Account Number: " << accountNumber
		 << "\n    Account Holder Name: " << accountHolder
		 << "\n    Account Type: " << accountType
		 << "\n    Account Balance: " << balance;
}