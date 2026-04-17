	#include <iostream>
#include "CPhanSo.h"
using namespace std;

int main() {
	CPhanSo a, b;
	cout << "=== NHAP PHAN SO THU NHAT ===" << endl;
	a.Nhap_PS();
	cout << "=== NHAP PHAN SO THU HAI ===" << endl;
	b.Nhap_PS();

	CPhanSo tongPS = a.tong(b);
	CPhanSo hieuPS = a.hieu(b);
	CPhanSo tichPS = a.tich(b);	
	CPhanSo thuongPS = a.thuong(b);

	cout << "===KET QUA===" << endl;
	cout << "Tong = ";
	tongPS.Xuat_PS();
	cout << "Hieu = ";
	hieuPS.Xuat_PS();
	cout << "Tich = ";
	tichPS.Xuat_PS();
	cout << "Thuong = ";
	thuongPS.Xuat_PS();

	return 1;
}