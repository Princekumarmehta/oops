#include <iostream>
using namespace std;
int main(){
    int *p;
    cout<<&p;
    p = new int[4];
    cout<<endl<<&p;
    int q=4;
    *p=q;
    cout<<endl<<&p;

    p=&q;
    cout << endl
         << p;
         *p++;
    cout << endl
         << &q;
    
    *p++;
    cout << endl
         << &q;
    cout << endl
         << p;
    p++;
    cout << endl
         << &q;
    cout << endl
         << p;
    return 0;
}