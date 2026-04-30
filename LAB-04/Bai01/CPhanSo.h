#pragma once
#include <iostream>
using namespace std;

class CHonSo;

class CPhanSo {
	private:
		int tu;
		int mau;

	public:
		CPhanSo();
		CPhanSo(int, int);
		CPhanSo operator+ (CPhanSo);
		CPhanSo operator- (CPhanSo);
		CPhanSo operator* (CPhanSo);
		CPhanSo operator/ (CPhanSo);

		int getTu();
		int getMau();

		CHonSo ChuyenSangHonSo();
};

