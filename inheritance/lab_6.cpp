#include <iostream>
using namespace std;
class persondata{
    string first_name,last_name,adresss,city,state,phone_num;
public:
persondata(string f=0,string l=0 ,string a=0,string c=0,string s=0,string p=0){
    first_name=f;
    last_name=l;
    adresss=a;
    city=c;
    state=s;
    phone_num=p;

}
void get_firstname(string s){
    first_name=s;
}
void get_last_name(string s1){
    last_name=s1;
}
void get_adress(string s2){
    adresss=s2;
}
void get_city(string s3){
    city=s3;
}
void get_state(string s4){
    state=s4;
}
void get_phone(string s5){
    phone_num=s5;
}
string set_first_name(){
return first_name;

}
string set_last_name()
{
return last_name;
}
string set_adress()
{
return adresss;
}
string set_city()
{
return city;
}
string set_state()
{
return state;
}
string set_phone()
{
return phone_num;
}

};
class customerdata: public persondata
{ string cus_num,email_id;


public:
customerdata(string cn = 0, string em = 0 ,string l1=0, string l2=0 ,string l3=0 ,string l4=0 ,string l5=0,string l6=0)
{
cus_num = cn;
email_id = em;
get_firstname(l1);
get_last_name(l2);
get_adress(l3);
get_city(l4);
get_state(l5);
get_phone(l6);
    }
   void getcus_num(string m1){
    cus_num=m1;
   }
   void get_email(string m2){
    email_id=m2;
   }

    

};