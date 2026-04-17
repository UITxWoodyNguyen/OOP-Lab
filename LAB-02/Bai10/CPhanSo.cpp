#include "CPhanSo.h"

void CPhanSo::Nhap() {
	cout << "Nhap tu: ";
	cin >> tu;
	cout << "Nhap mau: ";
	cin >> mau;
}

void CPhanSo::Xuat() {
	cout << tu << "/" << mau << endl;
}

void CPhanSo::HoanDoi(CPhanSo& ps) {
	int tempTu = tu;
	int tempMau = mau;
	tu = ps.tu;
	mau = ps.mau;
	ps.tu = tempTu;
	ps.mau = tempMau;
}

int CPhanSo::SoSanh(CPhanSo ps) {
	int lhs = tu * ps.mau;
	int rhs = ps.tu * mau;
	if (lhs < rhs) return -1; // this < ps
	if (lhs > rhs) return 1;  // this > ps
	return 0; // this == ps
}

int CPhanSo::layTu() {
	return tu;
}

int CPhanSo::layMau() {
	return mau;
}