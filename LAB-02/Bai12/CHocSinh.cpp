#include "CHocSinh.h"

void CHocSinh::Nhap() {
	cout << "Nhap ho ten: ";
	getline(cin, HoTen);
	cout << "Nhap diem toan: ";
	cin >> diemToan;
	cout << "Nhap diem van: ";
	cin >> diemVan;
	cin.ignore(); // xoa newline
}

void CHocSinh::Xuat() {
	cout << "Ho ten: " << HoTen << endl;
	cout << "Diem toan: " << diemToan << endl;
	cout << "Diem van: " << diemVan << endl;
	cout << "Diem trung binh: " << DiemTB() << endl;
}

double CHocSinh::DiemTB() {
	return (diemToan + diemVan) / 2.0;
}