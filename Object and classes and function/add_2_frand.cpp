#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;

class a;
class b
{
    int data;

public:
    void setdata(int v)
    {
        data = v;
    }
    friend void add(a, b);
};
class a
{
    int data;

public:
    void setdata(int v)
    {
        data = v;
    }
    friend void add(a, b);
};

void add(a a1, b b1)
{
    cout << "Sum of data value is " << a1.data + b1.data;
}

int main()
{
    a a1;
    a1.setdata(4);
    b b1;
    b1.setdata(5);
    add(a1, b1);
    return 0;
}