// Design a class to represent a bank account with proper data hiding and member functions for deposit and withdeawal operations.

#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double initialbalance)
    {
        balance = initialbalance;
    }
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        }
        else
        {
            cout << "Invalid amount." << endl;
        }
    }
    void withdrawal(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    void display()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account(5000);

    account.display();

    account.deposit(2000);
    account.display();

    account.withdrawal(1500);
    account.display();

    return 0;
}