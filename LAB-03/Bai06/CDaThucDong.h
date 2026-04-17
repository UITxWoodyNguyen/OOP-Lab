#pragma once
#include <iostream>
using namespace std;


class CDaThucDong {
	private:
		int n; // bac cua da thuc
		float* a; // mang chua he so cua da thuc

	public:
		CDaThucDong(); 
		CDaThucDong(float*, int);
		CDaThucDong(const CDaThucDong&);
		~CDaThucDong();

		void Nhap();
		void Xuat();
};

