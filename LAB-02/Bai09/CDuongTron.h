#pragma once
#include <iostream>
#include "CDiem.h"
using namespace std;

class CDuongTron {
	private:
		int r;
		CDiem tam;

	public:
		void Nhap();
		void Xuat();
		double DienTich();
		double ChuVi();
};

