#include "sortare-algoritmi.h"


// Să se ordoneze crescător elementele din prima jumătate a vectorului și descrescător elementele din a doua jumătate.
void sol1() {


	int date[6] = { 8,2,9,4,5,7 };

	bubbleSortPortiune(date, 6, 0, 2);
	bubbleSortPortiuneDesc(date, 6,3, 6);
	afisareVec(date, 6);
}

//Scrie un program care citind un șir de numere naturale afișează numerele citite ordonate crescător după suma cifrelor lor, iar dacă suma cifrelor este egală, descrescător după valoarea lor.
void sol2() {

	int date[6] = { 102,50,51,600,21,3 };

	bubbleSortSumaCifre(date, 6);
	afisareVec(date, 6);
	
}

void sol3() {

	int date[10] = { 5,4,3,2,1,6,7,8,9,18 };

	bubbleSort(date, 6);
	for (int i = 0; i < 10; i++) {
		if (date[i] % 2 == 0) {
			cout << date[i] << " ";
		}
	}

	bubbleSort(date, 6);
	for (int i = 0; i < 10; i++) {
		if (date[i] % 2 != 0) {
			cout << date[i] << " ";
		}
	}

}

//Să se ordoneze crescător elementele unui vector crescător după prima cifră.
void sol4() {

	int date[6] = { 89,2246,91,4005,51,721 };

	bubbleSortPrimaCifra(date, 6);
	afisareVec(date, 6);

}

//Să se scrie un program care ordonează crescător elementele situate pe poziții pare într - un vector și descrescător elementele situate pe poziții impare.

void sol5() {

	int date[6] = { 8,9,9,4,5,7 };

	afisareVec(date, 6);
	
	bubbleSort(date, 6);
	for (int i =0; i < 6; i++) {
		if (i % 2 == 0) {
			cout << date[i] << " ";
		}
	}

	bubbleSortDesc(date, 6);
	for (int i = 0; i < 6; i++) {
		if (i % 2 != 0) {
			cout << date[i] << " ";
		}
	}
}



//Să se ordoneze crescător subșirul format din elementele pare din vector și descrescător subșirul format din elementele impare.
void sol6() {

	int date[6] = { 8,1,9,4,5,7 };

	bubbleSortParImp(date, 6);
	for (int i = 0; i < 6; i++) {
		cout << date[i] << " ";
	}

}

//Să se ordoneze crescător subșirul format din elementele negative din vector și descrescător subșirul format din elementele pozitive. Indicii subșirului format din elementele negative nu se vor schimba. La fel și indicii subșirului format din elementele pozitive.
void sol7() {


	int date[6] = { 2,-1,9,-4,5,7 };
	bubbleSortNegPoz(date, 6);
	afisareVec(date, 6);
}


//Se dă un vector cu n elemente, numere naturale. Afișați în ordine crescătoare elementele iar după fiecare element, inserați indicele poziției pe care acesta se afla înainte ca vectorul să fie sortat.
void sol8() {

	int date[7] = { 12,8,9,0,19,2,8 };

	int dim = 7;
	
	int nou[100] = {};

	copiereVectori(date, nou, 7);

	bubbleSort(nou, 7);

	for (int i = 0; i < 7; i++) {
		int key = nou[i];
		cout << key << " " << cautareVectorPoz(date, 7, key) << " ";
	}

}

//Fişierul text sort2.in conţine, dispuse pe mai multe linii, cel mult 100 de numere naturale, cu cel mult 4 cifre fiecare. Să se afişeze în fişierul sort2.out, în ordine crescătoare, toate numerele din fişierul sort2.in care au cel mult 2 cifre.

void sol9() {


	int date[12] = { 86,18,7210,73,15,5,7989,825,562,732,911 };

	bubbleSort(date, 12);
	for (int i = 0; i < 12; i++) {
		if (date[i] < 99) {
			cout << date[i] << " ";
		}
	}
}

//Se dau n numere naturale şi un număr natural k.Afişaţi în ordine crescătoare acele numere date care sunt puteri ale lui k
void sol10() {

	int date[8] = { 32,56,809,256,2,1,60 };

	bubbleSort(date, 8);
	for (int i = 0; i < 8; i++) {
		if (putere(date[i], 2)) {
			cout << date[i] << " ";
		}
	}


}

//Se dă un şir cu n elemente, numere naturale nenule cu cel mult 4 cifre fiecare. Afişaţi, în ordine crescătoare, valorile pare din şir. Dacă şirul nu conţine nici o valoare pară, se va afişa mesajul nu exista.
void sol11() {

	int date[9] = { 2,3,1,4,7,2,5,8,6 };
	int ct = 0;
	bubbleSort(date, 9);
	for (int i = 0; i < 9; i++) {
		if (date[i] % 2 == 0) {
			ct++;
			cout << date[i] << " ";
		}
	}
	cout << endl;
	cout << ct << endl;
}

//CRB are un șir cu n numere naturale diferite. Nu știe ce să facă cu ele și le aranjează în ordine descrescătoare. Apoi observă că anumite numere se află pe aceeași poziție ca în șirul inițial. Ajutați pe CRB să determine câte elemente din șir respectă această regulă.
void sol12() {


	int date[7] = { 1,8,2,6,4,7,9 };

	int dim = 7;

	int nou[100] = {};

	copiereVectori(date, nou, 7);

	bubbleSort(nou, 7);

	int ct = 0;
	for (int i = 0; i < 7; i++) {
		int key = nou[i];
		{
			if (cautareVectorPoz(date, 7, key) == i) {
				ct++;
			}
		}

	}
	cout << ct;
}

//Se citește un șir cu n numere întregi. Să se rearanjeze elementele șirului astfel ca numerele negative să fie ordonate descrescător. apoi să urmeze elementele nule, urmate de numerele pozitive ordonate descrescător.
void sol13() {

	int date[7] = { 1,-41,8,-3,4,8,0 };

	bubbleSortDesc(date, 7);
	for (int i = 0; i < 7; i++) {
		if (date[i] < 0) {
			cout << date[i] << " ";
		}
	}

	for (int i = 0; i < 7; i++) {
		if (date[i] == 0) {
			cout << date[i] << " ";
		}
	}

	bubbleSortDesc(date, 7);
	for (int i = 0; i < 7; i++) {
		if (date[i] > 0) {
			cout << date[i] << " ";
		}
	}
}

//Se citește un număr natural n cu cel mult 16 cifre.Fie q numărul de cifre ale numărului n.Prin eliminarea unei singure cifre din scrierea numărului n se obține un șir de q numere.Să se afișeze în ordine crescătoare, numerele nenule din acest șir care sunt prime cu numărul n.
void sol14() {

	int date[] = { 342477 };


}