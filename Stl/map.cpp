#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef map<string, int> phoneMap;

int main()
{

    string name;
    int number;
    phoneMap phone;
    cout << "Enter three sets of name and number \n";
    for (int i = 0; i < 3; i++)
    {
        cin >> name;          // get key
        cin >> number;        // get key;
        phone[name] = number; // Put them in map
    }
    phone["jacob"] = 4444; // Insert jacob
    phone.insert(pair<string, int>("Bose", 5555));
    int n = phone.size();
    cout << "Size of Map: " << n << "\n\n";
    phoneMap::iterator p;
    for (p = phone.begin(); p != phone.end(); p++)
    {
        cout << (*p).first << " " << (*p).second << "\n";
    }
    cout << "\n";
    cout << "Enter the name:";
    cin >> name;
    number = phone[name]; // Find number
    cout << "Number is " << number << "\n";
    return 0;
}