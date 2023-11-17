//Class savingsAccount 

#ifndef H_savingsAccount
#define H_savingsAccount

#include "bankAccount.h"

const double DEFAULT_INTEREST_RATE_SAVINGS = 0.06;

class savingsAccount : public bankAccount
{
public:
    double getInterestRate() const;
    void setInterestRate(double rate);
    void withdraw(double amount);
    void postInterest();
    void print() const;
    savingsAccount(int acctNumber, double bal,
        double intRate = DEFAULT_INTEREST_RATE_SAVINGS);

protected:
    double interestRate;
};

#endif