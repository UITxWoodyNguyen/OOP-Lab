#include "CPhanSo.h"
#include "CHonSo.h"

CPhanSo::CPhanSo() {
	tu = 0;
	mau = 1;
}

CPhanSo::CPhanSo(int tu, int mau) {
	this->tu = tu;
	this->mau = mau;
}

int CPhanSo::getTu() {
	return tu;
}

int CPhanSo::getMau() {
	return mau;
}

CPhanSo CPhanSo::operator+ (CPhanSo o) {
	CPhanSo kq;
	kq.tu = tu * o.mau + mau * o.tu;
	kq.mau = mau * o.mau;
	return kq;
}

CPhanSo CPhanSo::operator- (CPhanSo o) {
	CPhanSo kq;
	kq.tu = tu * o.mau - mau * o.tu;
	kq.mau = mau * o.mau;
	return kq;
}

CPhanSo CPhanSo::operator* (CPhanSo o) {
	CPhanSo kq;
	kq.tu = tu * o.tu;
	kq.mau = mau * o.mau;
	return kq;
}

CPhanSo CPhanSo::operator/ (CPhanSo o) {
	CPhanSo kq;
	kq.tu = tu * o.mau;
	kq.mau = mau * o.tu;
	return kq;
}

CHonSo CPhanSo::ChuyenSangHonSo() {
	CHonSo temp(tu / mau, tu % mau, mau);
	return temp;
}