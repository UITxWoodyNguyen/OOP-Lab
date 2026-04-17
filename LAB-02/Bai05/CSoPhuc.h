#pragma once
#include <iostream>
using namespace std;

class CSoPhuc {
	private:
		double thuc;
		double ao;

	public:
		void Nhap();
		void Xuat();
		CSoPhuc tong(CSoPhuc);
		CSoPhuc hieu(CSoPhuc);
		CSoPhuc tich(CSoPhuc);
		CSoPhuc thuong(CSoPhuc);
};	