#include <iostream>
#include <vector>

using namespace std;

void disaply(vector<int> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> v;
    cout << "Intial size of vector is : " << v.size() << endl;
    // Putting value into vector
    int x, n;
    cout << "Enter total number to add in vector";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << "Size after adding " << n << " elements is: " << v.size() << endl;
    cout << "Contents after adding elements are:\n";
    disaply(v);
    // Add one more elemetns
    v.push_back(7.67); // converted into integer
    cout << "Size after adding a"
         << " elements is: " << v.size() << endl;
    cout << "Contents after adding elements are:\n";
    disaply(v);
    // inserting element at 3rd pos
    vector<int>::iterator itr = v.begin(); // Iterator initialise
    itr += 3;
    v.insert(itr, 1, 9); // 1 is position here
    cout << "Contents after adding elements are:\n";
    disaply(v);
    // Removing 4th and 5th element
    v.erase(v.begin() + 3, v.begin() + 5); // in range   of 4 and 5
    cout << "Contents after deleting elements are:\n";
    disaply(v);
    cout << "END" << endl;

    return 0;
}