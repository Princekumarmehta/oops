#include <iostream>
using namespace std;
#define size 4

int binn[size], b[size], bit[size], top = -1, count = 0;
void conv_to_bin(int num)
{
    int temp = num, c = count;
    while (num > 0)
    {
        count++;
        temp = temp / 2;
    }

    while (num > 0)
    {
        temp = num % 2;
        binn[c] = temp;
        c--;
        num = num / 2;
    }
}
int main(){
    int a[4]={2,4,7,6};
    for(int i=0;i<4;i++){
        conv_to_bin(a[i]);
        cout<<binn<<endl;
    }
    return 0;
}