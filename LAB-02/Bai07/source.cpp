#include <iostream>
#include "CNgay.h"
using namespace std;

int main() {
	Ngay x;
	cout << "=== NHAP NGAY HIEN TAI ===" << endl;
	x.Nhap();

	Ngay keTiep = x.tim_ngay_hom_qua();
	cout << "Ngay hom qua la: ";
	keTiep.Xuat();

	return 1;
}