#ifndef UTILS_H
#define UTILS_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>
using namespace std;

list<int> Generator()
{
    list<int> L;
    srand(time(NULL));
    for(int i=0; i<10; ++i)
        L.push_back(rand()%100+1);
    return L;
}

void Print(list<int> L)
{
    cout << "Lista: ";
    for(list<int>::iterator it=L.begin(); it!=L.end(); ++it)
        cout << (*it) << ", ";
    cout << endl;
}

int Sum(list<int> L)
{
    int s = 0;
    for(list<int>::iterator it=L.begin(); it!=L.end(); ++it)
        s += (*it);
    return s;
}

int Min(list<int> L)
{
	int tmp = L.front();
	for (list<int>::iterator it = L.begin() ; it !=L.end(); ++it)
        {
		if (tmp > *it)
			tmp = *it;
	}
	return tmp;
}

int Max(list<int> L)
{
	int tmp = L.front();
	for (list<int>::iterator it = L.begin() ; it !=L.end(); ++it)
        {
		if (tmp < *it)
			tmp = *it;
	}
	return tmp;
}

#endif



