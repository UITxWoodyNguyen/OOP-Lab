#pragma once
#include "CHocSinh.h"

class CMangHS {
	private:
		CHocSinh* arr;
		int n;

	public:
		void NhapDS();
		void XuatDS();
		CHocSinh* TimHSMaxDiemTB();
		CHocSinh* TimHSMinDiemTB();
};

