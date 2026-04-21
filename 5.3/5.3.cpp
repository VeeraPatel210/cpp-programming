#include <iostream>
#include <fstream>
using namespace std;

class Inventory
{
    string name;
    int quantity;
    float price;
public:
    void getData()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter quantity: ";
        cin>>quantity;
        cout<<"Enter price: ";
        cin>>price;
    }
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Quantity: "<<quantity<<endl;
        cout<<"Price: "<<price<<endl;
    }
     void write(ofstream &file)
    {
        file << name << " " << quantity << " " << price << endl;
    }

    bool read(ifstream &file)
    {
        if((file >> name >> quantity >> price))
            return true ;
        else
            return false;
    }
      string getName()
    {
        return name;
    }
};

void addItem()
{
    Inventory i;
    ofstream file;
    file.open("inventory.txt",ios::app);

    if(!file)
    {
        cout<<"File does not exist."<<endl;
        return;
    }

    i.getData();
    i.write(file);

    file.close();
    cout<<"Item added.";
}

void viewItem()
{
    Inventory i;
    ifstream file;
    file.open("inventory.txt",ios::in);

    if(!file)
    {
        cout<<"File does not exist."<<endl;
    }
    cout<<"-----Inventory List-----"<<endl;
    while(i.read(file))
    {
         i.show();
    }

    file.close();
}

void searchItem()
{
    string Name;
    Inventory i;
    ifstream file;
    file.open("inventory.txt",ios::in);

    cout<<"Enter item name to search: ";
    cin>>Name;

    if(!file)
    {
        cout<<"File does not exist."<<endl;
    }
    while (i.read(file))
    {
        if (i.getName() == Name)
        {
            cout << "\nItem Found:\n";
            i.show();
            break;
        }
    }
    cout<<"Item not found!";
    file.close();
}

int main()
{
    int ch;
    do
    {
        cout<<"-----Menu-----"<<endl;
        cout<<"1)Add item"<<endl;
        cout<<"2)View item"<<endl;
        cout<<"3)Search item"<<endl;
        cout<<"4)Exit."<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            {
                addItem();
                break;
            }
        case 2:
            {
                viewItem();
                break;
            }
        case 3:
            {
                searchItem();
                break;
            }
        }
    }while(ch!=4);

   return 0;
}
