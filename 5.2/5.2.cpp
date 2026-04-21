#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int words=0;
    ifstream file;
    file.open("demo.txt",ios::in);

    if(!file)
    {
        cout<<"File does not exist.";
    }

    string temp;

    while(getline(file, temp))
    {
        lines++;

        int i=0;
        int n=temp.length();

        while(i<n)
        {
            chars++;
            while(i < n && temp[i] == ' ')
            {
                i++;
                chars++;
            }
            if(i < n)
            {
                words++;
                while(i < n && temp[i] != ' ')
                {
                    i++;
                    if(i < n) chars++;
                }
            }
        }

        chars++; // for newline
    }

    return 0;

}

