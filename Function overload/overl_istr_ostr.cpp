#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;

const int size = 3;
class vector
{
    int v[size];

public:
    vector();       // construct null vector
    vector(int *x); // construct vecotr from array
    friend vector operator*(int a, vector b);
    friend vector operator*(vector a, int b);
    friend istream &operator>>(istream &, vector &);
    friend ostream &operator<<(ostream &, vector &);
};

ostream &operator<<(ostream &out, vector &x)
{
    out << "(" << x.v[0];
    for (int i = 1; i < size; i++)
    {
        out << "," << x.v[i];
    }
    out << ")";
    return out;
}
istream &operator>>(istream &in, vector &x)
{
    for (int i = 0; i < size; i++)
    {
        in >> x.v[i];
    }
    return in;
}
vector::vector()
{
    for (int i = 0; i < size; i++)
    {
        v[i] = 0;
    }
}
vector::vector(int *x)
{
    for (int i = 0; i < size; i++)
    {
        v[i] = x[i];
    }
}

vector operator*(vector a, int b)
{
    vector v1;
    for (int i = 0; i < size; i++)
    {
        v1.v[i] = a.v[i] * b;
    }
    return v1;
}
vector operator*(int a, vector b)
{
    vector v1;
    for (int i = 0; i < size; i++)
    {
        v1.v[i] = b.v[i] * a;
    }
    return v1;
}
int x[size] = {1, 2, 3};

int main()
{
    vector m;
    vector n = x;
    cout << "Enter elements for vector m: " << endl;
    cin >> m;
    cout << "m =" << m;
    vector p, q;
    p = 2 * m;
    q = n * 2;
    cout << endl;
    cout << "p is " << p;
    cout << "\nq is " << q;
    return 0;
}