#include "CDuongTron.h"
const double PI = 3.14;

void CDuongTron::Nhap() {
	cout << "Nhap ban kinh: ";
	cin >> r;
	cout << "Nhap tam duong tron: " << endl;
	tam.Nhap();
}

void CDuongTron::Xuat() {
	cout << "Duong tron co ban kinh: " << r << endl;
	cout << "Tam duong tron: " << endl;
	tam.Xuat();
}

double CDuongTron::DienTich() {
	return PI * r * r;
}

double CDuongTron::ChuVi() {
	return 2 * PI * r;
}