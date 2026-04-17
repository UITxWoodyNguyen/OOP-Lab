#include <iostream>
#include "CDiem.h"
using namespace std;

int main() {
	CDiem a, b;
	cout << "=== NHAP DIEM A ===" << endl;
	a.Nhap();
	cout << "=== NHAP DIEM B ===" << endl;
	b.Nhap();

	double kc = a.Khoang_Cach(b);
	cout << "Khoang cach giua A va B: " << kc << endl;

	return 1;
}