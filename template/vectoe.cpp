#include <iostream>
using namespace std;
#include <stdlib.h>
const int size = 3;
template <class T>
class vecto
{
    T* v; // type T vector
public:
    vecto()
    {
        v = new T[size];
        for (int i = 0; i < size; i++)
            v[i] = 0;
    }
    vecto(T *a)
    {
        for (int i = 0; i < size; i++)
            v[i] = a[i];
    }
    T operator*(vecto &y)
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
            sum += v[i] * y.v[i];
        return sum;
    }
    void display(void)
    {
        for (int i = 0; i < size; i++)
            cout << v[i] <<"\t";
        cout <<"\n";
    }
};
int main(){
    int x[3] = {1, 2, 3};
    int y[3] = {4, 5, 6};
    vecto <int> v1;
    vecto <int> v2;
    v1 = x;
    v2 = y;
    cout <<"v1 = ";
    v1.display();
    cout <<"v2 = ";
    v2.display();
    cout <<"v1 X v2 = "<< v1 * v2;
    return 0;
}