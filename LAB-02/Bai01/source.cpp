#include <iostream>
#include "CPhanSo.h"
using namespace std;

int main() {
	CPhanSo p;
	cout << "---NHAP PHAN SO---" << endl;
	p.Nhap_PS();

	int res = p.KiemTra();
	switch (res) {
		case 1:
			cout << "Phan so duong" << endl;
			break;
		case -1:
			cout << "Phan so am" << endl;
			break;
		case 0:
			cout << "Phan so bang 0" << endl;
			break;
	}

	return 1;
}