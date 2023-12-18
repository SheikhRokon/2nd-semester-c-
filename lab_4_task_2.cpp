#include <iostream>
#include <vector>

using namespace std;

class BankAccount;

class Bank {
private:
    vector<BankAccount> accounts;

public:
    void addAccount(const BankAccount& account);
    void displayAccountInfo(int accountNumber);
    void deposit(int accountNumber, double amount);
    void withdraw(int accountNumber, double amount);
};

class BankAccount {
private:
    int accountNumber;
    double balance;
    string ownerName;

public:
    BankAccount(int accNumber, double initialBalance, const string& owner)
        : accountNumber(accNumber), balance(initialBalance), ownerName(owner) {}

    friend void Bank::addAccount(const BankAccount& account);
    friend void Bank::displayAccountInfo(int accountNumber);
    friend void Bank::deposit(int accountNumber, double amount);
    friend void Bank::withdraw(int accountNumber, double amount);
};

void Bank::addAccount(const BankAccount& account) {
    accounts.push_back(account);
    cout << "Account added successfully." << endl;
}

void Bank::displayAccountInfo(int accountNumber) {
    for (const auto& account : accounts) {
        if (account.accountNumber == accountNumber) {
            cout << "Account Number: " << account.accountNumber << endl;
            cout << "Owner: " << account.ownerName << endl;
            cout << "Balance: ৳" << account.balance << endl; // Updated currency symbol
            return;
        }
    }
    cout << "Account not found." << endl;
}

void Bank::deposit(int accountNumber, double amount) {
    for (auto& account : accounts) {
        if (account.accountNumber == accountNumber) {
            account.balance += amount;
            cout << "Deposit successful. New balance: ৳" << account.balance << endl; // Updated currency symbol
            return;
        }
    }
    cout << "Account not found." << endl;
}

void Bank::withdraw(int accountNumber, double amount) {
    for (auto& account : accounts) {
        if (account.accountNumber == accountNumber) {
            if (account.balance >= amount) {
                account.balance -= amount;
                cout << "Withdrawal successful. New balance: ৳" << account.balance << endl; // Updated currency symbol
            } else {
                cout << "Insufficient funds." << endl;
            }
            return;
        }
    }
    cout << "Account not found." << endl;
}

int main() {
    Bank myBank;

    BankAccount account1(1, 1000.0, "Md Rokon");
    BankAccount account2(2, 500.0, "Md Akib");

    myBank.addAccount(account1);
    myBank.addAccount(account2);

    myBank.displayAccountInfo(1);

    myBank.deposit(1, 200.0);
    myBank.withdraw(2, 100.0);

    myBank.displayAccountInfo(1);
    myBank.displayAccountInfo(2);

    return 0;
}
