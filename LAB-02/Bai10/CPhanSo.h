#pragma once
#include <iostream>
using namespace std;

class CPhanSo {
	private:
		int tu;
		int mau;

	public:
		void Nhap();
		void Xuat();
		void HoanDoi(CPhanSo&); 
		int SoSanh(CPhanSo);
		int layTu();
		int layMau();
};

