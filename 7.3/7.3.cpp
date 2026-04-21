#include <iostream>
using namespace std;
class Fahrenheit;

class Celsius
{
    float cel;
public:
    Celsius()
    {
    }
    void set(float x)
    {
        cel=x;
    }
    float get()
    {
        return cel;
    }
    Celsius(Fahrenheit f);
    void showw()
    {
        cout<<"Celsius: "<<cel<<endl;
    }

};

class Fahrenheit
{
    float fah;
public:
    Fahrenheit()
    {
    }
    void sett(float y)
    {
        fah=y;
    }
    float gett()
    {
        return fah;
    }
    Fahrenheit(Celsius c)
    {
        fah=((9/5)*c.get())+32;
    }
    void display()
    {
        cout<<"Fahrenheit: "<<fah<<endl;
    }
};
Celsius:: Celsius(Fahrenheit f)
    {
        cel=(f.gett()-32)*(5.0/9);
    }

int main()
{
    Celsius c;
    Fahrenheit f;

    c.set(37);
    f=c;
    f.display();


    f.sett(103);
    c=f;
    c.showw();



    return 0;
}
