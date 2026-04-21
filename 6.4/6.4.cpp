#include <iostream>
using namespace std;

class Account
{
protected:
    int accNum;
    float balance;
public:
    Account()
    {
        accNum=0;
        balance=0.0;
    }
    Account(int num,float bal)
    {
        accNum=num;
        balance=bal;
    }
    void withdraw()
    {
        float amt;
        cout<<"Enter amount: ";
        cin>>amt;
         balance-=amt;
        cout<<"Balance is: " <<balance;
    }
    void deposit()
    {
         float amt;
        cout<<"Enter amount: ";
        cin>>amt;
        balance+=amt;
        cout<<"Balance is: "<<balance;
    }
    void get()
    {
        cout<<"Enter account number: ";
        cin>>accNum;
        cout<<"Enter current balance: ";
        cin>>balance;
    }
};

class SavingsAcc : public Account
{
    float rate;
public:
    void getr()
    {
        cout<<"Enter interest rate: ";
        cin>>rate;
    }
    void addInterest()
    {
        float interest = balance * rate / 100;
        balance += interest;
        cout<<"Interest added: "<<interest<<endl;
        cout<<"Balance after interest: "<<balance<<endl;
    }
};

class CurrentAcc : public Account
{
    float over;
public:
    void geto()
    {
        cout<<"Enter overdraft: ";
        cin>>over;
    }
    void withdraw()
    {
        float amt;
        cout<<"Enter amount: ";
        cin>>amt;

        if(balance - amt < -over)
        {
            cout<<"Overdraft limit exceeded!"<<endl;
        }
        else
        {
            balance -= amt;
            cout<<"Balance is: "<<balance<<endl;
        }
    }

};

int main()
{
    SavingsAcc s;
    CurrentAcc c;
    int ch,cc;
    cout<<"1)Withdraw"<<endl;
    cout<<"2)Deposit"<<endl;
    cout<<"Enter your choice: ";
    cin>>ch;
    cout<<"1)Savings"<<endl;
    cout<<"2)Current"<<endl;
    cout<<"Enter: ";
    cin>>cc;

    if(cc==1)
    {
        s.get();
        s.getr();
        if(ch==1)
        {
            s.withdraw();
        }
        else
        {
            s.deposit();
        }
        s.addInterest();
    }
    else
    {
        c.get();
        c.geto();
         if(ch==1)
        {
            c.withdraw();
        }
        else
        {
            c.deposit();
        }
    }


    return 0;
}
