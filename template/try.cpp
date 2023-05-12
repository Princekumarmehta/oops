// #include <iostream>
// using namespace std;
// class person{
//     protected:
//     string name;
//     int age;
//     public:
//     // person(string a,int y){
//     //     name=a;
//     //     age=y;
//     // }
//     void getdata(){
//       cout<<"\nname  is:"<<name<<endl;
//       cout<<"age is "<<age<<endl;
//     } 
//     void setdata(){
//         cout<<"\nenter n a "<<endl;
//         cin>>name>>age;
//     }

// };
// class student: public virtual person{
//     protected:
//     int usn;
//     float cgpa;
//     public:
//     // student(int us,float c){
//     //     person::getdata();
//     //     usn=us;
//     //     cgpa=c;
//     // }
//     void getdata(){
//         cout<<"\nusn and cgpa is:"<<usn<<cgpa<<endl;
//     }
//     void setdata(){
//         cout<<"\nenter stude";
//         cin>>usn>>cgpa;
//     }
// };
// class faculty : public virtual person
// {   protected:
//     string subj;
//      int meet;


//     // student(string us, int c)
//     // {
//     //     person::getdata();
//     //     subj = us;
//     //     meet = c;
//     // }
//     public:
//     void getdata()
//     {
//         cout << "\nsubject and meet  is:" << subj<< meet << endl;
//     }
//     void setdata()
//     {
//         cout << "\nenter y=teacehr";
//         cin >>subj>>meet;
//     }
// };
// class ta:public student,public faculty{
//     int classes;
//     public:
//     // ta(int c){
//     //     person::getdata();
//     //     classes=c;
//     // }2pp[]
//     void getdata(){
//         cout<<"\nEnter clas: ";
//         cout<<classes;
        
//     }
//     void setdata(){
//         cout<<"\nenter ta: ";
//         cin>>classes;
//     }
// };
// int main(){
//     ta t1;
//     t1.person::setdata();
//     t1.setdata();
//     int c;
//     cout<<"enter c"<<endl;
//     cin>>c;
//     switch(c){
//         case 1: t1.student::setdata();
//         t1.student::getdata();
//         t1.person::getdata();
//         t1.getdata();
//         break;
//         case 2:
//         t1.faculty::setdata();
//         t1.faculty::getdata();
//         t1.person::getdata();
//         t1.getdata();
//         break;
//     }
// return 0;
// }
#include <iostream>
using namespace std;
class ship{
    protected:
    string name;
    int year;
    public:
    ship(string a ,int y){
        name=a;
        year=y;
    }
    // void getdata(){
    //     cout<<"\nShip name is "<<name<<year;
    // }
    // void setdata(){
    //     cout<<"Enter ship:";
    //     cin>>name>>year;
    // }
    virtual void print(){
        cout<<"1st"<<name<<year<<endl;
    }

};
class cruise:public ship{
    protected:
    int max;
    public:
    cruise(string a,int y){
        ship(a,y);
        cout<<"Enter max"<<endl;
        cin>>max;
    }
    // void getdata(){
    //     cout << endl
    //          << "max: ";
    //     cin >> max;
        
       
    // }
    // void setdata(){
    //     cout << endl
    //          << "data cruise " << max;
    // }
    void print(){
        cout<<"name"<<name<<endl<<max;
    }
};
class cargo : public ship
{
protected:
    int cap;

public:
    cargo(string a, int y)
    {
        ship(a, y);
        cout << "Enter cap" << endl;
        cin >> cap;
    }
    // void getdata()
    // {
    //     cout << endl
    //          << "data cruise " << max;
        
    // void setdata()
    // {
    //     cout << endl
    //          << "cap: ";
    //     cin >> cap;
    // }
    
    void print()
    {
        cout << "name" << name << endl
             << max;
    }
};
int main(){
    ship *s[3]={new ship("titanic",1946),new cruise("curi",1991),new cargo("caro",1999)};
    for(int i=0;i<3;i++){
        s[i]->print();
    }
    return 0;
}