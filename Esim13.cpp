/*Harjoitus 13
Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
yhdistää nimet yhdeksi merkkijonoksi ja tulostaa ne
lopuksi naytölle.
29.10.2014
v1.0
Santeri Taponen*/
#include <iostream>
using namespace std;
#include <cstring>
void main()
{
	char etunimi[20];
	char sukunimi[20];
	char kokonimi[40];
	cout << "Anna etunimesi: ";
	cin >> etunimi;
	cout << "Anna sukunimesi: ";
	cin >> sukunimi;
	strcpy_s(kokonimi, etunimi);
	strcat_s(kokonimi, " ");
	strcat_s(kokonimi, sukunimi);
	cout << "Nimesi oli: " << kokonimi << endl;
}