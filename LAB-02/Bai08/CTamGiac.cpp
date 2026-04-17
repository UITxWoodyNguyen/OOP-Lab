#include "CTamGiac.h"

void CTamGiac::Nhap() {
	cout << "Nhap diem A:" << endl;
	A.Nhap();
	cout << "Nhap diem B:" << endl;
	B.Nhap();
	cout << "Nhap diem C:" << endl;
	C.Nhap();
}

void CTamGiac::Xuat() {
	cout << "Diem A: ";
	A.Xuat();
	cout << "Diem B: ";
	B.Xuat();
	cout << "Diem C: ";
	C.Xuat();
}

bool CTamGiac::KiemTraTamGiac() {
	double AB = A.KhoangCach(B);
	double BC = B.KhoangCach(C);
	double CA = C.KhoangCach(A);
	return (AB + BC > CA) && (BC + CA > AB) && (CA + AB > BC);
}

double CTamGiac::ChuVi() {
	return A.KhoangCach(B) + B.KhoangCach(C) + C.KhoangCach(A);
}

double CTamGiac::DienTich() {
	double p = ChuVi() / 2;
	return sqrt(p * (p - A.KhoangCach(B)) * (p - B.KhoangCach(C)) * (p - C.KhoangCach(A)));
}

CDiem CTamGiac::TrongTam() {
	CDiem G;
	int Gx = (A.layX() + B.layX() + C.layX()) / 3;
	int Gy = (A.layY() + B.layY() + C.layY()) / 3;
	G.capNhatX(Gx);
	G.capNhatY(Gy);
	return G;
}