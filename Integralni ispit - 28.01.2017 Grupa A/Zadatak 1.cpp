/* Poštujući faze programiranja napisati program za računanje binominalnog koeficijenta b prema sljedećoj formuli.
Učitati prirodne brojeve n i k (n mora biti veći od k). Ako taj uvjet nije ispunjen ponoviti učitavanja.
Koristiti posebnu funkciju za računanje binomnog koeficijenta.
Naći i ispisati binomni koeficijent koji je jednak sljedećoj formuli:
*/
#include<iostream>

using namespace std;

float binomni(int, int);

int main()
{
	int n=0, k=0;
	cout << "Uneiste brojeve n i k: " << endl;
	do {
		if (n < k)
			cout << "n treba biti veci od k" << endl;
		cin >> n >> k;
	} while (n < k);
	cout << "Binomni koeficijent iznosi: " << binomni(n, k) << endl;
	system("pause>0");
	return 0;
}

float binomni(int n, int k)
{
	int faktN = 1, faktK = 1, faktNK = 1, razlika = 0;
	for (int i = 1; i <= n; i++)
		faktN *= i;
	for (int i = 1; i <= k; i++)
		faktK *= i;
	razlika = n - k;
	for (int i = 1; i <= razlika; i++)
		faktNK *= i;
	double binomni = 0;
	binomni = faktN/ float(faktK*faktNK);
	return binomni;
}
