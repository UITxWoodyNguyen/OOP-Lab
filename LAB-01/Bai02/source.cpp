#include <iostream>
using namespace std;

struct Diem {
	double x;
	double y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
double Khoang_Cach(DIEM, DIEM);

int main() {
	DIEM a, b;
	cout << "Nhap toa do diem A: " << endl;
	Nhap(a);
	cout << "Nhap toa do diem B: " << endl;
	Nhap(b);

	double kc = Khoang_Cach(a, b);
	Xuat(a);
	Xuat(b);
	cout << "Khoang cach giua A va B la: " << kc << endl;
}

void Nhap(DIEM& p) {
	cout << "x = ";
	cin >> p.x;
	cout << "y = ";
	cin >> p.y;
}

void Xuat(DIEM p) {
	cout << "(" << p.x << ", " << p.y << ")" << endl;
}

double Khoang_Cach(DIEM a, DIEM b) {
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}