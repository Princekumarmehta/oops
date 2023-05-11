#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
class complex
{
    float x, y;

public:
    complex()
    {
        x = y = 0;
    }
    complex(float a)
    {
        x = y = a;
    }
    complex(float real, float img)
    {
        x = real;
        y = img;
    }
    friend complex sum(complex c1, complex c2)
    {
        complex res;
        res.x = c1.x + c2.x;
        res.y = c1.y + c2.y;
        return res;
    }
    friend void show(complex c)
    {
        cout << "\n x and y are" << c.x << c.y;
    }
};
int main()
{
    complex c1(1, 2);
    complex c2(3), c3;

    c3 = sum(c1, c2);
    show(c3);

    return 0;
}