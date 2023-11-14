
#include <iostream>
#include <string>
using namespace std;

class bankAccount
{
public:
    void setdata(string name, string accType,
        double bal, double intRate);
    void deposit(double amt);
    void withdraw(double amt);
    double getInterest();
    void updateBalance();
    void print() const;
    int getAccountNumber() const;
    string getAccountHolderName() const;
    string getAccountType() const;
    double getBalance() const;
    double getInterestRate() const;

    bankAccount(string name = "", string accType = "",
        double bal = 0.0, double intRate = 0.0);

private:
    static int num;
    string accountHolderName;
    string accountType;
    int accountNumber;
    double balance;
    double interestRate;
};