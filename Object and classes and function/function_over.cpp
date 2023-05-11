#include <iostream>
using namespace std;
// Normal function two different name for diff para
/*int plusFuncInt(int x, int y)
{
    return x + y;
}

double plusFuncDouble(double x, double y)
{
    return x + y;
}

int main()
{
    int myNum1 = plusFuncInt(8, 5);
    double myNum2 = plusFuncDouble(4.3, 6.26);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2;
    return 0;
}*/

// Function_Overloading same name diff parameter
int plusFunc(int x, int y)
{
    return x + y;
}

double plusFunc(double x, double y)
{
    return x + y;
}

int main()
{
    int myNum1 = plusFunc(8, 5);
    double myNum2 = plusFunc(4.3, 6.26);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2;
    return 0;
}