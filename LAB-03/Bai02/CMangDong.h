#pragma once
#include <iostream>
using namespace std;

class CMangDong {
	private:
		float* a;
		int n;
	public:
		CMangDong();
		CMangDong(float*, int);
		CMangDong(const CMangDong&);
		void Nhap();
		void Xuat();
		~CMangDong();
};

