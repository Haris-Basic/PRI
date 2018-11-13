/*Poštujući sve faze procesa programiranje, napisati program koji će odrediti i ispisati zadnje tri cifre broja x^n.
Unos brojeva x i n vršiti u glavnoj funkciji uz uslov 10<x<100 i 2<n<10,a funkciju za određivanje zadnje tri cifre napraviti zasebno. */
#include<iostream>
#include<cmath>

using namespace std;

int zadnjeTriCifre(int);

int main()
{
	int x = 0, n = 0, broj = 0;

	do {
		cout << "Unesite broj x ";
		cin >> x;
	} while (x < 10 || x > 100);

	do {
		cout << "Unesite broj n ";
		cin >> n;
	} while (n < 2 || n > 10);

	broj = pow(x, n);

	cout << "Zadnje tri cifre broja su: " << zadnjeTriCifre(broj) << endl;

	system("pause>0");
	return 0;
}

int zadnjeTriCifre(int broj)
{
	return broj % 1000;
}