#include <iostream>
using namespace std;

struct Diem {
	int x;
	int y;
};
typedef struct Diem DIEM;

struct Tron {
	DIEM tam;
	double r;
};
typedef struct Tron DUONG_TRON;

const double PI = 3.14;

void Nhap_diem(DIEM&);
void Nhap(DUONG_TRON&);
double Chu_vi(DUONG_TRON);
double Dien_tich(DUONG_TRON);

int main() {
	DUONG_TRON dt;
	Nhap(dt);

	double S = Dien_tich(dt);
	double C = Chu_vi(dt);

	cout << "Chu vi duong tron la: " << C << endl;
	cout << "Dien tich duong tron la: " << S << endl;
	return 0;
}

void Nhap_diem(DIEM& d) {
	cout << "x = ";
	cin >> d.x;
	cout << "y = ";
	cin >> d.y;
}

void Nhap(DUONG_TRON& dt) {
	cout << "Nhap toa do tam duong tron:" << endl;
	Nhap_diem(dt.tam);
	cout << "Nhap ban kinh duong tron: ";
	cin >> dt.r;
}

double Chu_vi(DUONG_TRON dt) {
	return 2 * PI * dt.r;
}

double Dien_tich(DUONG_TRON dt) {
	return PI * dt.r * dt.r;
}