#include <iostream>
#include "CSoPhuc.h"
using namespace std;

int main() {
	CSoPhuc a, b;
	cout << "=== NHAP SO PHUC a ===" << endl;
	a.Nhap();
	cout << "=== NHAP SO PHUC b ===" << endl;
	b.Nhap();

	CSoPhuc kqTong = a.tong(b);
	CSoPhuc kqHieu = a.hieu(b);
	CSoPhuc kqTich = a.tich(b);
	CSoPhuc kqThuong = a.thuong(b);

	cout << "=== KET QUA ===" << endl;
	cout << "a + b = "; 
	kqTong.Xuat();
	cout << "a - b = ";
	kqHieu.Xuat();
	cout << "a * b = ";
	kqTich.Xuat();
	cout << "a / b = ";
	kqThuong.Xuat();

	return 1;
}