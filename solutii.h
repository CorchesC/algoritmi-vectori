#pragma once
#include "functii.h"
using namespace std;

void ex1() {
	


	int f[10]{};


	frecventaCifre(f, 11234456);


	for (int i = 0; i < 10; i++) {

		if (f[i] != 0) {

			cout << i << " apare de  " << f[i] << " ori" << endl;
		}
	}
}