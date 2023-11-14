/*
	Students Name: Professor Krasso
	Date: 11/13/2023
	File Name: checkingAccount.h
*/

#include <iostream>; 
#include "bankAccount.h"; 

using namespace std;

class checkingAccount : public bankAccount
{
private:
	double interest; // variable to hold interest
	double minBalance; // variable for minimum balance 
	double serviceCharge; // variable for service charge
};
