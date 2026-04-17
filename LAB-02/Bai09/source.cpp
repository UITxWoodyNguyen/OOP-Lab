#include <iostream>
#include "CDuongTron.h"
using namespace std;

int main() {
	CDuongTron dt;
	dt.Nhap();

	double dienTich = dt.DienTich();
	double chuVi = dt.ChuVi();

	cout << "Dien tich duong tron: " << dienTich << endl;
	cout << "Chu vi duong tron: " << chuVi << endl;

	return 1;
}