#pragma once
#include <iostream>
#include <string>
using namespace std;

class CHocSinh {
	private:
		string HoTen;
		int diemToan;
		int diemVan;

	public:
		void Nhap();
		void Xuat();
		double DiemTB();
};
