#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    void setBalance(double amount)
    {
        balance = amount;
    }
    void setAccountDetails(int accNo, string name, double bal)
    {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Amount deposited successfully." << endl;
        }
        else
        {
            cout << "Invalid amount." << endl;
        }
    }
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }
    double getBalance()
    {
        return balance;
    }
    void calculateInterest()
    {
        cout << "Interest calculation not available." << endl;
    }
    void displayAccountInfo()
    {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolderName << endl;
        cout << "Balance        : Rs. " << balance << endl;
    }
};

class SavingsAccount : public BankAccount
{
private:
    float interestRate;

public:
    void setSavingsDetails(float rate)
    {
        interestRate = rate;
    }

    void calculateInterest()
    {
        double interest;

        interest = getBalance() * interestRate / 100;

        cout << "Interest Rate : " << interestRate << "%" << endl;
        cout << "Interest      : Rs. " << interest << endl;
    }

    void displayAccountInfo()
    {
        BankAccount::displayAccountInfo();
        cout << "Interest Rate : " << interestRate << "%" << endl;
    }
};

class CheckingAccount : public BankAccount
{
private:
    double overdraftLimit;

public:
    void setOverdraftLimit(double limit)
    {
        overdraftLimit = limit;
    }

    void withdraw(double amount)
    {
        if (amount <= getBalance())
        {
            withdraw(amount);
        }
        else if (amount <= getBalance() + overdraftLimit)
        {
            setBalance(getBalance() - amount);

            cout << "Withdrawal successful using overdraft."
                 << endl;
        }
        else
        {
            cout << "Overdraft limit exceeded." << endl;
        }
    }

    void checkOverdraft()
    {
        cout << "Overdraft Limit : Rs. "
             << overdraftLimit << endl;
    }

    void displayAccountInfo()
    {
        displayAccountInfo();
        cout << "Overdraft Limit : Rs. "
             << overdraftLimit << endl;
    }
};

class FixedDepositAccount : public BankAccount
{
private:
    float term;
    float interestRate;

public:
    void setFixedDepositDetails(float t, float rate)
    {
        term = t;
        interestRate = rate;
    }

    void calculateInterest()
    {
        double interest;
        interest = getBalance() * interestRate * term / (12 * 100);
        cout << "Interest Rate : " << interestRate << "%" << endl;
        cout << "Term          : " << term << " months" << endl;
        cout << "Interest      : Rs. " << interest << endl;
    }
    void displayAccountInfo()
    {
        displayAccountInfo();
        cout << "Term          : " << term << " months" << endl;
        cout << "Interest Rate : " << interestRate << "%" << endl;
    }
};
