/*
* Students Name: Professor Krasso
* Date: 11/28/2023
* File Name: negativeNumber.h
*/

#include <string>; 

using namespace std;

class negativeNumber
{
public:
	// Default constructor.
	// Sets the private class member to a string value
	negativeNumber()
	{
		message = "Number cannot be negative"; 
	}

	// Constructor 
	// Sets the private class member according to the parmaeter
	negativeNumber(string str)
	{
		message = str + " cannot be negative"; 
	}

	// function what
	// Returns the private member value
	// Best practice when creating custom C++ exceptions
	string what()
	{
		return message;
	}

private:
	string message;
};