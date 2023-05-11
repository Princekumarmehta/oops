#include <iostream>
#include <list>
#include <cstdlib> //For using rand() function
#include <bits/stdc++.h>

using namespace std;

void display(list<int> &lst)
{

    list<int>::iterator p;
    for (p = lst.begin(); p != lst.end(); p++)
    {
        cout << *p << ",";
    }
    cout << "\n\n";
}

int main()
{
    list<int> list1;
    list<int> list2(5); // Empty list of size 5

    for (int i = 0; i < 3; i++)
        list1.push_back(rand() / 100);

    list<int>::iterator p;
    for (p = list2.begin(); p != list2.end(); ++p)
    {
        *p = rand() / 100;
    }
    cout << "List 1:\n";
    display(list1);
    cout << "List 2:\n";
    display(list2);
    // Add two elements at the ends of list1
    list1.push_front(100);
    list1.push_back(200);
    // Remove an element at the front of list2
    list2.pop_front();
    cout << "List 1:\n";
    display(list1);
    cout << "List 2:\n";
    display(list2);

    list<int> lista, listb;
    lista = list1;
    listb = list2;
    // MErging two list
    list1.merge(list2);
    cout << "Merged list is: ";
    cout << endl;
    display(list1);
    // Merge ans sort
    list1.sort();
    cout << "Merge and sort: ";
    display(list1);
    // sort and merge
    lista.sort();
    listb.sort();
    lista.merge(listb);
    cout << "Sort and merge :";
    display(lista);
    // Reverse a list
    lista.reverse();
    display(lista);
    return 0;
}