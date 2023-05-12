#include <iostream>
using namespace std;
const int size = 3;
template <class t>
class vectors
{
    t *v;

public:
    vectors()
    {
        v = new t[size];
        for (int i = 0; i < size; i++)
        {
            v[i] = 1;
        }
    }
    vectors(t *a)
    {
        for (int i = 0; i < size; i++)
        {
            v[i] = a[i];
        }
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << v[i] << "\t";
            cout << endl;
        }
    }
};
int main()
{
    int x[3] = {1, 2, 3};
    vectors <int> v;
    v = x;
    v.display();
    return 0;
}