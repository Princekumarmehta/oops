#include <iostream>
#include <string>
using namespace std;

class binay
{

    string s;

public:
    void read()
    {
        cout << "Enter bin" << endl;
        cin >> s;
    }
    void chkbin();
    void ones();
    void displayone();
    void showother(binay b1)
    {
        cout << "\nshow of other is" << b1.s << endl;
    }
};
void binay::chkbin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "not bin";
            exit(0);
        }
    }
}
void binay::ones()
{
    chkbin(); // Calling member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}

void binay::displayone()
{
    ones(); // Calling member function
    cout << "\nOnes Complement of above number is: " << s;
}

int main()
{
    binay b1, b2, b3;

    b1.read();

    b1.displayone();
    b2.showother(b1);
    b2.read();
    b2.displayone();
    b3.read();
    b3.displayone();
    return (0);
}