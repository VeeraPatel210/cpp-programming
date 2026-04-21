#include <iostream>
using namespace std;

class Calculator
{
    int a,b;
public:
    void add(int a, int b)
    {
        int res=a+b;
        cout<<res;
    }

    void add(float a, float b)
    {
        float res=a+b;
        cout<<res;
    }

    void add(int a, float b)
    {
        float res=a+b;
        cout<<res;
    }
};

int main()
{
    Calculator c;

    cout <<"Int+Int: ";
    c.add(5, 10);
    cout<<endl<<"Float+Float: ";
    c.add(2.5f, 3.5f);
    cout<<endl<< "Int+Float: ";
    c.add(7, 4.2f);

    return 0;
}
