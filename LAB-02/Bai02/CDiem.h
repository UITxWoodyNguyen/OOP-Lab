#pragma once
#include <iostream>
using namespace std;

class CDiem {
	private:
		double x;
		double y;
	public:
		void Nhap();
		void Xuat();
		double Khoang_Cach(CDiem);
};
