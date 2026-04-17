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

double CDiem::KhoangCach(CDiem other) {
	return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
}

int CDiem::layX() {
	return x;
}

int CDiem::layY() {
	return y;
}

void CDiem::capNhatX(int newX) {
	x = newX;
}

void CDiem::capNhatY(int newY) {
	y = newY;
}