#include <iostream>
#include "CMangDong.h"

using namespace std;

int main() {
	CMangDong m1;

	float* b = new float[5] {1.1, 2.2, 3.3, 4.4, 5.5};
	CMangDong m2(b, 5);
	CMangDong m3(m2);

	cout << "Mang m1: " << endl;
	m1.Xuat();

	cout << "Mang m2: " << endl;
	m2.Xuat();

	cout << "Mang m3: " << endl;
	m3.Xuat();

	CMangDong m4;
	m4.Nhap();

	cout << "Mang m4: " << endl;
	m4.Xuat();

	return 1;
}