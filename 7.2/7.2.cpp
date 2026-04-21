#include <iostream>
using namespace std;

class Complex
{
    int a,b;
public:
    void get()
    {
        cout<<"Enter a: ";
        cin>>a;
        cout<<"Enter b: ";
        cin>>b;
    }
    void show()
    {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b;
    }
    Complex operator+(Complex c2)
    {
        Complex c;
        c.a=a+c2.a;
        c.b=b+c2.b;
        return c;
    }

    Complex operator-(Complex c2)
    {
        Complex c;
        c.a=a-c2.a;
        c.b=b-c2.b;
        return c;
    }
};

int main()
{
    Complex c1,c2,c3;

    c1.get();
    c2.get();

    c3=c1+c2;

    c3.show();
}
