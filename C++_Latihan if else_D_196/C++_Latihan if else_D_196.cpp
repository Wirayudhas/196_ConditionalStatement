#include <iostream>
using namespace std;

int main() {
	int nilaiMatematika, nilaiFisika, nRerata;
	string status;
	
	cout << "masukan nilai matematika: ";
	cin >> nilaiMatematika;

	cout << "masukan nilai Fisika: ";
	cin >> nilaiFisika;

	nRerata = (nilaiMatematika + nilaiFisika) / 2;

	if (nRerata > 60) {
		status = "Lulus";
	}

	else if (nilaiMatematika > 70) {
		status = "Lulus";
	}

	else {
		status = "Tidak lulus";
	}

	cout << "Nilai MTK: " << nilaiMatematika << endl;
	cout << "Nilai Fisika: " << nilaiFisika << endl;
	cout << "Rata-rata: " << nRerata << endl;
	cout << "Statusnya adalah: " << status << endl;

	return 0;
}