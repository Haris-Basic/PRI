#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n, cifra = 0, broj = 0, stepen = 0, razlika = 0;
	cout << "Unesite pozitivan broj n: " << endl;
	cin >> n;
	int temp = n;
	while (temp != 0) {
		cifra = temp % 10;
		if (cifra % 2 == 0)
			broj += 5 * pow(10, stepen);
		else
			broj += cifra*pow(10, stepen);
		stepen++;
		temp /= 10;
	}
	cout << "Novi broj izgleda: " << broj << endl;
	razlika = n - broj;
	cout << "Razlika brojeva n i nastalog broja je :" << razlika << endl;
	system("pause>0");
	return 0;
}