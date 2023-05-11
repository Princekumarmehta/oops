#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
class number
{
    int n;

public:
    void printDetails()
    {
        cout << n;
    }
    number(int n)
    {
        this->n = n;
    }
};
int main()
{
    number n1 = 15;
    n1.printDetails();

    return 0;
}