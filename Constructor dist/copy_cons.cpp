#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
class code
{
    int id;

public:
    code(){};
    code(int a)
    {
        id = a;
    }
    code(code &i)
    {
        id = i.id;
    }
    friend void show(code c)
    {
        cout << "\nId is " << c.id;
    }
};
int main()
{
    code a(15);
    show(a);
    code b(a);
    show(b);
    code c = b;
    show(c);
    return 0;
}