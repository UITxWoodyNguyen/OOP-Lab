#include "CPhanSo.h"

void CPhanSo::Nhap_PS() {
	cout << "Nhap tu so: ";
	cin >> tu;
	cout << "Nhap mau so: ";
	cin >> mau;
}

void CPhanSo::Xuat_PS() {
	cout << tu << "/" << mau << endl;
}

CPhanSo CPhanSo::tim_max(CPhanSo a, CPhanSo b) {
	CPhanSo maxValue;
	int tempA = a.tu * b.mau;
	int tempB = b.tu * a.mau;

	if (tempA > tempB) maxValue = a;
	else maxValue = b;

	return maxValue;
}