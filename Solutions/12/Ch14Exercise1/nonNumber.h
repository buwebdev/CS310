/*
* Students Name: Professor Krasso
* Date: 11/28/2023
* File Name: nonNumber.h
*/

#include <string>; 

using namespace std;

class nonNumber
{
public:
	// Default constructor.
	// Sets the private class member to a string value
	nonNumber()
	{
		message = "Input must be a number";
	}

	// Constructor 
	// Sets the private class member according to the parmaeter
	nonNumber(string str)
	{
		message = str + " must be a number";
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