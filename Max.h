#include <list>

int Max(list<int> L){
	int tmp = L.front();
	for (list<int>::iterator it = L.begin() ; it !=it.end(); ++it){
		if (tmp < *it)
			tmp = *it;
	}
	return tmp;

}