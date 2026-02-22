#include <iostream>
#include <cmath>
using namespace std;

class Account
{
private:
    int loanId;
    string name;
    float amt;
    float intRate;
    float months;
public:
    //default constructor
    Account()
    {
        loanId=1;
        name= "Oreo";
        amt= 0;
        intRate= 0;
        months=0;

        calEMI(amt,intRate,months);
    }

    //parameterized constructor
    Account(int id,string n,float a,float rate,float m)
    {
        loanId=id;
        name=n;
        amt=a;
        intRate=rate;
        months=m;

        calEMI(amt,intRate,months);
    }
    void addAcc();
    int getId();
    float calEMI(float amt,float intRate, float months);
    void display();
};
void Account :: addAcc()
{
    cout<<"Enter loan id: ";
    cin>>loanId;
    cout<<"Enter name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter principle amount: ";
    cin>>amt;
    cout<<"Enter monthly interest rate: ";
    cin>>intRate;
    cout<<"Enter time period in months: ";
    cin>>months;
}s

int Account :: getId()
{
    return loanId;
}

float Account :: calEMI(float amt,float intRate, float months)
{
    float emi;
    float r = (intRate / 1200);
    emi=(amt*r*(pow((1+r),months))) / (pow((1+r),months)-1);
    return emi;
}

void Account :: display()
{
    cout<<"Loan id: "<<loanId<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Amount: "<<amt<<endl;
    cout<<"Interest rate: "<<intRate<<endl;
    cout<<"Months: "<<months<<endl;
    cout<<"EMI: "<<calEMI(amt,intRate,months)<<endl;
}

int main()
{
    //default constructor calling
    Account a;
    a.display();

    //parameterized constructor calling
    int ch,n=0;
    Account ac[10];
    x: cout<<"1) Add account\n";
    cout<<"2) Display\n";
    cout<<"3) Exit\n";
    cout<<"Enter your choice: ";
    cin>>ch;

    switch(ch)
    {
    case 1:
        {
            if(n<20)
            {
                ac[n].addAcc();
                n++;
            }
            goto x;
        }
    case 2:
        {
            for(int i=0;i<n;i++)
            {
                ac[i].display();
            }
            goto x;
        }
    case 3:
        {
            cout<<"Thank You";
        }
    default:
        {
            cout<<"Invalid choice";
        }
    }
    return 0;
}


