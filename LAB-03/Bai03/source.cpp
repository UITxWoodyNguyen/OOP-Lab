#include <iostream>
#include "CMaTranTinh.h"

using namespace std;

int main() {
	CMaTranTinh mt1;
	
	float b[MAXN][MAXN] = { {1.5, 2.5, 3.5}, {4.5, 5.5, 6.5} };

	CMaTranTinh mt2(b, 2, 3);
	CMaTranTinh mt3(mt2);

	cout << "Ma tran mt1: " << endl;
	mt1.Xuat();

	cout << "Ma tran mt2: " << endl;
	mt2.Xuat();

	cout << "Ma tran mt3: " << endl;
	mt3.Xuat();

	CMaTranTinh inpMT;
	cout << "Nhap ma tran moi: " << endl;
	inpMT.Nhap();
	inpMT.Xuat();

	return 1;
}