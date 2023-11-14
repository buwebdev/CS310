/*
	Students Name: Professor Krasso
	Date: 11/13/2023
	File Name: savingAccount.cpp
*/

#ifndef H_bankAccount
#define H_bankAccount

#include <iostream>; 
#include "bankAccount.h";

using namespace std;

class savingAccount : public bankAccount
{
public:
	// Constructor
	// The object is initialized acording ot the parameters
	// account number and account balance for passed to the base 
	// class bankAccount constructor. 
	// Post: interestRate = iRate; 
	savingAccount(double iRate, double aNum, double aBalance) : bankAccount(aNum, aBalance) 
	{
		interestRate = iRate; 
	}

	/* 
	void setInterestRate(double iRate); 
	// function setInterestRate
	// The private data member is set according to the 
	// parameter
	// Post: interestRate = iRate; 
	*/

	double getInterestRate(); 
	// function getInterestRate 
	// Returns the interest rate 

	void print(); 

	void postInterest(); 

	/* 
	void postInterest(); 
	// function postInterest 
	// This function calcualtes and posts the interest 
	// based on the balance and defined interest rate, 
	// which is added to the base class balance. 

	void withdraw(double wAmt); 
	// function withdraw 
	// Overrides the base class withdraw 

	void deposit(double dAmt); 
	// function deposit
	// Calls the base class deposit function
	*/
	// void print(); 
	// function print
	// Prints the saving account information on the screen.
	
private:
	double interestRate;
};

#endif 
