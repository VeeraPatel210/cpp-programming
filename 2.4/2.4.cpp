#include <iostream>
using namespace std;

class Inventory
{
private:
    int id;
    string name;
    float price;
    int quantity;
public:
    void addStock();
    void incStock();
    void decStock();
    void display();
    int getId();

    //initializing using default constructor
    Inventory()
    {
        id=0;
        name="empty";
        price=0.0;
        quantity=0;
    }
};

void Inventory :: addStock()
{
    cout<<"Enter id:";
    cin>>id;
    cout<<"Enter name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter price: ";
    cin>>price;
    cout<<"Enter quantity: ";
    cin>>quantity;
}

void Inventory :: incStock()
{
    int quan;
    cout<<"how much quantity you want to add: ";
    cin>>quan;
    if(quan<quantity)
    {
        cout<<"Not valid";
    }
    else
    {
        quantity+=quan;
    }
}

void Inventory :: decStock()
{
    int quan;
    cout<<"how much quantity is sold: ";
    cin>>quan;
    if(quan>quantity)
    {
        cout<<"Not valid";
    }
    else
    {
        quantity-=quan;
    }
}

void Inventory :: display()
{
    cout<<"Id:"<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Quantity: "<<quantity<<endl;
}
int Inventory :: getId()
{
    return id;
}


int main()
{
    Inventory i;
    cout<<"Initial Data\n";
    i.display();

    Inventory in[10];
    int ch,n=0,idd;
    x: cout<<"1) Add stock.\n";
    cout<<"2) Increase stock.\n";
    cout<<"3) Decrease stock.\n";
    cout<<"4) Display.\n";
    cout<<"5) Exit.\n";
    cout<<"Enter your choice: ";
    cin>>ch;

    switch(ch)
    {
    case 1:
        {
            if(n<10)
            {
                in[n].addStock();
                n++;
            }
            goto x;
        }
    case 2:
        {
            cout<<"In which id you want to increase stock: ";
            cin>>idd;
            for(int i=0;i<n;i++)
            {
                if(in[i].getId()==idd)
                {
                    in[i].incStock();
                }
            }
            goto x;
        }
    case 3:
        {
            cout<<"In which id you want to decrease stock: ";
            cin>>idd;
            for(int i=0;i<n;i++)
            {
                if(in[i].getId()==idd)
                {
                    in[i].decStock();
                }
            }
            goto x;
        }
    case 4:
        {
            cout<<"In which id you want to display: ";
            cin>>idd;
            for(int i=0;i<n;i++)
            {
                if(in[i].getId()==idd)
                {
                    in[i].display();
                }
            }
            goto x;
        }
    case 5:
        {
            cout<<"Thankyou";
            break;
        }
    default:
        {
            cout<<"Invalid choice entered.";
        }
    }
    return 0;
}
