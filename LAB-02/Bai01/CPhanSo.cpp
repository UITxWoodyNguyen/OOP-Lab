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

int CPhanSo::KiemTra() {
	if (tu * mau > 0) return 1;
	else if (tu * mau < 0) return -1;
	else return 0;
}