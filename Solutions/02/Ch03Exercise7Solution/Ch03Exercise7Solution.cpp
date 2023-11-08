
#include <iostream> 
#include <iomanip>

using namespace std;

int main()
{
    double netBalance, payment, d1, d2;
    double interestRate;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the net balance: ";
    cin >> netBalance;
    cout << endl;

    cout << "Enter the number of days in the billing cycle: ";
    cin >> d1;
    cout << endl;

    cout << "Enter the payment amount: ";
    cin >> payment;
    cout << endl;

    cout << "Enter the number of days payment is made before billing cycle: ";
    cin >> d2;
    cout << endl;

    cout << "Enter the interest rate per month: ";
    cin >> interestRate;
    cout << endl;

    cout << "The interest on the unpaid balance is: "
        << (netBalance * d1 - payment * d2) / d1 * interestRate
        << endl;

    return 0;
}