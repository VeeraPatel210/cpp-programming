#include <iostream>
using namespace std;

class Point
{
    int x,y;
public:
    Point(int x=0,int y=0)
    {
        this->x=x;
        this->y=y;
    }
    Point& movee(int dx,int dy)
    {
        this->x+=dx;
        this->y+=dy;
        return *this;
    }
    void print()
    {
        cout<<x<<endl;
        cout<<y;
    }
};

int main()
{
    int x,y;
    Point p;

    p.movee(2,3).movee(-1,4).print();

    return 0;
}
