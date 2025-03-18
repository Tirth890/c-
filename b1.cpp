#include <iostream>
#include <vector>
using namespace std;

class Account {
protected:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    Account(string accNum, string accHolder, double bal) : accountNumber(accNum), accountHolder(accHolder), balance(bal) {}

    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << "\n";
    }

    virtual bool withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!\n";
            return false;
        }
        balance -= amount;
        cout << "Withdrawn: " << amount << "\n";
        return true;
    }

    virtual void display() const {
        cout << "Account Number: " << accountNumber << "\n"
             << "Holder: " << accountHolder << "\n"
             << "Balance: " << balance << "\n";
    }
};


class SavingsAccount : public Account {
    double interestRate;

public:
    SavingsAccount(string accNum, string accHolder, double bal, double rate)
        : Account(accNum, accHolder, bal), interestRate(rate) {}

    void addInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest added: " << interest << "\n";
    }

    void display() const override {
        Account::display();
        cout << "Interest Rate: " << interestRate << "%\n";
    }
};


class Bank {
    vector<Account*> accounts;

public:
    void addAccount(Account* acc) {
        accounts.push_back(acc);
    }

    void showAllAccounts() {
        for (auto acc : accounts) {
            acc->display();
            cout << "----------------------\n";
        }
    }
};

int main() {
    Bank myBank;

    // Creating accounts
    SavingsAccount* acc1 = new SavingsAccount("001207815785", "tirth bhalala", 1000, 5);
    Account* acc2 = new Account("678901258972", "milan patel", 500);

    myBank.addAccount(acc1);
    myBank.addAccount(acc2);

    // Transactions
    acc1->deposit(200);
    acc1->withdraw(100);
    acc1->addInterest();

    cout << "\nAll Bank Accounts:\n";
    myBank.showAllAccounts();

    
    delete acc1;
    delete acc2;

    return 0;
}
