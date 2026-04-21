#include <iostream>
using namespace std;

class Account
{
    float balance;

public:
    Account(float b)
    {
        balance=b;
    }

    void withdraw(float amt)
    {
        cout << "In withdraw()\n";

        if (amt > balance)
        {
            throw "Insufficient balance";
        }

        balance -= amt;
        cout << "Withdrawal successful\n";
        cout<<"Balance: "<<balance;
    }
    void deposit(float amt)
    {
        balance+=amt;
        cout<<"Deposit successful\n";
        cout<<"Balance: "<<balance;
    }
};

int main()
{
    float bal, amt;
    int choice;

    cout << "Enter initial balance: ";
    cin >> bal;

    Account acc(bal);

    try
    {
        cout << "1. Deposit\n2. Withdraw\nEnter choice: ";
        cin >> choice;

        cout << "Enter amount: ";
        cin >> amt;

        if (choice == 1)
            acc.deposit(amt);
        else if (choice == 2)
            acc.withdraw(amt);
        else
            throw "Invalid choice";
    }
    catch (const char* msg)
    {
        cout << "Error: " << msg << endl;
    }

    return 0;

}
