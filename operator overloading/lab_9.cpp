#include <iostream>
using namespace std;
class ship
{
protected:
    string name;
    int year;

public:
    ship(string n, int y)
    {
        name = n;
        year = y;
    }
    virtual void print()
    {
        cout << "name: " << name << '\t' << "year: " << year << endl;
    }
};
class cruiseship : public ship
{
    int max;

public:
    cruiseship(string n, int y) : ship(n, y)
    {
        cout << "enter max" << endl;
        cin >> max;
    }
    void print()
    {
        cout << "name: " << name << '\t' << "max passangers: " << max << endl;
    }
};
class cargo : public ship
{
    int cap;

public:
    cargo(string n, int y) : ship(n, y)
    {
        cout << "enter cap" << endl;
        cin >> cap;
    }
    void print()
    {
        cout << "name: " << name << '\t' << "capacity: " << cap << endl;
    }
};
int main()
{
    int i;
    ship *p[3] = {new ship("ship", 1990), new cruiseship("cruise", 1995), new cargo("cargo", 1996)};
    for (i = 0; i < 3; i++)
    {
        p[i]->print();
    }
    return 0;
}
