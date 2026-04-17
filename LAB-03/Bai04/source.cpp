#include <iostream>
#include "CMaTranDong.h"
using namespace std;

int main() {
	CMaTranDong mt1;
	float** b;
	b = new float* [2];
	b[0] = new float[3] { 1, 2, 3 };
	b[1] = new float[3] { 4, 5, 6 };

	CMaTranDong mt2(b, 2, 3);
	CMaTranDong mt3(mt2);

	cout << "Ma tran mt1: " << endl;
	mt1.Xuat();

	cout << "Ma tran mt2: " << endl;
	mt2.Xuat();

	cout << "Ma tran mt3: " << endl;
	mt3.Xuat();

	CMaTranDong inpMT;
	cout << "Nhap ma tran moi: " << endl;
	inpMT.Nhap();
	inpMT.Xuat();

	return 1;
}