#include "functiiRecursive.h"
#pragma once


//633. Se dă un șir cu n elemente, numere naturale.
//Determinați diferența în valoare absolută dintre numărul de valori pare din șir și numărul de valori impare din șir.

void sol1() {
	int v[100], n, i = 0, nrVal = 0;
	citireVector(v, n); 

	//afisareVector(v, n, i);
	//cout << nrValoriPare(v, n, i, nrVal) << endl;
	//cout << nrValoriImpare(v, n, i, nrVal);

	if (nrValoriImpare(v, n, i, nrVal) > nrValoriPare(v, n, i, nrVal)) {
		cout << nrValoriImpare(v, n, i, nrVal) - nrValoriPare(v, n, i, nrVal);
	}
	else {
		cout << nrValoriPare(v, n, i, nrVal) - nrValoriImpare(v, n, i, nrVal);
	}
}



//546. Se citește un vector cu n elemente, numere naturale.
//Să se afișeze elementele din vector care sunt multipli ai ultimului element

void sol2() {
	int v[100], n, i = 0;
	citireVector(v, n);
	afisareMultipli(v, n, i);
}


//488. Se citește un vector cu n elemente, numere naturale. 
//Să se afișeze elementele cu indici pari în ordinea crescătoare a indicilor, 
//iar elementele cu indici impari în ordinea descrescătoare a indicilor.

void sol3() {
	int v[100], n;
	citireVector(v, n);
	afisareElemIndiciPari(v, n, 0);
	cout << endl;
	afisareElemIndiciImpari(v, n, n - 1);
}


//489. Se citește un vector cu n elemente, numere naturale. 
//Să se afișeze elementele vectorului în următoarea ordine: primul, ultimul, al doilea, penultimul, etc.

void sol4() {
	int v[100], n;
	citireVector(v, n);
	afisareElemente(v, n, 0, n - 1);
}


//486. Calculaţi valoarea minimă minim și valoarea maximă maxim a valorilor elementelor vectorului.

void sol5() {
	int v[100], n;
	citireVector(v, n);

}