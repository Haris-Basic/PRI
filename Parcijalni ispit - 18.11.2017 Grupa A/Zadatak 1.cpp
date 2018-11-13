#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a, b, proizvod = 1, brojac=0;
	cout << "Unesite dva broja: ";
	do {
		cin >> a >> b;
	} while (a > 500 && b > 500);
	for (int i = a; i <= b; i++) {
		brojac = 0;
		for (int j = 1; j <= i; j++) {
			if (i%j == 0)
				brojac++;
		}
		if (brojac == 2)
			proizvod = (proizvod*i) % 10;
	}
	cout << "Cifra kojom zavrsava umnozak svih prostih brojeva u zadatom intervalu je: " << proizvod << endl;
	system("pause>0");
	return 0;
}