#include <iostream>
using namespace std;

class Person
{
    int age;
    string name;
public:
    Person()
    {
        age=0;
        name="unknown";
    }
    Person(int a, string n)
    {
        age=a;
        name=n;
    }
    void showp()
    {
        cout<<"Age: "<<age<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

class Employee : public Person
{
    int id;
public:
    Employee()
    {
        id=0;
    }
    Employee(int a,string n,int i): Person (a,n)
    {
        id=i;
    }
    void showe()
    {
        showp();
        cout<<"ID: "<<id<<endl;
    }
};

class Manager : public Employee
{
    string dept;
public:
    Manager()
    {
        dept="unknown";
    }
    Manager(int a,string n,int i,string d):Employee(a,n,i)
    {
        dept=d;
    }
    void show()
    {
        showe();
        cout<<"Department: "<<dept<<endl;
    }
};

int main()
{
    int n,age,id;
    string name,dept;

    cout<<"Enter number of employees: ";
    cin>> n;
    Manager m[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter id: ";
        cin>>id;
        cout<<"Enter department: ";
        cin>>dept;
        m[i]=Manager(age,name,id,dept);

    }
    cout<<endl<<"------Details------"<<endl;
    for(int i=0;i<n;i++)
    {
        m[i].show();
        cout<<endl;
    }

    return 0;
}
