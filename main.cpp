#include <iostream>
#include "generator.h"
#include "min.h"
#include "Max.h"
#include "utils.h"
#include <list>
using namespace std;

int main()
{
    list<int> lol = Generator();
	Print(lol);
	cout << Min(lol)<< "\n";
	cout << Max(lol)<< "\n";
	return 0;
}
