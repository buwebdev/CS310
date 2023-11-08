/*
    Students Name: Professor Krasso
    Date: 10/30/2023
    File Name: Ch02Exercise13.cpp
    Description: Solution to Chapter 2, programming exercise 13
*/

#include <iostream>;
#include <conio.h>;

using namespace std;

int main()
{
    // Local variables for the program
    double originalPrice; 
    double markedUpPercent; 
    double salesTaxRate; 
    double sellingPrice; 
    double salesTax; 
    double finalPrice; 

    // Display the name of the program
    cout << "\n  Welcome to the Sales Markup Calculator" << endl; 

    // Prompt the uer to enter the products original price
    cout << "\n  Enter the products original price: ";
    cin >> originalPrice; 

    // Prompt the user to enter the marked up percentage
    cout << "\n  Enter the marked up percentage: ";
    cin >> markedUpPercent; 

    // Prompt th euser to enter teh sales tax rate
    cout << "\n  Enter the sales tax rate: ";
    cin >> salesTaxRate; 

    // Calculate the selling price of the item by converting the marked up precent to a precent,
    // multiplying it by the original price and then adding it to the original price.
    sellingPrice = originalPrice + ((markedUpPercent / 100) * originalPrice); 

    // Calcuate the sales tax dollar amount by coverting the sales tax percent to a percent, 
    // multiplying it by the selling price
    salesTax = ((salesTaxRate / 100) * sellingPrice); 

    // Calcuate the final sale by adding the selling price to the sales tax
    finalPrice = sellingPrice + salesTax; 

    // Display the results 
    cout << "\n  -- SUMMARY --"; 
    cout << "\n  Original Price: $" << originalPrice; 
    cout << "\n  Mark-up precent: " << markedUpPercent << "%";
    cout << "\n  Selling Price: $" << sellingPrice;
    cout << "\n  Sales Tax Rate: " << salesTaxRate << "%";
    cout << "\n  Sales Tax: $" << salesTax; 
    cout << "\n  Fianl Price: $" << finalPrice; 

    // Display a closing message for no Visual Studio IDEs
    cout << "\n\n  Press any key to continue ...";

    _getch(); 

    return 0;
}

