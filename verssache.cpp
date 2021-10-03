#include <iostream>

using namespace std;

class Kalkulator {
private:
	int res, B1, B2;
	char yn;

public:
	void welcome();
	void repeat();
	void start(int menu);
	int tools;
};

main() {
	Kalkulator A;
	A.welcome();
	cout << "1. Penjumlahan (+)" << endl;
	cout << "2. Pengurangan (-)" << endl;
	cout << "3. Perkalian (*)" << endl;
	cout << "4. Pembagian (/)" << endl;
	cout << "5. Keluar" << endl;
	cout << "--------------------------" << endl;
	cout << "Silahkan pilih: ";
	cin >> A.tools;

	if (A.tools == 5) exit(0);
	A.start(A.tools);
	A.repeat();
}

void Kalkulator::welcome() {
	system("cls");
	cout << "===== [ Kalkulator ] =====" << endl;
	cout << "--------------------------" << endl;
}

void Kalkulator::repeat() {
	cout << endl << "Apakah ingin menghitung lagi? (y/n): ";
	cin >> yn;
	if (yn == 'Y' || yn == 'y') {
		main();
	} else if (yn == 'N' || yn == 'n') {
		exit(0);
	}
}

void Kalkulator::start(int menu) {
	welcome();
	switch (menu) {
	case 1:
		cout << "Menu Penjumlahan" << endl << endl;
		break;
	case 2:
		cout << "Menu Pengurangan" << endl << endl;
		break;
	case 3:
		cout << "Menu Perkalian" << endl << endl;
		break;
	case 4:
		cout << "Menu Pembagian" << endl << endl;
		break;
	}

	cout << "Input Bilangan Pertama: ";
	cin >> B1;
	cout << "Input Bilangan Kedua: ";
	cin >> B2;

	switch (menu) {
	case 1:
		res = B1 + B2;
		break;
	case 2:
		res = B1 - B2;
		break;
	case 3:
		res = B1 * B2;
		break;
	case 4:
		res = B1 / B2;
		break;
	}

	cout << "Hasil: " << res << endl;
}
