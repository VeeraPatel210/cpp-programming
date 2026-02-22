#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float m1,m2,m3;
    float avg;
public:
    //default constructor
    Student()
    {
        roll=1;
        name= "Chips";
        m1=67;
        m2=56;
        m3=88;
        calculate();
    }

    //parameterized constructor
    Student(int r,string n,float M1, float M2, float M3)
    {
        roll=r;
        name=n;
        m1=M1;
        m2=M2;
        m3=M3;
        calculate();
    }
    float calculate();
    void display();
};
float Student ::  calculate()
{
    avg= (m1+m2+m3)/3 ;
    return avg;

}
void Student :: display()
{
        cout <<"Roll No: "<< roll<<endl;
        cout <<"Name: "<< name<<endl;
        cout <<"Marks: "<< m1<< ", "<< m2<< ", "<<m3<<endl;
        cout <<"Average: " << calculate() << endl;
}

int main()
{
    int n;
    //default values
    Student s1;
    s1.display();

    //user input values
    Student s[10];
    cout<<"Enter number of students: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int roll;
        string name;
        float m1,m2,m3;
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Enter name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter marks: ";
        cin>>m1>>m2>>m3;
        cout<<"Details: ";

        s[i]= Student(roll,name,m1,m2,m3);

        s[i].display();
    }
    return 0;
}



