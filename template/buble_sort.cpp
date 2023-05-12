#include <iostream>

using namespace std;

template <class t>
void sort(t a[],int n){
  //int l=sizeof(a)/sizeof(a[0]);

  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            t temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
  }
}
int main(){
    int a[5]={5,19,16,4,2};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,n);
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
    float b[5]={1.1,0.9,3.2,0.8,3.3};
     n = sizeof(b) / sizeof(b[0]);
    sort(b,n);
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << endl;
    }
    char c[5]={'z','c','a','g','d'};
     n = sizeof(c) / sizeof(c[0]);
    sort(c,n);
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << c[i] << endl;
    }
    return 0;

}
