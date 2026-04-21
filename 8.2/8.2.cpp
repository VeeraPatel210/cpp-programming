#include <iostream>
#include <cmath>
using namespace std;

class NegativeNumberException
{
    int num;
public:
    void tryy()
    {
        try
        {
            cout<<"Enter a number: ";
            cin>>num;
            if(num<0)
            {
                throw "Negative input";
            }
            cout<<"Result: "<<sqrt(num);
        }
        catch(const char* msg)
            {
                cout<<"Error: "<<msg<<endl;
            }
    }
};

int main()
{
    int n,i;

    NegativeNumberException obj;
    cout<<"How many numbers you want to add: ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        obj.tryy();
    }

    return 0;
}
