#include <iostream>
using namespace std;
class time{
    int hr,min,sec;
    public:
    time();
    time(int h,int m,int s);
    friend istream & operator >>(istream & , time &t);
    friend ostream &operator <<(ostream &, time &t);
    friend time operator - (time );
    /*void display(){
        cout<<"Time is : "<<hr<<":"<<min<<":"<<sec<<endl;
    }*/
};
time::time(){
    hr=0;
    min=0;
    sec=0;
}
time::time(int h, int m, int s){
    hr=h;
    min=m;
    sec=s;
}
istream &operator>>(istream &in, time &t1)
{
    in >> t1.hr;
    in >> t1.min;
    in>>t1.sec;
    return (in);
}
ostream &operator<<(ostream &out, time &t1)
{
    out <<  t1.hr<<":";
    out << t1.min<<":";
    out << t1.sec<<endl;
    return (out);
}
time operator -(time t2){
    time t3;
    if(t2.hr>12){
       t3.hr=t2.hr-12;
       t3.min=t2.min;
       t3.sec=t2.sec;
    }
    else {
       t3.hr = t2.hr;
       t3.min = t2.min;
       t3.sec = t2.sec;
    }
    return t3;

}

int main()
{
    time t1,t3;
    cout<<"Enter Time in 24 hr :";
    cin >> t1;
    cout << endl
         << t1;
    t3=-t1;
    cout<<"Time in 12: ";
    cout<<t3;
    return 0;

}
