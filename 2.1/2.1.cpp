#include <iostream>
using namespace std;

class Rectangle
{
private:
    int l,b,num;
public:
    void addRectangle(Rectangle r[],int &n);
    void updateDim(Rectangle r[],int n);
    int area();
    int perimeter();
    void display();
};

void Rectangle :: addRectangle(Rectangle r[],int &n)
{
    int a;
    cout<<"How many rectangles you want to add:";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cout<<"Enter number: ";
        cin>>r[n].num;
        cout<<"Enter length: ";
        cin>>r[n].l;
        cout<<"Enter breadth: ";
        cin>>r[n].b;

        n++;
    }
}

void Rectangle :: updateDim(Rectangle r[],int n)
{
    int u;
    cout<<"Which rectangles dimension you want to update: ";
    cin>>u;
    for(int i=0;i<n;i++)
    {
        if(r[i].num==u)
        {
            cout<<"Enter length: ";
            cin>>r[i].l;
            cout<<"Enter breadth: ";
            cin>>r[i].b;

            cout<<"Dimensions are changed.\n";
            break;
        }
        else
        {
            cout<<"Rectangle does not exist.\n";
        }
    }
}
int Rectangle ::  area()
{
    return l*b;
}

int Rectangle ::  perimeter()
{
    return 2*(l+b);
}

int main()
{
    Rectangle a;
    int n=0;
    Rectangle r[10];
    int ch;
    p: cout<<"1)Add rectangle"<<endl;
    cout<<"2)Update dimensions"<<endl;
    cout<<"3)Area"<<endl;
    cout<<"4)Perimeter"<<endl;
    cout<<"5)Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>ch;

    switch(ch)
    {
    case 1:
        {
            a.addRectangle(r,n);
            goto p;
        }
    case 2:
        {
            a.updateDim(r,n);
            goto p;
        }
    case 3:
        {
            for(int i=0;i<n;i++)
            {
                 cout<<"For rectangle "<<i+1<<":\n";
                 cout<<"Area: "<<r[i].area();
                 cout<<"\n";
            }
            goto p;
        }
    case 4:
        {
            for(int i=0;i<n;i++)
            {
                 cout<<"For rectangle "<<i+1<<":\n";
                 cout<<"Perimeter "<<r[i].perimeter();
                 cout<<"\n";
            }
            goto p;
        }
    case 5:
        {
            cout<<"Thank You";
            break;
        }
    default:
        {
            cout<<"Invalid input.";
        }
    }
    return 0;
}








