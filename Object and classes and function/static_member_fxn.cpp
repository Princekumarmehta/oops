#include <iostream>
using namespace std;

class test
{
    int code;
    static int count;

public:
    void setcode()
    {
        code = ++count;
    }
    void showcode()
    {
        cout << "Object number: " << code << endl;
    }
    static void showcount()
    {
        cout << "Count is : " << count << endl;
    }
};
int test::count = 0;
int main()
{
    test t1, t2;
    t1.setcode();
    t2.setcode();
    test::showcount();
    test t3;
    t3.setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}