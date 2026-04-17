#include <iostream>
#include "CTamGiac.h"
using namespace std;

int main() {
	CTamGiac t;
	t.Nhap();

	if (!t.KiemTraTamGiac()) {
		cout << "Khong Phai Tam Giac!!!";
		return 0;
	}

	double P = t.ChuVi();
	double S = t.DienTich();
	CDiem G = t.TrongTam();

	cout << "Chu vi tam giac: " << P << endl;
	cout << "Dien tich tam giac: " << S << endl;
	cout << "Trong tam tam giac: ";
	G.Xuat();
	return 1;
}