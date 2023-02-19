#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire(int v[], int& dim) {

	ifstream f("numere.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void citire2(int v[], int& dim) {

	ifstream f("numere2.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void afisare(int v[], int dim) {
	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

}

void sortareSelectie(int v[], int dim) {
	for (int i = 0; i < dim-1; i++) {
		for (int j = i + 1; j < dim; j++) {
			if (v[i] > v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			 }
		}
	}
}


void buubleSort(int v[], int dim) {

	 
	bool flag = true;

	do {

		flag = true;

		for (int j = 0; j < dim-1; j++) {
			if (v[j] > v[j+1]) {
				int aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;

				flag = false;
			}
		}
	} while (flag == false);

}


	int  binarySearch(int v[], int dim ,int cautat) {

		buubleSort(v, dim);

		int a = 0;
		int b = dim - 1;
		int mj = a + b / 2;
		while (a <= b) {

			mj = a + b / 2;


			if (v[mj] == cautat) {

				return  mj;
			}
			else if (v[mj] > cautat) {

				b = mj - 1;
			}
			else {

				a = mj + 1;
			}

		}

		return -1;
	 
	}


void interclasare(int v[], int dim, int x[], int dim2,int inter[] ,int&d) {

	d = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	buubleSort(v, dim);
	buubleSort(x, dim2);

	while (i < dim && j < dim2) {


		if (v[i] == x[j]) {

			inter[k] = v[i];
			i++;
			k++;
			j++;
		}

		if (v[i] < x[j]) {

			inter[k] = v[i];
			i++;
			k++;
			

		}

		if (v[i] > x[j]) {

			inter[k] = x[j];
			j++;
			k++;


		}

	}


	while (i < dim) {

		inter[k] = v[i];
		i++;
		k++;

	}


	while (j < dim2) {

		inter[k] = x[j];
		j++;
		k++;

	}

	d = k;

}     


void sterge(int v[], int&dim ,int p) {

	for (int i = p; i < dim; i++) {
		v[i] = v[i + 1];
	}
	dim--;
} 
void inserarePozitie(int v[], int&dim, int p ,int nou) {
	for (int i = dim; i >= p; i--) {
		v[i + 1] = v[i];
	}
	dim++;
	v[p] = nou;

}
void secventiere(int x[],int n) { 
	int smax = 1;
	int dmax = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] % 2 == 0) {
			int j = i;
			while (j + 1 < n && x[j + 1] % 2 == 0) {
				j++;
			}
			if (j - i + 1 > dmax - smax + 1) {
				smax = i, dmax = j;
				
			}

		} 
	}
	cout << smax << " (SMAX) " << endl;
	cout << dmax << " (DMAX) " << endl;
}


void frecventaCifre(int f[], int nr) {


	while (nr != 0) {

		f[nr % 10]++;

		nr = nr / 10;
	}



}