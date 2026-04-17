#include <iostream>
#include "CDaThucDong.h"

using namespace std;

int main() {
	CDaThucDong dt1;

	float* a = new float[5] { 1, -2, 3, -4, 5 };
	CDaThucDong dt2(a, 4);
	delete[] a;

	CDaThucDong dt3(dt2);
	cout << "Da thuc dt1: ";
	dt1.Xuat();

	cout << "Da thuc dt2: ";
	dt2.Xuat();

	cout << "Da thuc dt3: ";
	dt3.Xuat();

	CDaThucDong dt4;
	dt4.Nhap();

	cout << "Da thuc dt4: ";
	dt4.Xuat();
	return 0;
}