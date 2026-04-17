#pragma once
#include <iostream>
using namespace std;

class CNgay {
	private:
		int ng;
		int th;
		int nm;

	public:
		void Nhap();
		void Xuat();
		bool kt_nam_nhuan();
		long stt();
		int stt_trong_nam();
		CNgay tim_ngay(long);
		CNgay tim_ngay_trong_nam(int, int);
		CNgay tim_ngay_ke_tiep();
};

typedef class CNgay Ngay;

