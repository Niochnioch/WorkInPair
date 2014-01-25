#ifndef UTILS_H
#define UTILS_H
#include <list>
#include <iostream>
using namespace std;

void Print(list<int> L)
{
    cout << "Lista: ";
    for(list<int>::iterator it=L.begin(); it!=L.end(); ++i)
        cout << (*it) << ", ";
    cout << endl;
}

int Sum(list<int> L)
{
    int s = 0;
    for(list<int>::iterator it=L.begin(); it!=L.end(); ++i)
        s += (*it);
    return s;
}

#endif



