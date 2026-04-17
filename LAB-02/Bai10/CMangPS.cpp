#include "CMangPS.h"

void CMangPS::NhapMang() {
	cout << "Nhap so luong phan so: ";
	cin >> size;
	arr = new CPhanSo[size];
	for (int i = 0; i < size; i++) {
		cout << "Nhap phan so thu " << i + 1 << ":" << endl;
		arr[i].Nhap();
	}
}

void CMangPS::XuatMang() {
	cout << "Cac phan so trong mang:" << endl;
	for (int i = 0; i < size; i++) {
		arr[i].Xuat();
	}
}

void CMangPS::SapXepTang() {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i].SoSanh(arr[j]) > 0) { // arr[i] > arr[j]
				arr[i].HoanDoi(arr[j]);
			}
		}
	}
}

void CMangPS::SapXepGiam() {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i].SoSanh(arr[j]) < 0) { // arr[i] < arr[j]
				arr[i].HoanDoi(arr[j]);
			}
		}
	}
}