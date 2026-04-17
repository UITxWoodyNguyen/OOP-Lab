#pragma once
#include <iostream>
using namespace std;

class CDiem {
	private:
		int x;
		int y;

	public:
		void Nhap();
		void Xuat();
		double KhoangCach(CDiem);
		int layX();
		int layY();
		void capNhatX(int);
		void capNhatY(int);
};

