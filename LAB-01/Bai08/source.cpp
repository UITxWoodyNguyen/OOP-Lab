#include <iostream>
using namespace std;

struct Diem {
	double x;
	double y;
};
typedef struct Diem DIEM;

struct Tamgiac {
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct Tamgiac TAMGIAC;

void Nhap_diem(DIEM&);
void Nhap(TAMGIAC&);
void Xuat_diem(DIEM);
void Xuat(TAMGIAC);
double Khoang_Cach(DIEM, DIEM);

double Chu_vi(TAMGIAC);
double Dien_tich(TAMGIAC);
DIEM Trong_tam(TAMGIAC);

int main() {
	TAMGIAC t;
	Nhap(t);

	double P = Chu_vi(t);
	double S = Dien_tich(t);
	DIEM G = Trong_tam(t);

	cout << "Chu vi tam giac ABC la: " << P << endl;
	cout << "Dien tich tam giac ABC la: " << S << endl;
	cout << "Trong tam tam giac ABC la: ";
	Xuat_diem(G);
}

void Nhap_diem(DIEM& d) {
	cout << "x = ";
	cin >> d.x;
	cout << "y = ";
	cin >> d.y;
}

void Nhap(TAMGIAC& t) {
	cout << "Nhap toa do diem A: " << endl;
	Nhap_diem(t.A);

	cout << "Nhap toa do diem B: " << endl;
	Nhap_diem(t.B);

	cout << "Nhap toa do diem C: " << endl;
	Nhap_diem(t.C);
}

void Xuat_diem(DIEM d) {
	cout << "(" << d.x << ", " << d.y << ")";
}

void Xuat(TAMGIAC t) {
	cout << "Diem A: "; 
	Xuat_diem(t.A);
	cout << endl;
	cout << "Diem B: ";
	Xuat_diem(t.B);
	cout << endl;
	cout << "Diem C: ";
	Xuat_diem(t.C);
	cout << endl;
}

double Khoang_Cach(DIEM a, DIEM b) {
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

double Chu_vi(TAMGIAC t) {
	double AB = Khoang_Cach(t.A, t.B);
	double BC = Khoang_Cach(t.B, t.C);
	double AC = Khoang_Cach(t.A, t.C); 

	return AB + BC + AC;
}

double Dien_tich(TAMGIAC t) {
	double p = Chu_vi(t) / 2;
	double AB = Khoang_Cach(t.A, t.B);
	double BC = Khoang_Cach(t.B, t.C);
	double AC = Khoang_Cach(t.A, t.C);

	return sqrt(p * (p - AB) * (p - BC) * (p - AC));
}

DIEM Trong_tam(TAMGIAC t) {
	DIEM G;
	G.x = (t.A.x + t.B.x + t.C.x) / 3;
	G.y = (t.A.y + t.B.y + t.C.y) / 3;
	return G;
}