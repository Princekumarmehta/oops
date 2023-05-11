#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
class matrix
{
    int m, n;
    int p[100][100];

public:
    void getdata()
    {
        cout << "Enter m and n: ";
        cin >> m >> n;
        cout << "\nEnter the elements for matrix:" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> p[i][j];
            }
        }
    }
    void display()
    {
        cout << "\nMatrix is: \n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << p[i][j] << "\t";
            }
            cout << endl;
        }
    }
    friend matrix multiply(matrix m1, matrix m2);
};

matrix multiply(matrix m1, matrix m2)
{
    matrix m3;
    m3.m = m1.m;
    m3.n = m2.n;
    for (int i = 0; i < m1.m; i++)
    {
        for (int j = 0; j < m1.n; j++)
        {
            m3.p[i][j] = 0;
            for (int k = 0; k < m1.n; k++)
            {
                m3.p[i][j] += m1.p[i][k] + m2.p[k][j];
            }
        }
    }
    return m3;
}

int main()
{

    matrix m1, m2, m3;
    m1.getdata();
    m1.display();
    m2.getdata();
    m2.display();
    m3 = multiply(m1, m2);
    m3.display();
    return 0;
}