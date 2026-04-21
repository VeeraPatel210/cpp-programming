#include <iostream>
using namespace std;


class Fuel
{
protected:
    string type;
public:
    Fuel()
    {
        type="unknown";
    }
    Fuel(string t)
    {
        type=t;
    }
};

class Brand
{
protected:
    string name;
public:
    Brand()
    {
        name="unknown";
    }
    Brand(string n)
    {
        name=n;
    }
};

class Car : public Fuel,public Brand
{
public:
    Car(string n,string t):Brand(n),Fuel(t)
    {

    }
    void show()
    {
        cout<<"-----Details-----"<<endl;
        cout<<"Brand: "<<name<<endl;
        cout<<"Fuel Type: "<<type<<endl;

    }
};

int main()
{
    string name,type;

    cout<<"Enter name of car: ";
    cin>>name;
    cout<<"Enter fuel type: ";
    cin>>type;

    Car c(name,type);
    c.show();

    return 0;
}
