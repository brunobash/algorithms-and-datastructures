/* Sequential List */
#include <iostream>
using namespace std;
#define n 20
typedef int key;

struct Product {
	key code;
	float price;
	struct date {
		int day;
		int month;
		int year;
	} expiration;
};

struct List {
	Product storage[n+1];
	int elements; // number of elements
};

void startList(List *l) {
	l->elements;
}

int listSize(List *l) {
	return l->elements;
}

bool listFull(List *l) {
	if(l->elements == n) {
		return true;
	} else {
		return false;
	}
}

bool insert(List *l, Product prod) {
	if(listFull(l)) {
		return false;
	}
	l->storage[l->elements] = prod;
	l->elements++;
	return true;
}

int sentinelSearch(List *l, key pk1) {
	int i = 0;
	l->storage[l->elements].code = pk1;

	while(l->storage[i].code != pk1) {
		i++;
	}
	if(i == l->elements) {
		return -1;
	} else {
		return i;
	}
}

void bubbleSort(List *l) {
	for(int i = 0; i < l->elements - 1; ++i) {
		for(int j = l->elements  - 1; j > i; --j) {
			if(l->storage[j].code < l->storage[j - 1].code){
				Product aux = l->storage[j];
				l->storage[j] = l->storage[j - 1];
				l->A[j - 1] = aux;
			}
		}
	}
}



