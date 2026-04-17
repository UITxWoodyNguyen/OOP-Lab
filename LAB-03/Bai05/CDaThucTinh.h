#pragma once
#include <iostream>
using namespace std;

class CDaThucTinh {
	private:
		int n; // bac cua da thuc
		float a[1000]; // he so cua da thuc

	public:
		CDaThucTinh();
		CDaThucTinh(float[], int n);
		CDaThucTinh(const CDaThucTinh&);
		~CDaThucTinh();
		void Nhap();
		void Xuat();
};

