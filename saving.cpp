#include <iostream>
#include <string>
using namespace std;

// Saving Account Class
class SavingAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;

public:

    // Constructor
    SavingAccount(string name, int accNumber, double initialBalance, double rate)
    {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        interestRate = rate;
    }

    // Deposit
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: Rs." << amount << endl;
        }
    }

    // Withdraw
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: Rs." << amount << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Apply Interest
    void applyInterest()
    {
        double interest = balance * interestRate / 100;
        balance += interest;

        cout << "Interest Applied: Rs." << interest << endl;
    }

    // Display
    void display()
    {
        cout << "\n[Savings Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs." << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main()
{
    string name;
    int accNumber;
    double balance, rate;
    double depositAmount, withdrawAmount;

    // Taking information from user
    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Account Number: ";
    cin >> accNumber;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "Enter Interest Rate: ";
    cin >> rate;

    // Creating account
    SavingAccount account(name, accNumber, balance, rate);

    account.display();

    // Deposit
    cout << "\nEnter amount to deposit: ";
    cin >> depositAmount;
    account.deposit(depositAmount);

    // Withdraw
    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    // Interest
    account.applyInterest();
    
    // Final details
    account.display();

    return 0;
}