#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
    string name;
    float marks;
public:
    void get()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void show()
    {
        cout<<setw(10)<<name<<setw(10)<<marks<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;

    Student *s;
    s=new Student[n];

    for(int i=0;i<n;i++)
    {
        s[i].get();
    }

    cout<<endl<<"-----------------List-----------------"<<endl;
    cout<<setw(10)<<"Name"<<setw(10)<<"Marks"<<endl;
    for(int i=0;i<n;i++)
    {
        s[i].show();
    }

    delete[] s;
    return 0;
}

