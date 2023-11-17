/*
	Students Name: Professor Krasso
	Date: 11/13/2023
	File Name: savingAccount.cpp
*/

#ifndef H_savingAccount
#define H_savingAccount

#include <iostream>; 
#include <string>; 
#include "bankAccount.h";

using namespace std;

class savingAccount : public bankAccount
{
public:
	savingAccount() : bankAccount()
	{
		interestRate = 0; 
	}
	// Deafult constructor 
	// 

	// Constructor
	// The object is initialized acording ot the parameters
	// account number and account balance for passed to the base 
	// class bankAccount constructor. 
	// Post: interestRate = iRate; 
	savingAccount(double iRate, int aNum, double aBalance, string name) : bankAccount(aNum, aBalance, name) 
	{
		interestRate = iRate; 
	}

	void setInterestRate(double iRate); 
	// function setInterestRate
	// The private data member is set according to the 
	// parameter
	// Post: interestRate = iRate; 

	double getInterestRate(); 
	// function getInterestRate 
	// Returns the interest rate 

	void postInterest(); 
	// function postInterest 
	// This function calcualtes and posts the interest 
	// based on the balance and defined interest rate, 
	// which is added to the base class balance. 

	void withdraw(double wAmt);
	// function withdraw
	// This function withdraws money from the 
	// bank account, which is substracted from the 
	// base class balance member.  

	void print(); 
	// function print
	// Prints the saving account information on the screen.
	
private:
	double interestRate;
};

#endif 
