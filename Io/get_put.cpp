#include <iostream>
using namespace std;
int main()
{
    //   char c;
    // cin.get(c); // get a character from keyboard
    // // and assign it to c
    // while(c != '\n')
    // {
    //  cout << c; // //display the character on screen
    // output whatever written in a line inclludinf white space but not \n

    //  cin.get(c); // get another character
    // }
    // char d;
    // cin>>d;
    // cout.put(d);    //Output d {only first letter}
    char c;
    cin.get(c); // get a character from keyboard
    // and assign it to c
    int count = 0;
    while (c != '\n')
    {
        cout.put(c); // display the character on screen
        cin.get(c);  // get another character
        count++;
    }
    cout << "\nTotal Word Coun " << count;
    return 0;
}