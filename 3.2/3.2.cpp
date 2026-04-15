#include <iostream>
using namespace std;

int iteration(int ar[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    return sum;
}

int recursion(int ar[], int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return ar[n-1]+recursion(ar,n-1);
    }
}

int main()
{
    int n,i;

    cout<<"Enter number of elements: ";
    cin>>n;
    int *ar= new int[n];

    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    cout<<"By iteration: "<<iteration(ar,n)<<endl;
    cout<<"By recursion: "<<recursion(ar,n);

    return 0;

}
