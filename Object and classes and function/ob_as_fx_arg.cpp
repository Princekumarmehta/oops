// Sum of two time
#include <iostream>
using namespace std;

class time
{
    int hr, min;

public:
    void gettime()
    {
        cout << "Enter time value : ";
        cin >> hr >> min;
    }
    void showtime()
    {
        cout << "\n time is " << hr << ":" << min << endl;
    }
    void sum(time t1, time t2)
    {
        min = t1.min + t2.min;
        hr = min / 60;
        min = min % 60;
        hr = hr + t1.hr + t2.hr;
    }
};
int main()
{
    time t1, t2, t3;
    t1.gettime();
    t1.showtime();
    t2.gettime();
    t2.showtime();
    t3.sum(t1, t2);
    t3.showtime();
    return 0;
}