#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
	system("Color B");
	int a, b, pilih;
	string operasi;
	float hasil;

	cout << "=====[KALKULATOR SEDERHANA VANDALAS]=====" << endl;
	cout << "" << endl;
	cout << "=================" << endl;
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Pembagian" << endl;
	cout << "4. Perkalian" << endl;
	cout << "=================" << endl;
	cout<<endl;
	cout << "Pilih salah satu operasi (1-4) >> ";
	cin >> pilih;

	system("CLS");
	cout << "Masukan bilangan pertama >> ";
	cin >> a;
	cout << "Masukan bilangan kedua >> ";
	cin >> b;

	switch(pilih)
	{
		case 1 : hasil = a + b;
				operasi = "+";
				break;

		case 2 : hasil = a - b;
				operasi = "-";
				break;

		case 3 : hasil = a / b;
				operasi = "/";
				break;

		case 4 : hasil = a * b;
				operasi = "*";
				break;

		default :
			cout << "Salah memasukan operator!" << endl;
	}
		cout<<endl;
		cout << "===================================" << endl;
		cout << "Hasil dari " << a << " " << operasi << " " << b << " adalah " << hasil << endl;
		cout << "===================================" << endl;

	getch();
}
