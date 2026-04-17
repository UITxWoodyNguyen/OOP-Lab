#include "CDiem.h"

void CDiem::Nhap() {
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
}

void CDiem::Xuat() {
	cout << "(" << x << ", " << y << ")" << endl;
}

double CDiem::Khoang_Cach(CDiem d) {
	double dx = x - d.x;
	double dy = y - d.y;
	return sqrt(dx * dx + dy * dy);
}