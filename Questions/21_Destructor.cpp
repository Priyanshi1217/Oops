// Wap to create a BankAccount class that initializes the balance using a constructor and displays a message using a destructor.

#include <iostream>
using namespace std;

class BankAccount {
    double balance;

public:
    // Constructor
    BankAccount() {
        balance = 5000;
        cout << "Account created" << endl;
    }

    void display() {
        cout << "Balance Rs. " << balance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Account object destroyed" << endl;
    }
};

int main() {
    BankAccount account;
    account.display();

    return 0;
}