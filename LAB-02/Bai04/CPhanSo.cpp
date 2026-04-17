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

int ucln(int a, int b) {
	if (b == 0) return a;
	return ucln(b, a % b);
}

CPhanSo CPhanSo::rut_gon() {
	CPhanSo kq;
	int tempTu = tu;
	int tempMau = mau;

	int gcd = ucln(abs(tempTu), abs(tempMau));
	kq.tu = tu / gcd;
	kq.mau = mau / gcd;
	
	// Fix: Phan so am, dau am nam tren tu
	if (kq.mau < 0) {
		kq.tu = -kq.tu;
		kq.mau = -kq.mau;
	}
	return kq;
}

CPhanSo CPhanSo::tong(CPhanSo o) {
	CPhanSo kq;
	kq.tu = tu * o.mau + mau * o.tu;
	kq.mau = mau * o.mau;
	kq = kq.rut_gon();
	return kq;
}

CPhanSo CPhanSo::hieu(CPhanSo o) {
	CPhanSo kq;
	kq.tu = tu * o.mau - mau * o.tu;
	kq.mau = mau * o.mau;
	kq = kq.rut_gon();
	return kq;
}

CPhanSo CPhanSo::tich(CPhanSo o) {
	CPhanSo kq;
	kq.tu = tu * o.tu;
	kq.mau = mau * o.mau;
	kq = kq.rut_gon();
	return kq;
}

CPhanSo CPhanSo::thuong(CPhanSo o) {
	CPhanSo kq;
	kq.tu = tu * o.mau;
	kq.mau = mau * o.tu;
	kq = kq.rut_gon();
	return kq;
}