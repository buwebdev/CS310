/*
    Students Name: Professor Krasso
    Date: 11/13/2023
    File Name: Ch11Exercise13.cpp
*/

#include <iostream>;
#include <string>; 
#include <conio.h>; 
#include <iomanip>; 
#include "savingAccount.h"

using namespace std;

int main()
{
    savingAccount savingAccount(2.5, 1007, 15000); 

    cout << "\n\n  Bank One of Bellevue" << endl; 

    cout << "\n  Balance: " << savingAccount.getBalance();

    savingAccount.print(); 
    
    savingAccount.deposit(1500); 

    savingAccount.print(); 

    savingAccount.withdraw(5000); 

    savingAccount.print();

    savingAccount.postInterest(); 

    savingAccount.print(); 

    cout << "\n\n  Press any key to continue ..."; // display an exit message 

    _getch(); // halt processing 

    return 0; // system exit code 
}
