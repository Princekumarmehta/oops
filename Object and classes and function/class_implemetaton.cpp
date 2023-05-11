#include <iostream>
using namespace std;

class item
{
    int number;
    float cost;

public:
    void getdata(int a, float);
    void putdata()
    {
        cout << "the number is:" << number << " and cost is:" << cost << endl;
    }
};

// void item::getdata(int a ,float b)
// {
//     cout << "Enter the value of number and cost: ";
//     cin >> number >> cost;
// }
void item::getdata(int a, float b)
{
    number = a;
    cost = b;
}

int main()
{
    item i1;
    // i1.getdata();
    i1.getdata(5, 89.65646);
    i1.putdata();
    return 0;
}