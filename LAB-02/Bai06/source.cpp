#include <iostream>
#include "CNgay.h"
using namespace std;

int main() {
	Ngay x;
	cout << "=== NHAP NGAY HIEN TAI ===" << endl;
	x.Nhap();

	Ngay keTiep = x.tim_ngay_ke_tiep();
	cout << "Ngay ke tiep la: ";
	keTiep.Xuat();

	return 1;
}