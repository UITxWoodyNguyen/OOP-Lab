#pragma once
#include <iostream>
#include "CDiem.h"
using namespace std;

class CTamGiac
{
private:
	CDiem A;
	CDiem B;
	CDiem C;

public:
	void Nhap();
	void Xuat();
	bool KiemTraTamGiac();
	double ChuVi();
	double DienTich();
	CDiem TrongTam();
};

