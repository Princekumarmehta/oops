#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;

class number
{
    int n;

public:
    number(int n)
    {
        this->n = n;
    }
    void print()
    {
        cout << "n is " << n;
    }
    operator int() // operator type inside memebr of c
    {
        return n;
    }
};

int main()
{
    number n1 = 5;
    int x = n1;
    cout << x;
    return 0;
}