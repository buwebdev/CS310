/*
	Students Name: Professor Krasso
	Date: 11/9/2023
	File Name: fruitVendorImp.cpp
*/

#include "fruitVendor.h";
#include <iomanip>; 
#include <iostream>; 

using namespace std;

//  Implementation of the orderTotal function member 
double fruitVendor::orderTotal(double qty, double price)
{
	double total = qty * price; // get the total before tax
	double taxAmt = total * tax; // calculate tax 

	return total + taxAmt; // return the order total 
}