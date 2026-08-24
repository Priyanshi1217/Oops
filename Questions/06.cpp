// WAP to demonstrate the access specifier, private,public,protected to the banking system.

#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

protected:
    string accountType;

public:
    string accountHolder;

    BankAccount(string name, double amount, string type)
    {
        accountHolder = name;
        balance = amount;
        accountType = type;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully." << endl;
    }

    void displayBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};

class CustomerAccount : public BankAccount
{
public:
    CustomerAccount(string name, double amount, string type)
        : BankAccount(name, amount, type)
    {
    }

    void displayAccountType()
    {
        cout << "Account Type: " << accountType << endl;
    }
};

int main()
{
    CustomerAccount customer("Priyanshi", 5000, "Savings");

    cout << "Account Holder: " << customer.accountHolder << endl;

    customer.displayAccountType();
    customer.deposit(2000);
    customer.displayBalance();

    return 0;
}


// // WAP to demonstrate the access specifier, private,public,protected to the banking system.

// #include <iostream>
// using namespace std;

// class BankAccount
// {
// private:
//     double balance;          
// protected:
//     int accountNumber;       
// public:
//     string name;             

//     BankAccount(string n, int accNo, double initialBalance)
//     {
//         name = n;
//         accountNumber = accNo;
//         balance = initialBalance;
//     }

//     void deposit(double amount)
//     {
//         if (amount > 0)
//         {
//             balance += amount;
//             cout << "Amount deposited successfully.\n";
//         }
//         else
//         {
//             cout << "Invalid deposit amount.\n";
//         }
//     }

//     void withdraw(double amount)
//     {
//         if (amount > 0 && amount <= balance)
//         {
//             balance -= amount;
//             cout << "Amount withdrawn successfully.\n";
//         }
//         else
//         {
//             cout << "Insufficient balance or invalid amount.\n";
//         }
//     }

//     void display()
//     {
//         cout << "\n--- Account Details ---\n";
//         cout << "Name: " << name << endl;
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Balance: " << balance << endl;
//     }
// };

// int main()
// {
//     BankAccount account("Priyanshi", 12345, 5000);

//     cout << "Account Holder: " << account.name << endl;

//     account.deposit(2000);

//     account.withdraw(1500);

//    account.display();

//     return 0;
// }