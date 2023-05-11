#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "coordinates are (" << x << "," << y << ")";
    }
};

int main()
{
    point p1(10, 15);
    point p2(15, 43);
    p1.display();
    cout << endl;
    p2.display();
    return 0;
}