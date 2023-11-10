/*
	Students Name: Professor Krasso
	Date: 11/9/2023
	File Name: bankAccount.h
*/

#include <string>; 

using namespace std;

class bankAccount
{
public:
	// Constructors 
	bankAccount(); 
	bankAccount(string name, string type, double bal); 

	static int generateAccountNumber(); // static member 

	// Class member function prototypes 
	int getAccountNumber(); 
	string getAccountHolderName(); 
	string getAccountType(); 
	double getBalance();
	double getInterestRate(); 
	void deposit(double depostAmt); 
	void withdraw(double withdrawAmt); 
	void applyInterest();

private:
	// class members 
	int accountNumber; 
	string accountHolderName; 
	string accountType; 
	double balance;
	double interestRate; 
};