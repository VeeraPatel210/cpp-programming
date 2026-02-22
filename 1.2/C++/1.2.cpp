#include <iostream>
using namespace std;
class Books
{
private:
    int bookId;
    string title;
    string author;
    int copies;
public:
    void addBook(Books b[], int &n);
    void issueBook(Books b[],int n);
    void returnBook(Books b[], int n);
    void display(Books b[], int n);
};
void Books :: addBook(Books b[],int &n)
{
    int count,i;
    cout<<"How many books you want to add: ";
    cin>>count;
    for(i=0;i<count;i++)
    {
        cout<<"Enter book id: ";
        cin>>b[n].bookId;
        cin.ignore();

        cout<<"Enter title: ";
        getline(cin,b[n].title);
        cout<<"Enter author: ";
        getline(cin,b[n].author);
        cout<<"Enter no of copies: ";
        cin>>b[n].copies;

        n++;
    }
}

void Books :: issueBook(Books b[], int n)
{
    int id;
    cout<<"Enter Book ID to issue: ";
    cin>>id;

    for(int i=0;i<n;i++)
    {
        if (b[i].bookId == id)
        {
            if (b[i].copies > 0)
            {
                b[i].copies-=1;
                cout<< "Book Issued\n";
            }
            else
            {
                cout<< "Not Available\n";
            }
        }
    }
}

void Books :: returnBook(Books b[],int n)
{
    int id,i;
    cout<<"Enter Book ID to return: ";
    cin>>id;

    for(i=0;i<n;i++)
    {
        if (b[i].bookId == id)
        {
            b[i].copies+=1;
            cout<< "Book Returned\n";
        }
        else
        {
            cout<<"Book not found.";
        }
    }
}

void Books :: display(Books b[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout << "\nBook ID: " << b[i].bookId;
        cout << "\nTitle: " << b[i].title;
        cout << "\nAuthor: " << b[i].author;
        cout << "\nCopies: " << b[i].copies;
    }
}
int main()
{
    Books a;
    Books b[10];
    int ch,n=0;

    x: cout<<"\n 1) Add book\n";
    cout<<"2) Issue book\n";
    cout<<"3) Return book\n";
    cout<<"4) Display total books\n";
    cout<<"5) Exit\n";
    cout<<"Enter your choice: ";
    cin>>ch;

    switch(ch)
    {
    case 1:
        {
            a.addBook(b,n);
            goto x;
        }
    case 2:
        {
           a.issueBook(b,n);
           goto x;
        }
    case 3:
        {
            a.returnBook(b,n);
            goto x;
        }
    case 4:
       {
           a.display(b,n);
           goto x;
       }
    case 5:
        {
            printf("Thank you.");
            break;
        }
    default:
        {
            printf("Invalid input.");
        }
    }
    return 0;
}



