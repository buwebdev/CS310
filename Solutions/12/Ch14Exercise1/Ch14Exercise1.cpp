/*
    Students Name: Professor Krasso
    Date: 11/28/2023
    File Name: Ch14Exercise1.cpp
*/

#include <iostream>
#include <conio.h>; 
#include "negativeNumber.h"; // negative number exception class
#include "nonNumber.h" // non number exception class 

using namespace std;

// constants 
double FT_TO_CM = 30.48;
double IN_TO_CM = 2.54; 

// global variables 
int feet; 
int inches; 

// function prototype
double convertToCentimeters(int ft, int in); 

int main()
{
    bool ftIsValid = false; // variable to keep prompting users to enter a valid feet value
    bool inIsValid = false; // variable to keep prompting users to enter a valid inches value 

    cout << "\n\n  Welcome to the Centimeters Calculator!" << endl; // welcome message

    // while feet is invalid continue to prompt the user to enter a valid 
    // feet value
    do
    {
        // try statement to catch negative numbers or invalid numbers
        try
        {
            // prompt the user to enter the feet 
            cout << "\n  Enter the feet amount: ";
            cin >> feet;
            cout << endl;

            // if the entered value is not a number,
            // throw the nonNumber exception 
            if (!cin)
                throw nonNumber("Feet");

            // if the netered value is a negative number
            // throw the negativeNumber exception 
            if (feet < 0)
                throw negativeNumber("Feet");

            ftIsValid = true; // feet is valid so exit the do while loop
        }
        catch (negativeNumber negNumErr)
        {
            cout << "  Error: " << negNumErr.what() << endl;
        }
        catch (nonNumber nonNumErr)
        {
            cout << "  Error: " << nonNumErr.what() << endl;
            cin.clear(); // clear the input stream 
            cin.ignore(100, '\n'); 
        }
    } 
    while (!ftIsValid);

    // while inches is invalid continue to prompt the user to enter a valid 
    // inches value.
    do
    {
        // try statement to catch negative numbers or invalid numbers
        try
        {
            // prompt the user to enter the inches 
            cout << "  Enter inches amount: ";
            cin >> inches;
            cout << endl;

            // if the entered value is not a number,
            // throw the nonNumber exception 
            if (!cin)
                throw nonNumber("Inches"); 

            // if the netered value is a negative number
            // throw the negativeNumber exception 
            if (inches < 0)
                throw negativeNumber("Inches");

            inIsValid = true; // inches 
        }
        catch (negativeNumber negNumErr)
        {
            cout << "  Error: " << negNumErr.what() << endl;
            cout << endl;
        }
        catch (nonNumber nonNumErr)
        {
            cout << "  Error: " << nonNumErr.what() << endl;
            cout << endl;
            cin.clear(); // clear the stream
            cin.ignore(100, '\n');
        }
    } 
    while (!inIsValid);

    // display the results to user
    cout << "\n  -- SUMMARY --" << endl;
    cout << "  " << feet << " feet and " << inches << " inches is " << convertToCentimeters(feet, inches) << " centemeters." << endl;

    cout << "\n\n  Press any key to continue ..." << endl; // exit message 

    _getch(); // halt processing 

    return 0; // return a system exit code of 0
}

// function covertToCentimeters
// calculates the centimeters given the feet and inches
// and returns the results
double convertToCentimeters(int ft, int in)
{
    // calculate the centimeters and return the results
    return (ft * FT_TO_CM) + (in * IN_TO_CM); 
}
