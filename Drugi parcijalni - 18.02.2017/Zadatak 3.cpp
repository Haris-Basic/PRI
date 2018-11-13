#include<iostream>

using namespace std;
const int velicina = 4;

void unos(int[][velicina]);
void ispisniza(int[][velicina]);
void transpose(int[][velicina]);
void prost_broj(int[][velicina], int &, int &);
float artmeticka(int, int);

int main()
{
	int niz[velicina][velicina], suma = 0, prosti = 0;

	cout << "Unesite clanove 2D niza koji su dvocifreni: " << endl << endl;
	unos(niz); //poziv funkcije za upis vrijednosti niza
	cout << endl << endl;
	cout << "Unijeli ste sl. matrucu: " << endl;
	ispisniza(niz); //poziv funkcije koja ce ispisati sve unesene vrijednosti niza
	cout << endl << endl;
	cout << "Transponovana matrica: " << endl;
	transpose(niz); //poziv funkcije koja ce ispisati transponovan niz
	cout << endl << endl;
	prost_broj(niz, suma, prosti); //poziv funkcije koja ce provjeriti da li ima prostih brojeva ispod dijagonale, te im nac broj i njihovu sumu
	cout << "Suma svih prostih brojeva ispod dijagonale iznosi: " << suma << endl;
	cout << "Ukupno prostih brojeva ispod dijagonale iznosi: " << prosti << endl;
	cout << "Artmeticka sredina svih prostih brojeva ispod dijagonale iznosi: " << artmeticka(suma, prosti) << endl; //poziv funkcije koja racuna artmeticku sredinu prostih brojeva ispod dijagonale
	system("pause>0");
	return 0;
}

void unos(int niz[][velicina]) // Funkcija koja omgucava unos elemenata ali samo dvocifrenig, za ostale se ponavlja unos
{
	int brojac = 0, broj = 0, ostatak = 0;
	for (int i = 0; i < velicina; i++) {
		for (int j = 0; j < velicina; j++) {
			cout << "Unesite [" << i << "][" << j << "] element ";
			do {
				brojac = 0; // Potrebno je brojac vratiti na 0 za svaku provjeru
				cin >> niz[i][j];
				broj = niz[i][j];
				while (broj != 0) {
					ostatak = broj % 10;
					if (ostatak != 0) // koliko bude cifara toliko ce se brojav uvecati
						brojac++;
					broj /= 10;
				}
			} while (brojac != 2); // do while petlja ce se uvijek ponavljati sve dok brojac ne bude jednak 2
		}
	}
}

void ispisniza(int niz[][velicina]) // funkcija koja ispisuje matrizu koju smo unijeli
{
	for (int i = 0; i < velicina; i++) {
		for (int j = 0; j < velicina; j++) {
			cout << niz[i][j] << " ";
		}
		cout << endl;
	}
}

void transpose(int niz[][velicina]) // funkcija koja transponuje unesenu matricu i stvara novu
{
	int Tniz[velicina][velicina] = { {0},{0} };
	for (int i = 0; i < velicina; i++) {
		for (int j = 0; j < velicina; j++)
			Tniz[i][j] = niz[j][i];
	}
	for (int i = 0; i < velicina; i++) {
		for (int j = 0; j < velicina; j++) {
			cout << Tniz[i][j] << " ";
		}
		cout << endl;
	}
}

void prost_broj(int niz[][velicina], int &suma, int &prosti)
{
	int  brojac = 0;
	for (int i = 1; i < velicina; i++) {
		for (int j = 0; j < i; j++) {
			brojac = 0;
			for (int n = 1; n <= niz[i][j]; n++) {
				if (niz[i][j] % n == 0)
					brojac++;
			}
			if (brojac == 2) {
				suma += niz[i][j];
				prosti++;
			}
		}
	}
}

float artmeticka(int suma, int prosti)
{
	float art = 0;
	art = float(suma) / float(prosti);
	return art;
}

//Zadatak nije do kraja zavrsen, preostala zadnja navedena stavka 
//Nedostatak zadatka je u tome sto se pronalaze prosti brojevi isopod dijagonale za vec uneseni niz a ne za transponovani