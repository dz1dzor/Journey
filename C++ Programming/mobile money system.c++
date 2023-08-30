#include <iostream>
using namespace std;

class Wallet {
private:
    double balance;

public:
    Wallet(double initialBalance) : balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << " units. Current balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew " << amount << " units. Current balance: " << balance << endl;
        } else {
            cout << "You have insufficient balance to make this amount of withdrawal." << endl;
        }
    }

    void checkBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    Wallet wallet(0);  // Starting balance of 100 units

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;

        char choice;
        cin >> choice;

        switch (choice) {
            case '1': {
                double amount;
                cout << "Enter deposit amount: ";
                cin >> amount;
                wallet.deposit(amount);
                break;
            }
            case '2': {
                double amount;
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                wallet.withdraw(amount);
                break;
            }
            case '3':
                wallet.checkBalance();
                break;
            case '4':
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

    return 0;
}
