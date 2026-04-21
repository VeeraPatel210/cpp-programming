#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int words=0;
    string s;

    cout<<"Enter your paragraph: "<<endl;
    getline(cin,s);
    int i=0;
    int n=s.length();

    while(i<n)
    {
        if(s[i]==' ')
        {
            words++;
        }
        i++;
    }
    if(n>0)
    {
        words++;
    }

    cout<<"Number of words in your paragraph: "<<words;

    return 0;
}


