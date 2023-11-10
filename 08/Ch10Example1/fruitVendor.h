/*
	Students Name: Professor Krasso
	Date: 11/9/2023
	File Name: fruitVendor.h
*/

using namespace std;

class fruitVendor
{
public:
	// Default constructor 
	fruitVendor()
	{
		tax = 0.08; // tax is set at 8%
	}

	double orderTotal(double qty, double price); 
		// Function calculates the order total
		// This function multiplies the qty by the price and tax rate
		// to get the orders total 

private:
	double tax; // data member to hold the tax amount
};