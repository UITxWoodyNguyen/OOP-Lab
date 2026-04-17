#include "CMaTranDong.h"

CMaTranDong::CMaTranDong() {
	dong = 0;
	cot = 0;
	a = nullptr;

	cout << "Phuong thuc khoi tao mac dinh duoc goi!!!" << endl;
}

CMaTranDong::CMaTranDong(float** b, int d, int c) {
	dong = d;
	cot = c;
	a = new float* [dong];
	for (int i = 0; i < dong; i++) {
		a[i] = new float[cot];
		for (int j = 0; j < cot; j++) {
			a[i][j] = b[i][j];
		}
	}

	cout << "Phuong thuc khoi tao khi biet tham so duoc goi!!!" << endl;
}

CMaTranDong::CMaTranDong(const CMaTranDong& mt) {
	dong = mt.dong;
	cot = mt.cot;
	a = new float* [dong];
	for (int i = 0; i < dong; i++) {
		a[i] = new float[cot];
		for (int j = 0; j < cot; j++)
			a[i][j] = mt.a[i][j];
	}

	cout << "Phuong thuc khoi tao sao chep duoc goi!!!" << endl;
}

CMaTranDong::~CMaTranDong() {
	for (int i = 0; i < dong; i++)
		delete[] a[i];
	delete[] a;
}

void CMaTranDong::Nhap() {
	cout << "Nhap so dong = ";
	cin >> dong;
	cout << "Nhap so cot = ";
	cin >> cot;

	a = new float* [dong];
	for (int i = 0; i < dong; i++) {
		a[i] = new float[cot];
		for (int j = 0; j < cot; j++) {
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}

void CMaTranDong::Xuat() {
	for (int i = 0; i < dong; i++) {
		for (int j = 0; j < cot; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}