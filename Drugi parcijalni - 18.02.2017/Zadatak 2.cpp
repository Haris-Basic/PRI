/* Zadatak 2:Napisati program koji će učitati prirodni broj n ≤ 10, a zatim n prirodnih trocifrenih brojeva koje treba pospremiti u odgovarajući niz.
Taj niz brojeva treba sortirati uzlazno po srednjoj cifri.
Nakon sortiranja treba ispisati dobiveni niz. Za sortiranje koristiti zasebnu funkciju kojoj se proslijeđuje nesortiran niz.*/
#include<iostream>

using namespace std;

void sortiranje(int[], int);

int main()
{
	int n, trocifreni, niz[10];

	do {
		cout << "Unesite broj n: ";
		cin >> n;
	} while (n > 10);

	for (int i = 0; i < n; i++) {
		cout << "Unesite " << i + 1 << " clan niza: ";
		cin >> niz[i];
	}
	for (int j = 0; j < n; j++) {
		cout << "Vrijednost " << j + 1 << " clana niza je : " << niz[j] << endl;;
	}
	sortiranje(niz, n);
	for (int i = 0; i < n; i++)
		cout << niz[i] << " ";
	cout << endl;
	system("pause>0");
	return 0;
}

int dajMiSrednjuCifru(int broj) {
	return (broj % 100) / 10;
}

void sortiranje(int niz[10], int x)
{
	for (int i = 0; i < x - 1; i++) { //selection sort O(n^2)
		int index = i;
		for (int j = i + 1; j < x; j++) {
			int prva = dajMiSrednjuCifru(niz[index]);
			int druga = dajMiSrednjuCifru(niz[j]);
			if (druga < prva) index = j;
			else if (druga == prva && niz[j] < niz[index]) index = j;
		}
		swap(niz[i], niz[index]);
	}
}