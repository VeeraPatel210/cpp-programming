#include <iostream>
using namespace std;

class Shape
{
    int r;
public:
    void get(int rad)
    {
        r=rad;
    }
    void show()
    {
        cout<<"Radius is: "<<r<<endl;
    }
};

class Circle : public Shape
{
    float ar;
public:
    double area(int r)
    {
        ar=3.14*r*r;
        return ar;
    }
    void showar()
    {
        cout<<"Area is: "<<ar<<endl;
    }
};

int main()
{
    float r;
    int n,i;

    cout<<"Enter the number of circles: ";
    cin>>n;
    Circle *c;
    c=new Circle[n];

    for(i=0;i<n;i++)
    {
        cout<<"Enter radius of circle: "<<i+1<<" : ";
        cin>>r;
        c[i].get(r);
        c[i].area(r);
    }

    cout<<endl<<"------Result------"<<endl;
    for(i=0;i<n;i++)
    {
        c[i].show();
        c[i].showar();
    }

    return 0;
}
