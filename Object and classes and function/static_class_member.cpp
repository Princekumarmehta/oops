#include <iostream>
using namespace std;

class item
{
    static int count;
    int num;

public:
    void getdata(int a)
    {
        num = a;
        count++;
    }
    void getcount()
    {
        cout << "current Count is :" << count << endl;
    }
};

int item::count = 0;

int main()
{

    item a, b, c;

    a.getcount();
    a.getdata(5);
    a.getcount();
    b.getcount();
    c.getdata(5);
    a.getcount();
    c.getcount();

    return 0;
}