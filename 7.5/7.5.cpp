#include <iostream>
using namespace std;

class Grade
{
protected:
    float marks;
public:
    virtual void grade()=0;
};
class Undergrad : public Grade
{
public:
    void get()
    {
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void grade();
};

class Postgrad : public Grade
{
public:
    void get()
    {
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void grade();
};


void Undergrad :: grade()
{
    if(marks>=90)
    {
        cout<<"Grade A"<<endl;
    }
    else if(marks>=70)
    {
        cout<<"Grade B"<<endl;
    }
    else if(marks>=50)
    {
        cout<<"Grade C"<<endl;
    }
    else if(marks>=33)
    {
        cout<<"Grade D"<<endl;
    }
    else
    {
        cout<<"FAIL"<<endl;
    }
}

void Postgrad :: grade()
{
    if(marks>=96)
    {
        cout<<"Grade A"<<endl;
    }
    else if(marks>=85)
    {
        cout<<"Grade B"<<endl;
    }
    else if(marks>=70)
    {
        cout<<"Grade C"<<endl;
    }
    else if(marks>=50)
    {
        cout<<"Grade D"<<endl;
    }
    else
    {
        cout<<"FAIL"<<endl;
    }
}

int main()
{
    int ch,n;
    Grade *g;

    cout<<"------Menu------"<<endl;
    cout<<"1)Undergraduate"<<endl;
    cout<<"2)Postgraduate"<<endl;
    cout<<"Enter the level: ";
    cin>>ch;
    cout<<"Enter the number of students: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        if(ch==1)
        {
            Undergrad *u = new Undergrad;
            u->get();
            g=u;
            g->grade();

        }
        else if(ch==2)
        {
            Postgrad *p = new Postgrad;
            p->get();
            g=p;
            g->grade();
        }
        else
        {
            cout<<"Invalid choice entered";
        }
    }
}
