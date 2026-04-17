#include <iostream>
#include "CPhanSo.h"
using namespace std;

int main() {
	CPhanSo a, b, val;
	cout << "=== NHAP PHAN SO THU NHAT ===" << endl;
	a.Nhap_PS();
	cout << "=== NHAP PHAN SO THU HAI ===" << endl;
	b.Nhap_PS();

	val = val.tim_max(a, b);
	cout << "Phan so lon nhat la: ";
	val.Xuat_PS();

	return 1;
}