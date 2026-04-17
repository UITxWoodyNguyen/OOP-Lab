#include <iostream>
#include "CMangTinh.h"

using namespace std;

int main () {
	CMangTinh m1;
	float b[] = { 1.5, 2.5, 3.5 };

	CMangTinh m2(b, 3);
	CMangTinh m3(m2);

	cout << "Mang m1: " << endl;
	m1.Xuat();

	cout << "Mang m2: " << endl;
	m2.Xuat();
	
	cout << "Mang m3: " << endl;
	m3.Xuat();

	CMangTinh m4;
	m4.Nhap();

	cout << "Mang m4: " << endl;
	m4.Xuat();

	return 1;
}