#include "CMangDong.h"

CMangDong::CMangDong() { // phuong thuc mac dinh
	n = 0;
	a = nullptr;
	cout << "Phuong thuc mac dinh duoc goi" << endl;
}

CMangDong::CMangDong(float* b, int n) { // Phuong thuc khi biet tham so
	this->n = n;
	a = new float[n];
	for(int i = 0; i < n; i++)
		a[i] = b[i];
	cout << "Phuong thuc khi biet tham so duoc goi" << endl;
}

CMangDong::CMangDong(const CMangDong& o) { // Phuong thuc sao chep
	n = o.n;
	a = new float[n];
	for (int i = 0; i < n; i++)
		a[i] = o.a[i];
	cout << "Phuong thuc sao chep duoc goi" << endl;
}

CMangDong::~CMangDong() {
	delete[] a;
}

void CMangDong::Nhap() {
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	a = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void CMangDong::Xuat() {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}