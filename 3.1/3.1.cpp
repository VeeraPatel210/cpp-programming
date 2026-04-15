#include <iostream>
using namespace std;

class Employee
{
    string name;
    float salary;
    float bonus;
public:
    //parameterized constructor
    Employee(string n, float s, float b=3000)
    {
        name=n;
        salary=s;
        bonus=b;
    }
    inline float totSal()
    {
        return (salary+bonus);
    }
    void display();
};

void Employee :: display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<"Bonus: "<<bonus<<endl;
    cout<<"Total Salary: "<<totSal()<<endl;
}

int main()
{
    int n,i,ch;
    string name;
    float salary,bonus;
    cout<<"Enter the number of employees: ";
    cin>>n;

    Employee *e[n];

    for(i=0;i<n;i++)
    {
        cout<<"Details of employee "<<i+1<<" : "<<endl;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter salary: ";
        cin>>salary;

        cout<<"Press 1 for default bonus and 2 for custom bonus : ";
        cin>>ch;

        if(ch==1)
        {
            e[i] = new Employee(name,salary);
        }
        else if(ch==2)
        {
            cout<<"Enter bonus: ";
            cin>>bonus;
            e[i] = new Employee(name,salary,bonus);
        }
        else
        {
            cout<<"Invalid choice entered.";
        }
    }

    for(i=0;i<n;i++)
    {
        e[i]-> display();
    }
    return 0;
}
