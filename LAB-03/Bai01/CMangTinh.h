#pragma once
#include <iostream>
using namespace std;

#define MAXN 1000

class CMangTinh {
private:
	float a[MAXN];
	int n;
public:
	CMangTinh();
	CMangTinh(float[], int);
	CMangTinh(const CMangTinh&);
	void Nhap();
	void Xuat();
	~CMangTinh();
};

