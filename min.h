#include <list>

int Min(list<int> L){
	int tmp = L.front();
	for (list<int>::iterator it = L.begin() ; it !=L.end(); ++it){
		if (tmp > *it)
			tmp = *it;
	}
	return tmp;

}