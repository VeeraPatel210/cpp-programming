#include <iostream>
using namespace std;

int main()
{
    int a,b;

    try
    {
        cout<<"Enter a and b : ";

        if(!(cin>>a>>b))
        {
            throw "Invalid input";
        }

        if(b==0)
        {
            throw "Cannot divide by zero";
        }

        cout<<"Result: "<<a/b;
    }
    catch(const char* msg)
    {
        cout<<"Error: "<<msg;
    }

    return 0;
}
