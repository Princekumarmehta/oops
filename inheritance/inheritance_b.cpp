#include <iostream>
using namespace std;

class base{
    int a,b,c;
    public:
    base(int m=0,int n=0,int o=0){
        a=m;
        b=n;
        c=o;
    }
    void setdata(){
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    
    void display(){
        cout<<"Display of base"<<endl;
    } 
};
class derived:public base {
    public:
    derived(int a,int b ,int c){
        
    }
    void show(){
        cout<<"Dis of derived"<<endl;
    }
};

int main(){
    derived d(1,2,3);
    d.setdata();
    d.show();
    d.display();
    return 0;
}