#ifndef GENERATOR_H
#define GENERATOR_H
#include <cstdlib>
#include <ctime>

int Generator()
{
    srand(time(NULL));
    for(int i=0; i<10; ++i)
        cout << rand()%100+1;
}

#endif // RANDOM_H
