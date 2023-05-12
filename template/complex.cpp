#include <iostream>
using namespace std;
template <class t>
class complex{
    t a,b;
    public:
    complex(){
        a=b=0;
    }
    complex(t r , t i){
      a=r;
      b=i;
    }
    void getdata(){
        cout<<"Enter the Real and Imaginary Paart:";
        cin>>a>>b;

    }
    void display(){
        cout<<a<<"+i"<<b;
        cout<<endl;
    }
    complex operator + (complex c1){
        complex c3;
        c3.a=a+c1.a;
        c3.b=b+c1.b;
        return c3;
    } 
    

};
int main(){
    complex <int> c1;
    complex <int> c2(2, 4);
    c1.getdata();
    c1.display();
    c2.display();
    complex <int> c4;
     c4=c1+c2;
    cout<<"Sum of above complex numbers is :";
     c4.display();
    return 0;

}