#include <iostream>
#include "CHocSinh.h"
using namespace std;

int main() {
	CHocSinh hs;
	hs.Nhap();
	
	double dtb = hs.DiemTB();
	cout << "Diem trung binh: " << dtb << endl;
	return 0;
}