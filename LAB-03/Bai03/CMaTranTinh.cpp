#include "CMaTranTinh.h"

CMaTranTinh::CMaTranTinh() {
	soDong = 0;
	soCot = 0;
	cout << "Phuong thuc khoi tao mac dinh duoc goi!" << endl;
}

CMaTranTinh::CMaTranTinh(float arr[][MAXN], int dong, int cot) {
	soDong = dong;
	soCot = cot;
	for (int i = 0; i < soDong; i++) {
		for (int j = 0; j < soCot; j++) {
			a[i][j] = arr[i][j];
		}
	}
	cout << "Phuong thuc khoi tao co tham so duoc goi!" << endl;
}

CMaTranTinh::CMaTranTinh(const CMaTranTinh& other) {
	soDong = other.soDong;
	soCot = other.soCot;
	for (int i = 0; i < soDong; i++) {
		for (int j = 0; j < soCot; j++) {
			a[i][j] = other.a[i][j];
		}
	}
	cout << "Phuong thuc khoi tao sao chep duoc goi!" << endl;
}

CMaTranTinh::~CMaTranTinh() {}

void CMaTranTinh::Nhap() {
	cout << "Nhap so dong: ";
	cin >> soDong;
	cout << "Nhap so cot: ";
	cin >> soCot;

	cout << "Nhap cac phan tu cua ma tran: " << endl;
	for (int i = 0; i < soDong; i++) {
		for (int j = 0; j < soCot; j++) {
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void CMaTranTinh::Xuat() {
	for (int i = 0; i < soDong; i++) {
		for (int j = 0; j < soCot; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}