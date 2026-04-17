#include <iostream>
#include "CMangHS.h"
using namespace std;

int main() {
	CMangHS ds;
	ds.NhapDS();

	//cout << "Danh sach hoc sinh:" << endl;
	//ds.XuatDS();

	CHocSinh* maxHS = ds.TimHSMaxDiemTB();
	cout << "Hoc sinh co diem trung binh cao nhat:" << endl;
	maxHS->Xuat();

	CHocSinh* minHS = ds.TimHSMinDiemTB();
	cout << "Hoc sinh co diem trung binh thap nhat:" << endl;
	minHS->Xuat();

	return 1;
}