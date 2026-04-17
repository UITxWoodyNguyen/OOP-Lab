#pragma once
#include <iostream>
using namespace std;

#define MAXN 100

class CMaTranTinh {
	private:
		float a[MAXN][MAXN];
		int soDong;
		int soCot;

	public:
		CMaTranTinh();
		CMaTranTinh(float [][MAXN], int, int);
		CMaTranTinh(const CMaTranTinh&);
		void Nhap();
		void Xuat();
		~CMaTranTinh();
};

