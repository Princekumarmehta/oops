#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;

void fun(int a){
    cout<<"no temp"<<a<<endl;
}
template <class t>
void fun(t a){
    cout<<"temp function "<<a<<endl;
}

int main(){
    fun(4); //if match is there then go
    fun(4.3); 
return 0;
}