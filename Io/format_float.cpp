#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#define value 4
using namespace std;
int main(){
    cout.fill('*');
    cout.width(15);

    cout.precision(4);
    cout << sqrt(value) << endl;
    cout.fill('*');
    cout.width(15);
    cout.precision(4);
    cout.setf(ios::showpoint);
    cout << sqrt(value) << endl;
    cout.fill('*');
    cout.width(15);
    cout.precision(4);
    cout.setf(ios::showpos);
    cout << sqrt(value) << endl;
    cout.fill('*');
    cout.width(15);
    cout.precision(4);
    cout.setf(ios::fixed, ios::floatfield);
    cout << sqrt(value) << endl;

    return 0;
}