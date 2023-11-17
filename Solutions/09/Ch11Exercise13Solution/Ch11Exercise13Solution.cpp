
#include <iostream>
#include <iomanip>
#include "savingsAccount.h"
#include "checkingAccount.h"

using namespace std;

int main()
{
    int accountNumber = 1000;

    checkingAccount jackAccount(accountNumber++, 1000);
    checkingAccount lisaAccount(accountNumber++, 450);
    savingsAccount samirAccount(accountNumber++, 9300);
    savingsAccount ritaAccount(accountNumber++, 32);

    jackAccount.deposit(1000);
    lisaAccount.deposit(2300);
    samirAccount.deposit(800);
    ritaAccount.deposit(500);

    jackAccount.postInterest();
    lisaAccount.postInterest();
    samirAccount.postInterest();
    ritaAccount.postInterest();

    cout << "***********************************" << endl;
    jackAccount.print();
    lisaAccount.print();
    samirAccount.print();
    ritaAccount.print();
    cout << "***********************************" << endl << endl;

    jackAccount.writeCheck(250);
    lisaAccount.writeCheck(350);
    samirAccount.withdraw(120);
    ritaAccount.withdraw(290);

    cout << "********After withdrawals ***************" << endl;
    jackAccount.print();
    lisaAccount.print();
    samirAccount.print();
    ritaAccount.print();
    cout << "***********************************" << endl << endl;

    return 0;
}