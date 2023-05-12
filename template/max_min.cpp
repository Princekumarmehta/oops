#include <iostream>
using namespace std;
template <class t>
t max(t a[],int n){
    t maxx=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>maxx){
            maxx=a[i];
        }
    }
    return maxx;
}
template <class t>
t min(t a[], int n)
{
    t minn = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < minn)
        {
            minn = a[i];
        }
    }
    return minn;
}
/*template <class t>
void concat( t *a,t *b ,t *c[] ,int n1 ,int n2){
    for(int i=0;i<n1;i++){
        c[i]=a[i];
    }
    for(int i=0;i<n2;i++){
        c[n1+i]=b[i];
    }
}*/
template <typename T, int N>
void AddArrays(T (&a)[N], T (&b)[N], T (&result)[N])
{
    for (int i = 0; i < N; i++)
    {
        result[i] = a[i] + b[i];
    }
}

int main(){
    int a[6]={0001,000,00,01,0,03};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<max(a,size)<<endl;
    int b[6] = {0001, 000, 00, 01, 0, 03};
    int size2 = sizeof(b) / sizeof(b[0]);
    cout << max(b, size);
    cout<<"min is :"<<min(a,size);
    int d = size + size2 + 1;
     /*int c[d];
    concat(a,b,c,size,size2);
   for(int i=0;i<d;i++){
    cout<<c[i];
   }*/
    int result[d];

    AddArrays(a, b, result);

    for (int i = 0; i < d; i++)
    {
        std::cout << result[i] << " ";
    }

    return 0; 
}