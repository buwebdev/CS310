/*
	Students Name: Professor Krasso
	Date: 11/13/2023
	File Name: bankAccount.h
*/

#include <iostream>; 
#include <string>; 

using namespace std;

class bankAccount
{
public:
	bankAccount();
	// Default constructor 

	bankAccount(int aNumber, double aBalance); 
	// Constructor
	// The object is initialized acording ot the parameters
	// Post: accountNumber = aNumber; balance = aBalance; 

	void setAccountNumber(int aNumber); 
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
	double balance; // variable to store the balance 
};

