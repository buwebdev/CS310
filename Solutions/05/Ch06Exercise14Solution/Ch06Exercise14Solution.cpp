
#include <iostream>
#include <iomanip>

using namespace std;

double billingAmount(double hRate, double consTime, bool lowInc);

int main()
{
    double hourlyRate;
    double consultingTime;
    bool lowIncome;
    double yearlyIncome;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter yearly income: ";
    cin >> yearlyIncome;
    cout << endl;

    if (yearlyIncome <= 25000)
        lowIncome = true;
    else
        lowIncome = false;

    cout << "Enter the hourly rate: ";
    cin >> hourlyRate;
    cout << endl;

    cout << "Enter consulting time in minutes: ";
    cin >> consultingTime;
    cout << endl;

    cout << "The billing amount is: "
        << billingAmount(hourlyRate, consultingTime, lowIncome)
        << endl;

    return 0;
}

double billingAmount(double hRate, double consTime, bool lowInc)
{
    double amountDue;

    if (lowInc)
    {
        if (consTime <= 30)
            amountDue = 0.0;
        else
            amountDue = hRate * 0.40 * (consTime - 30.0) / 60;
    }
    else
    {
        if (consTime <= 20)
            amountDue = 0.0;
        else
            amountDue = hRate * 0.70 * (consTime - 20.0) / 60;
    }

    return amountDue;
}