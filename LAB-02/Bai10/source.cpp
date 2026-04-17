#include <iostream>
#include "CMangPS.h"
using namespace std;

int main() {
	CMangPS ds;
	ds.NhapMang();
	cout << "Mang phan so sau khi nhap:" << endl;
	ds.XuatMang();

	ds.SapXepTang();
	cout << "Mang phan so sau khi sap xep tang:" << endl;
	ds.XuatMang();

	ds.SapXepGiam();
	cout << "Mang phan so sau khi sap xep giam:" << endl;
	ds.XuatMang();

	return 1;
}