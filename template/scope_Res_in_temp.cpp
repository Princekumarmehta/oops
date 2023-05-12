#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;

template<class t>
class scope{
    t d;
    public:
    scope(t a){
        d=a;
    }
    void display();
};
template <class t>
void scope<t>::display(){
    cout<<"value of data is "<<d;
}
int main(){
    scope <int> s1(4);
    scope<float> s4(5.66);
    scope<char> s3('c');
    scope<string> s2("HI Hello");

    s1.display();
    cout<<endl;
    s2.display();
    cout << endl;
    s3.display();
    cout << endl;
    s4.display();
    cout << endl;

    return 0;
}