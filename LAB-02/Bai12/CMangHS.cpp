#include "CMangHS.h"

void CMangHS::NhapDS() {
	cout << "Nhap so luong hoc sinh: ";
	cin >> n;
	cin.ignore(); // xoa newline
	arr = new CHocSinh[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin hoc sinh thu " << i + 1 << ":" << endl;
		arr[i].Nhap();
	}
}

void CMangHS::XuatDS() {
	cout << "Danh sach hoc sinh:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Hoc sinh thu " << i + 1 << ":" << endl;
		arr[i].Xuat();
	}
}

CHocSinh* CMangHS::TimHSMaxDiemTB() {
	if (n == 0) return nullptr;
	CHocSinh* maxHS = &arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i].DiemTB() > maxHS->DiemTB()) {
			maxHS = &arr[i];
		}
	}
	return maxHS;
}

CHocSinh* CMangHS::TimHSMinDiemTB() {
	if (n == 0) return nullptr;
	CHocSinh* minHS = &arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i].DiemTB() < minHS->DiemTB()) {
			minHS = &arr[i];
		}
	}
	return minHS;
}