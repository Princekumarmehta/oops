#include <iostream>
using namespace std;
template <class t1 , class t2 ,class t3>
class student{
    t1 a;
    t2 b;
    t3 c;
    public:
    student(t1 x,t2 y ,t3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<a<<endl<<b<<endl<<c;
    }
}; 
int main(){
    student <int ,string ,string> s1(45,"1BM21IS122","BMSCE");
    s1.display();
    return 0;
}