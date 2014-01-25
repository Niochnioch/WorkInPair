#ifndef GENERATOR_H
#define GENERATOR_H
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

#endif // RANDOM_H
