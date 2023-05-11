#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int count = 0;
class test
{
public:
    test()
    {
        count++;
        cout << "\n\nConstructor msg::Object number" << count << "created..";
    }
    ~test()
    {
        cout << "\nDestrutor msg:Object number" << count << "destroyed..";
        count--;
    }
};

int main()
{
    cout << "Inside the main block\n";
    cout << "Crewsitgn firrst\n";
    test T1;
    {
        // Block 1
        cout << "Inside block\n";
        cout << "Creating two more obj";
        cout << endl;
        test t2, t3;
        cout << "\nLeeaving blovk";
    }
    cout << "Block inside the main block" << count;
    return 0;
}
