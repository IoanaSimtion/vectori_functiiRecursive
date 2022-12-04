using namespace std;
#include <iostream>
#include <fstream>
#pragma once


//todo functie ce citeste un vector

void citireVector(int v[], int& n) {
	ifstream f("vector.txt");
	f >> n;
	for (int i = 0; i < n; i++) {
		f >> v[i];
	}
}

//todo fuctie ce afiseaza un vector

void afisareVector(int v[], int n, int i) {

	if (i < n) {
		cout << v[i] << ' ';
		i = i + 1;
		afisareVector(v, n, i);
	};

}

//todo functie ce determina nr de valori pare din vector

int nrValoriPare(int v[], int n, int i, int nrValori) {
	if (i == n) {
		return nrValori;
	}
	if (v[i] % 2 == 0) {
		nrValori++;
	}
	nrValoriPare(v, n, i + 1, nrValori);
}

//todo functie ce determina nr de valori impare din vector

int nrValoriImpare(int v[], int n, int i, int nrValori) {
	if (i == n) {
		return nrValori;
	}
	if (v[i] % 2 == 1) {
		nrValori++;
	}
	nrValoriImpare(v, n, i + 1, nrValori);
}

//todo functie ce verifica daca un numar este multiplul altui numar

bool eMultiplu(int a, int b) {
	if (a % b == 0) {
		return true;
	}
	return false;
}

//todo functie ce afiseaza toate numerele care sunt multipli ultimului element din vector

void afisareMultipli(int v[], int n, int i) {
	if (i < n) {
		if (eMultiplu(v[i], v[n - 1])) {
			cout << v[i] << ' ';
		}
		i++;
		afisareMultipli(v, n, i);
	}
}

//todo functie ce afiseaza elementele cu indici pari în ordinea crescătoare a indicilor

void afisareElemIndiciPari(int v[], int n, int i) {
	if (i < n) {
		if (i % 2 == 0) {
			cout << v[i] << ' ';
		}
		i++;
		afisareElemIndiciPari(v, n, i);
	}
}

//todo functie ce afiseaza elementele cu indici impari în ordinea descrescătoare a indicilor

void afisareElemIndiciImpari(int v[], int n, int j) {
	if (j >= 0) {
		if (j % 2 == 1) {
			cout << v[j] << ' ';
		}
		j--;
		afisareElemIndiciImpari(v, n, j);
	}
}

//todo functie ce afiseaza elementele vectorului în următoarea ordine: primul, ultimul, al doilea, penultimul, etc.

void afisareElemente(int v[], int n, int i, int j) {
	if (i < j) {
		cout << v[i] << ' ' << v[j] << ' ';
		i++;
		j--;
		afisareElemente(v, n, i, j);
	}
	else {
		if (i == j) {
			cout << v[i] << ' ';
		}
	}
	
}