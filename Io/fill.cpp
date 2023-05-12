#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(){
    // cout.fill('<');
    cout.precision(3);
    for (int n = 1; n <= 6; n++)
    {
        if (n % 2 == 0)
            cout.fill('>');
        else
            cout.fill('<');
        cout.width(5);
        cout << n;
        cout.width(10);
        cout << (float)1.0 /n <<endl;
    }
    cout << "\nPadding changed \n\n";
    cout.fill('#'); // fill( ) reset
    cout.width(15);
    cout << 12.345678 <<endl;
    return 0;
}