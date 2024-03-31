#include <iostream>
#include <map>

using namespace std;

class BankAccount {
private:
    static int totalTransactions;
    static map<int, BankAccount*> accounts;

public:
    int accountNumber;
    double balance;

    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

    void deposit(double amount) {
        balance += amount;
        totalTransactions++;
        cout << "Deposit of $" << amount << " successful.\n";
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            totalTransactions++;
            cout << "Withdrawal of $" << amount << " successful.\n";
        } else {
            cout << "Insufficient funds.\n";
        }
    }

    static void addAccount(int accNum, BankAccount* accPtr) {
        accounts[accNum] = accPtr;
    }

    static BankAccount* getAccount(int accNum) {
        return accounts[accNum];
    }

    static int getTotalTransactions() {
        return totalTransactions;
    }
};

int BankAccount::totalTransactions = 0;
map<int, BankAccount*> BankAccount::accounts;

int main() {
    double depositAmount;
    int numAccounts;

    cout << "Enter the number of accounts to create: ";
    cin >> numAccounts;

    for (int i = 0; i < numAccounts; ++i) {
        int accountNum;
        double initialBalance;

        cout << "Enter account number for account " << i + 1 << ": ";
        cin >> accountNum;

        cout << "Enter initial balance for account " << i + 1 << ": ";
        cin >> initialBalance;

        BankAccount* newAccount = new BankAccount(accountNum, initialBalance);
        BankAccount::addAccount(accountNum, newAccount);

        cout << "Account created successfully.\n";
    }

    int numTransactions;
    cout << "Enter the number of transactions to perform: ";
    cin >> numTransactions;

    for (int i = 0; i < numTransactions; ++i) {
        int accountNum;
        char transactionType;
        double amount;

        cout << "Enter account number: ";
        cin >> accountNum;

        BankAccount* accPtr = BankAccount::getAccount(accountNum);
        if (accPtr == nullptr) {
            cout << "Account not found.\n";
            continue;
        }

        cout << "Enter 'D' for deposit or 'W' for withdrawal: ";
        cin >> transactionType;

        if (transactionType == 'D' || transactionType == 'd') {
            cout << "Enter deposit amount: ";
            cin >> amount;
            accPtr->deposit(amount);
        } else if (transactionType == 'W' || transactionType == 'w') {
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            accPtr->withdraw(amount);
        } else {
            cout << "Invalid transaction type.\n";
        }
    }

    cout << "Total transactions: " << BankAccount::getTotalTransactions() << endl;


    return 0;
}