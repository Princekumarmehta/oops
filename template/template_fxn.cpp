#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;

// template <class t1,class t2>
// void swap(t1 *a,t2 *b){
//     t1 x=*a;
//     t2 y=*b;
//     *a=(t1)*b;
//     *b=(t2)x;
// }
// int main(){
//     int a=4.0;
//     float b=5.6;
//     cout<<"a is "<<a<<endl<<"b is "<<b<<endl;
//     swap(&a,&b);
//     cout<<"a is "<<a<<endl<<"b is "<<b<<endl;
// return 0;
// }
template <class t1, class t2>
void swap(t1 &a, t2 &b)
{
    t1 x = a;
    t2 y = b;
    a = (t1)b;
    b = (t2)x;
}
int main()
{
    int a = 4.0;
    float b = 5.6;
    cout << "a is " << a << endl
         << "b is " << b << endl;
    swap(a,b);
    cout << "a is " << a << endl
         << "b is " << b << endl;
    return 0;
}
