#include <iostream>
using namespace std;

int main()
{
    int m,n,i,num=0;
    cout<<"Enter size of one: ";
    cin>>n;
    cout<<"Enter size of two: ";
    cin>>m;

    int *nptr= new int[n];
    int *mptr= new int[m];

    cout<<"Enter sorted elements for one: ";
    for(i=0;i<n;i++)
    {
        cin>>nptr[i];
    }
    cout<<"Enter sorted elements for two: ";
    for(i=0;i<m;i++)
    {
        cin>>mptr[i];
    }


    int *ptr=new int[m+n];
    for(i=0;i<n;i++)
    {
        ptr[i] = nptr[i];
    }
    for(i=0;i<m;i++)
    {
        ptr[n+i] = mptr[i];
    }
    cout<<"\nCombined array:\n";
    for(i=0;i<n+m;i++)
    {
         cout<<ptr[i]<<endl;
    }


    return 0;
}
