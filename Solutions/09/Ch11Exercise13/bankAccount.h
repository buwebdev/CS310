/*
	Students Name: Professor Krasso
	Date: 11/13/2023
	File Name: bankAccount.h
*/

#ifndef H_bankAccount
#define H_bankAccount

#include <iostream>; 
#include <string>; 

using namespace std;

class bankAccount
{
public:
	bankAccount(); 
	// Default Constructor 
	// The private data members are initialized

	void setBankInfo(int num, string name, string acctType, double bal); 
	// function setBankInfo
	// function to set the bank information.
	// The bank information is setting according to the parameters

	void setAccountNumber(int num); 
	// function setAccountNumber
	// The account number is set according to the incoming 
	// paraemter.
	// Post: accountNumber = aNumber;

	int getAccountNumber(); 
	// function getAccountNumber
	// Returns the account number
	// The value of the private data member accountNumber 
	// is returned.

	double getBalance();
	// function getBalance
	// Returns the account balance
	// The value of the private data member balance 
	// is returned. 

	void setAccountHolder(string name); 
	// function accoundHolder 
	// The private member is set according to the incoming parameter
	// Post: accountHolder = name; 

	string getAccountHolder();
	// function getAccountHolder
	// Returns the account holder name
	
	void deposit(double dAmt); 
	// function deposit
	// The information is set according to the incoming parameter
	// Post: balance = dAmt;

	void withdraw(double wAmt); 
	// function withdraw
	// The information is set according to the incoming parameter 
	// Post: balance = wAmt; 

	void print();
	// function print
	// Prints the bank account information on the screen.

private:
	int accountNumber; // variable to store the account number
	string accountHolder; // variable to hold the account holders name
	string accountType; // variable to hold the account type 
	double balance; // variable to store the balance 
};

#endif // !H_bankAccount