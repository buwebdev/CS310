/*
    Students Name: Professor Krasso
    Date: 11/25/2023
    File Name: Ch13Exercise17.cpp
*/

#include <iostream>; 
#include <conio.h>; 
#include <random>; 

using namespace std; 

int main()
{
    cout << "\n\n  Welcome to the Random Generator App!" << endl; // display welcome message 

    // configuration for C++ 11 random generator 
    random_device rdevice{}; 
    default_random_engine num{ rdevice() }; 
    uniform_int_distribution<unsigned int> randomNum{ 10, 100 }; 

    cout << "\n  -- RANDOM NUMBERS --" << endl; // Summary

    // Generate 25 random numbers between 10 and 100
    for (unsigned int count = 1; count <= 25; count++)
    {
        cout << "  " << randomNum(num); 
    }
    cout << endl;

    cout << "\n\n  Press any key to continue ..."; // exit message 

    _getch(); // halt processing 

    return 0; // return exit code of 0
}
