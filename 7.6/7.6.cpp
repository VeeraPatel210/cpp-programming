#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout<<"Base destructor called"<<endl;
    }
};

class Derived: public Base
{
    int *data;
public:
    Derived()
    {
        data= new int[10];
        cout<<"Derived constructor called"<<endl;
    }
    ~Derived()
    {
        cout<<"Derived destructor called"<<endl;
        delete[] data;
    }
};

int main()
{
    Base *ptr =new Derived();
    delete ptr;

    return 0;
}
