#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;

class complex
{
    float x, y;

public:
    complex(){};
    complex(float a, float b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "Complex number is: " << x << "+ i" << y << endl;
    }
    complex operator+(complex); // using member function
    friend complex operator-(complex, complex);
};
complex operator-(complex c1, complex c2)
{
    complex temp;
    temp.x = abs(c1.x - c2.x);
    temp.y = abs(c1.y - c2.y);
    return temp;
}
complex complex::operator+(complex c)
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
}

int main()
{
    complex c1, c3;
    c1 = complex(1.2, 1.5);
    complex c2(2.2, 0);
    c2.display();
    c1.display();

    c3 = c1 + c2;
    c3.display();
    complex c4, c5;
    c4 = c1 - c2;
    c5 = operator-(c1, c2);
    c4.display();
    c5.display();
    return 0;
}