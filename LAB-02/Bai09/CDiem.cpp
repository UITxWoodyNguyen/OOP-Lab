#include "CDiem.h"

void CDiem::Nhap() {
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}

void CDiem::Xuat() {
	cout << "Toa do diem: (" << x << ", " << y << ")" << endl;
}

double CDiem::KhoangCach(CDiem other) {
	int dx = x - other.x;
	int dy = y - other.y;
	return sqrt(dx * dx + dy * dy);
}