#include <iostream>
#include "CDaThucTinh.h"

using namespace std;

int main() {
	CDaThucTinh dt1;

	float a[] = { 1, -2, 3, -4, 5 };
	CDaThucTinh dt2(a, 4);
	CDaThucTinh dt3(dt2);

	cout << "Da thuc dt1: ";
	dt1.Xuat();

	cout << "Da thuc dt2: ";
	dt2.Xuat();

	cout << "Da thuc dt3: ";
	dt3.Xuat();

	CDaThucTinh dt4;
	dt4.Nhap();

	cout << "Da thuc dt4: ";
	dt4.Xuat();

	return 1;
}