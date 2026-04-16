#include <iostream>
using namespace std;
void insertt(int *p,int n)
{
    int e,i;
    int *temp=new int[n+1];
    cout<<"Enter the element you want to add: ";
    cin>>e;

    for(i=0;i<n;i++)
    {
        temp[i]=p[i];
    }
    temp[n]=e;

    p=temp;

    cout<<"Element added"<<endl;
    for(i=0;i<n+1;i++)
    {
        cout<<p[i]<<endl;
    }
}

void deletee(int *p,int n)
{
    int num,i;
    cout<<"From which position you want to delete the number: ";
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(i==num-1)
        {
            continue;
        }
        else
        {
            cout<<p[i]<<endl;
        }

    }
}
int main()
{
    int *ptr;
    int n,i,ch;

    cout<<"Enter the number of elements: ";
    cin>>n;

    ptr= new int[n];

    cout<<"Enter elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ptr[i];
    }

    cout<<"Array is: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ptr[i]<<endl;
    }

    cout<<"1)Insert element"<<endl;
    cout<<"2)Delete element"<<endl;
    cout<<"Enter your choice: ";
    cin>>ch;

    switch(ch)
    {
    case 1:
         insertt(ptr,n);break;
    case 2:
        deletee(ptr,n);break;
    default:
        cout<<"Invalid choice entered.";
    }

    return 0;

}
