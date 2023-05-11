#include <iostream>
using namespace std;

/* One of the objectives of OOP is to separate the details of implementation from the class definition. It is
therefore good practice to define the member functions outside the class.We can define a member function outside the class definition and still make it inline by just using the
    qualifier inline in the header line of function definition.Example*/

// class item
// {
//     ..........public : void getdata(int a, float b); // declaration
// };
// inline void item ::getdata(int a, float b) // definition
// {
//     number = a;
//     cost = b;
// }