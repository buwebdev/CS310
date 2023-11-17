/*
	Students Name: Professor Krasso
	Date: 11/13/2023
	File Name: bankAccountImp.cpp
*/

#include <iostream>
#include <string>; 
#include "bankAccount.h";

using namespace std; 

/* 
bankAccount::bankAccount()
{
	accountNumber = 0; 
	balance = 0; 
}

bankAccount::bankAccount(int aNum, double aBal, string name)
{
	accountNumber = aNum;
	balance = aBal; 
	accountHolder = name;
}
*/

void bankAccount::setAccountNumber(int aNum)
{
	accountNumber = aNum; 
}

int bankAccount::getAccountNumber()
{
	return accountNumber;
}

double bankAccount::getBalance()
{
	return balance; 
}

void bankAccount::setAccountHolder(string name)
{
	accountHolder = name;
}

string bankAccount::getAccountHolder()
{
	return accountHolder;
}

void bankAccount::deposit(double dAmt)
{
	balance += dAmt;
}

void bankAccount::withdraw(double wAmt)
{
	balance -= wAmt;
}

void bankAccount::print()
{
	cout << "\n\n  Account Number: " << accountNumber << endl;
	cout << "  Account Holder: " << accountHolder << endl;
	cout << "  Balance: " << balance << endl;
}