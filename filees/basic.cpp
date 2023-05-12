#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main(){
// string s1="Hello File \n";
// string s2="How are you?",s3;
// ofstream ou("basic_1.txt");
// ou<<s1;
// // ofstream out()"basic_.txt");
// ou<<s2;
/*string s3;
ifstream in ("basic_1.txt");
in>>s3;
cout<<s3;
*/
string s1,s2,s3,s4;
int n;
cout<<"Enter Total Number of names: ";
cin>>n;
// cout<<endl;
ofstream out ("basic_1.txt");
for(int i=0;i<n;i++){
cout<<"\nEnter your name: ";
getline(cin>>ws,s1);
out<<"Name stored is: "<<s1<<endl;
}
out.close();
ifstream in ("basic_1.txt");
while(in.eof()==0){
    getline(in,s2);
    cout<<s2<<endl;
}
in.close();
//Using Member functuon
ofstream fout;
// ("basic_1.txt");
 
// fout.open("basic_1.txt" , ofstream::in); start replacing from starting
// fout.open("basic_1.txt", ofstream::ate); Output from end
fout.open("basic_1.txt", ofstream::app); //All Operation From end
fout << "Here We Go: " << 1 << endl;


fout.close();
ofstream ok("basic_1.txt",ios::app);
ok<<"\nHI";
ok.close();
return 0;
}