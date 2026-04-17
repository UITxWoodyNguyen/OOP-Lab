#pragma once
#include <iostream>
#include <string>
using namespace std;

class CHocSinh
{
private:
	string HoTen;
	double diemToan;
	double diemVan;

public:
	void Nhap();
	void Xuat();
	double DiemTB();
};

