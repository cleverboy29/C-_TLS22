#include <iostream>
using namespace std;
int main()
{
	float a, b, hasil;
	char operasi;
	cout << "Masukkan Nilai Pertama: ";
	cin >> a;
	cout << "Masukkan Operasi(+,-,*,/): ";
	cin >> operasi;
	cout << "Masukkan Nilai Kedua: ";
	cin >> b;
	cout << "\nHasil Hitung: "; cout << a << operasi << b;
	if (operasi == '+') {
		hasil = a + b;
	}
	else if (operasi == '*') {
		hasil = a * b;
	}
	else if (operasi == '-') {
		hasil = a - b;
	}
	else if (operasi == '/') {
		hasil = a / b;
	}
	else {
		cout << "Nilai Tidak Valid";
	}
	cout << "= " << hasil << endl;
	return 0;
}



