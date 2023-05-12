#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;

template <class t1=char, class t2=int>
class stdu{
    t1 a;
    t2 b;
    public:
    stdu(t1 x ,t2 y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"a is "<<a<<endl;
        cout<<"b is "<<b<<endl;
    }
};
int main(){
     stdu<> s1('a',1);
    // stdu <> s2( 4,4);  //not correct
    // stdu <> s3('a','b');
    // stdu<> s4("hi","ram");
    stdu<int, int> s2(4, 4); // correct
    stdu<char, char> s3('a', 'b');
    stdu<string, string> s4("hi", "ram");
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    return 0;
}