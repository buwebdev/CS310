/*
	Students Name: Professor Krasso
	Date: 11/13/2023
	File Name: checkingAccount.h
*/

#ifndef H_checkingAccount
#define H_checkingAccount

#include <iostream>; 
#include <string>; 
#include "bankAccount.h"; 

using namespace std;

class checkingAccount: public bankAccount
{
public:
	checkingAccount();
	// Default constructor 

	void setInfo(int num, string name, string acctType, double bal, double intRate, double mBal, double servCharge); 
	// function setInfo
	// Sets the checking account information according to the parameters

	void setInterestRate(double intRate); 
	// function setInterestRate
	// The private data member is set according to the 
	// paraemter 
	// Post: interestRate = iRate; 

	double getInterestRate(); 
	// function getInterestRate
	// Returns the interest rate for a checking account

	void setMinBalance(double mBal); 
	// function setMinBalance
	// The private data membrer is set according to the 
	// parameter 
	// Post: minBalance = mBalance; 

	double getMinBalance(); 
	// function getMinBalance 
	// Returns the minimum balance

	void setServiceCharge(double servCharge); 
	// function setServiceCharge
	// The private data member is set according to the 
	// parameter
	// Post: serviceCharge = servCharge; 

	double getServiceCharge(); 
	// function getServiceCharge
	// Returns the service charge 

	void postInterest();
	// function postInterest
	// This function calculates and posts the interest
	// based on the balance and defined interest rate, 
	// which is added to the base class balance

	bool verifyMinBalance();
	// function verifyMinBalance
	// This function verifies whether the balance is less than 
	// the minimum allowable balance. 

	void writeCheck(double checkAmt); 
	// function writeCheck
	// This function withdraws money according to the 
	// parameter.  

	void withdraw(double wAmt);
	// function withdraw
	// This function withdraws money according to the 
	// parameter.

	void print(); 
	// function print
	// Prints the checking account information on the screen.

private:
	double interestRate; // variable to hold interest
	double minBalance; // variable for minimum balance 
	double serviceCharge; // variable for service charge
};

#endif