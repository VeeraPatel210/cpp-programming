#include <iostream>
using namespace std;

class Shape
{
protected:
    float length;
    float breadth;
    float radius;
public:
    virtual void area()=0;
};

class Rectangle: public Shape
{
public:
    Rectangle()
    {
        length=0;
        breadth=0;
    }
    void get()
    {
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter breadth: ";
        cin>>breadth;
    }
    void area()
    {
        cout<<"Area of rectangle is: "<<(length*breadth)<<endl;
    }
};

class Circle: public Shape
{
public:
    Circle()
    {
        radius=0;
    }
    void gett()
    {
        cout<<"Enter radius of circle: ";
        cin>>radius;
    }
    void area()
    {
        cout<<"Area of circle is: "<<(3.14*radius*radius)<<endl;
    }
};

int main()
{
    float len,bre;
    Shape *s;

    Rectangle r;
    Circle c;

    r.get();
    c.gett();

    s=&r;
    s->area();

    s=&c;
    s->area();
}
