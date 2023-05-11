#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
class space
{
    int a, b, c;

public:
    void getdata(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display();
    void operator-();
};
void space::display()
{
    cout << "value of a b c is " << a << " " << b << " " << c << endl;
}

void space::operator-()
{
    a = -a;
    b = -b;
    c = -c;
}

int main()
{
    space a;

    a.getdata(1, 2, -3);
    a.display();
    -a;
    a.display();

    return 0;
}