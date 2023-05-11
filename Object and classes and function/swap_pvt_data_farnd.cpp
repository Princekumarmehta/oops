#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
class class_2;
class class_1
{
    int value1;

public:
    void indata(int a) { value1 = a; }
    void display() { cout << value1 << endl; }
    friend void exchange(class_1 &, class_2 &);
};
class class_2
{
    int value2;

public:
    void indata(int a) { value2 = a; }
    void display() { cout << value2 << endl; }
    friend void exchange(class_1 &, class_2 &);
};
void exchange(class_1 &a, class_2 &b)
{
    int temp = a.value1;
    a.value1 = b.value2;
    b.value2 = temp;
}

int main()
{
    class_1 c1;
    c1.indata(5);
    class_2 c2;
    c2.indata(60);
    cout << "BEfore swap: ";
    c1.display();
    c2.display();
    exchange(c1, c2);
    cout << "BEfore swap: ";
    c1.display();
    c2.display();

    return 0;
}