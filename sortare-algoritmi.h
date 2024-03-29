#pragma once
#include <iostream>
#include <string.h>
using namespace std;


void afisareVec(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}

}

void  bubbleSort(int v[], int dim) {


	bool sortat = false;


	do {


		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}

		}

	} while (sortat == false);



}

void  bubbleSortDesc(int v[], int dim) {



	bool sortat = false;


	do {


		sortat = true;

		for (int i = dim - 1; i > 0; i--) {

			if (v[i] > v[i - 1]) {
				int aux = v[i];
				v[i] = v[i - 1];
				v[i - 1] = aux;
				sortat = false;
			}

		}

	} while (sortat == false);

}

void bubbleSortPortiune(int v[], int dim, int a, int b) {


	if (a > b) {

		int aux = a;
		a = b;
		b = aux;
	}


	bool sortat = false;


	do {


		sortat = true;

		for (int i = a; i < b; i++) {

			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}

		}

	} while (sortat == false);
}

void bubbleSortPortiuneDesc(int v[], int dim, int a, int b) {


	if (a > b) {

		int aux = a;
		a = b;
		b = aux;
	}


	bool sortat = false;


	do {


		sortat = true;

		for (int i = a; i < b; i++) {

			if (v[i] < v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}

		}

	} while (sortat == false);
}

int sumaCifra(int n) {

	int suma = 0;
	while (n != 0) {
		int cifra = n % 10;
		suma += cifra;
		n = n / 10;
	}
	return suma;
}


void  bubbleSortSumaCifre(int v[], int dim) {


	bool sortat = false;


	do {


		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (sumaCifra(v[i]) > sumaCifra(v[i + 1])) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}
			else if (sumaCifra(v[i]) == sumaCifra(v[i + 1]) && sumaCifra(v[i]) < sumaCifra(v[i + 1])) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}

		}

	} while (sortat == false);



}


int primaCifra(int n) {

	while (n >= 10) {
		n = n / 10;
	}
	return n;
}


void  bubbleSortPrimaCifra(int v[], int dim) {


	bool sortat = false;


	do {


		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (primaCifra(v[i]) > primaCifra(v[i + 1])) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}

		}

	} while (sortat == false);



}


void  bubbleSortParImp(int v[], int dim) {


	bool sortat = false;


	do {


		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (v[i] % 2 == 0 && v[i + 1] % 2 == 0 && v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}
			else if (v[i] % 2 != 0 && v[i + 1] % 2 != 0 && v[i] < v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}
		}

	} while (sortat == false);



}

void bubbleSortNegPoz(int v[], int dim) {


	bool sortat = false;


	do {


		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (v[i] < 0 && v[i + 1]<0 && v[i]>v[i + 1]){
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}

		}

	} while (sortat == false);



}

void copiereVectori(int v1[], int v2[], int dim) {
	for (int i = 0; i < dim; i++) {
		v2[i] = v1[i];
	}
}


int cautareVectorPoz(int v[], int dim, int key) {

	for (int i = 0; i < dim; i++) {
		if (v[i] == key) {
			return i;
		}
	}

	return -1;
}


bool putere(int n, int k) {


	int p = 1;
	for (int i = 0; p < n; i++) {
		p *= k;
	}
	if (p == n) {
		return true;
	}

	return false;


}

