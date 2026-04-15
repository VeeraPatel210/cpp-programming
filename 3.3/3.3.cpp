#include <iostream>
using namespace std;

class Customer
{
    int accNum;
    string name;
    float balance;
    static int count;
public:
    Customer()
    {
        accNum=0;
        name="unknown";
        balance=0.0;
    }
    Customer(int num,string n,float bal)
    {
        accNum=num;
        name=n;
        balance=bal;
    }
    void get();
    void display();
    void transfer(Customer &,int n);
};
int Customer :: count;

void Customer :: get()
{
    cout<<"Enter account number: ";
    cin>>accNum;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter balance: ";
    cin>>balance;
}

void Customer :: transfer(Customer &receiver, int n)
{
    if(n<=0)
    {
        cout<<"Invalid amount entered.";
    }
    else if(n>balance)
    {
        cout<<"Insufficient balance.";
    }
    else
    {
        balance-=n;
        receiver.balance+=n;
    }
}
void Customer :: display()
{
    cout<<"Account number: "<<accNum<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Balance: "<<balance<<endl;
}

int main()
{
    int num,i,n1,n2,amt;
    cout<<"Enter number of accounts: ";
    cin>>num;

    Customer *c;
    c= new Customer[num];

    for(i=0;i<num;i++)
    {
        c[i].get();
    }

    cout<<"From which account you want to transfer: ";
    cin>>n1;

    cout<<"To which account: ";
    cin>>n2;

    cout<<"Enter amount: ";
    cin>>amt;

    c[n1-1].transfer(c[n2-1],amt);

    c[n1-1].display();
    c[n2-1].display();

    return 0;
}
