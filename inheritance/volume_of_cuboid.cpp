#include <iostream>
using namespace std;
class rectangle{
    int len,breath;
    public:
    void getdata(int l,int b){
        len=l;
        breath=b;
    }
    int setlength(){
       return len;
    }
    int setbreath(){
        return breath;
    }

    
};
class cuboid:public rectangle{
    int height;
    public:
    cuboid(int l=0,int b=0,int h=0){
        getdata(l,b);
        height=h;
    }
    int volume(){
        int vol;
        vol=height*setlength()*setbreath();
    }
};
int main()
{
    cuboid c(1,2,3),c2;
    int volu=c.volume();
    cout<<volu<<endl;
    cout<<c2.volume();
    return 0;
}