#include <iostream>
using namespace std;

int func(int x)
{
    int sum=0,num;
    if(x<10)
    {
        return x;
    }
    else
    {
        while(x>0)
        {
            num=x%10;
            sum=sum+num;
            x=x/10;
        }
        return func(sum);
    }
}

int main()
{
    string n;
    int k;
    int total;

    cout<<"Enter number: ";
    cin>>n ;
    cout<<"Enter times: ";
    cin>>k;
    for(int i=0;i<n.length();i++)
    {
        total+=n[i] - '0';
    }
    total=total*k;

    cout << func(total);

    return 0;
}
