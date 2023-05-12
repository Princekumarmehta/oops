#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main(){
// ofstream out("multiple.txt");
 string s1,s2,s3,s4;
// cout<<"ENter a line of data: \n";
// getline(cin>>ws,s1);
// out<<s1<<endl;
// out.close();
int a,b,c;
float d;
ifstream in("multiple.txt");
getline(in,s2);
in>>a;
getline(in>>ws, s3);
in>>b;
getline(in>>ws, s4);
in>>d;

cout<<s2<<endl;
cout << s3 << endl;
cout << s4 << endl;
cout<<a<<endl;
cout << b << endl;
cout << d << endl;

return 0;
}