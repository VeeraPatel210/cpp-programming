#include <iostream>
using namespace std;

template <typename T>
T maxi(T a[],int n)
{
    int i;
    T max = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}

template <typename T>
void display(T a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}


template <typename T>
void rev(T a[],int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<endl;
    }
}


int main()
{
    int nn,i;

    cout<<"Enter size of all arrays: ";
    cin>> nn;

    int a[nn];
    float ar[nn];
    char arr[nn];

    cout<<"Enter integer array: ";
    for(i=0;i<nn;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter decimal array: ";
    for(i=0;i<nn;i++)
    {
        cin>>ar[i];
    }

    cout<<"Enter character array: ";
    for(i=0;i<nn;i++)
    {
        cin>>arr[i];
    }

    cout<<"MAXIMUM"<<endl;
    cout<<maxi<int>(a,nn)<<endl;
    cout<<maxi<float>(ar,nn)<<endl;
    cout<<maxi<char>(arr,nn)<<endl;

    cout<<"REVERSE"<<endl;
    rev<int>(a,nn);
    rev<float>(ar,nn);
    rev<char>(arr,nn);

    cout<<"DISPLAY"<<endl;
    display<int>(a,nn);
    display<float>(ar,nn);
    display<char>(arr,nn);

    return 0;

}
