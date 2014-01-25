#include <iostream>
#include "utils.h"
#include <list>
using namespace std;

int main()
{
    list<int> lol = Generator();
	Print(lol);
	cout << Min(lol)<< "\n";
	cout << Max(lol)<< "\n";
	cout << Sum(lol);
	return 0;
}
