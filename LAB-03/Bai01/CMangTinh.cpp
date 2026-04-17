#include "CMangTinh.h"

CMangTinh::CMangTinh() {
	n = 0;
	cout << "Phuong thuc khoi tao mac dinh duoc goi!" << endl;
}

CMangTinh::CMangTinh(float b[], int m) {
	n = m;
	for (int i = 0; i < n; i++)
		a[i] = b[i];
	cout << "Phuong thuc khoi tao khi biet tham so duoc goi!" << endl;
}

CMangTinh::CMangTinh(const CMangTinh& o) {
	n = o.n;
	for (int i = 0; i < n; i++)
		a[i] = o.a[i];
	cout << "Phuong thuc khoi tao sao chep duoc goi!" << endl;
}

void CMangTinh::Nhap() {
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

void CMangTinh::Xuat() {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

CMangTinh::~CMangTinh() {}