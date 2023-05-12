/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int t;
    char s2[6];
    string s1;

    // cin.getline(s2,6);
    // cout.width(5);

    // cout.write(s2,5);
    // cin>>s1;
    // cout.width(5);
    // cout<<s1<<endl;
    // cout<<setw(5)<<s1<<endl;
    // cout<<s1<<setw(5)<<s1;
    // cout.precision(3);
    // cout.width(5);
    // cout << sqrt(2) << endl;
    // cout << 3.14159 << endl;
    // cout << 2.50032 << endl;
    float pi = 22.0 / 7.0;
    int i;
    cout << "Value of PI:\n";
    for (i = 1; i <= 10; i++)
    {
        cout.width(i + 1);
        cout.precision(i);
        cout << pi << endl;
    }

    return 0;
}
