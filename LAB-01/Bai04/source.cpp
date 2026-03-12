#include <iostream>
using namespace std;

struct phan_so {
	int tu;
	int mau;
};
typedef struct phan_so PHANSO;

void Nhap_PS(PHANSO&);
void Xuat_PS(PHANSO);
void rut_gon(PHANSO&);
int ucln(int, int);
PHANSO tong(PHANSO, PHANSO);
PHANSO hieu(PHANSO, PHANSO);
PHANSO tich(PHANSO, PHANSO);
PHANSO thuong(PHANSO, PHANSO);

int main() {
	PHANSO a, b;
	cout << "Nhap phan so thu nhat: " << endl;
	Nhap_PS(a);
	cout << "Nhap phan so thu hai: " << endl;
	Nhap_PS(b);

	PHANSO tong_ps = tong(a, b);
	PHANSO hieu_ps = hieu(a, b);
	PHANSO tich_ps = tich(a, b);
	PHANSO thuong_ps = thuong(a, b);

	cout << "Tong = ";
	Xuat_PS(tong_ps);
	cout << "Hieu = ";
	Xuat_PS(hieu_ps);
	cout << "Tich = ";
	Xuat_PS(tich_ps);
	cout << "Thuong = ";
	Xuat_PS(thuong_ps);

	return 1;
}

void Nhap_PS(PHANSO& p) {
	cout << "Nhap tu so: ";
	cin >> p.tu;
	cout << "Nhap mau so: ";
	cin >> p.mau;
}

void Xuat_PS(PHANSO p) {
	cout << p.tu << "/" << p.mau << endl;
}

int ucln(int a, int b) {
	if (b == 0) return a;
	return ucln(b, a % b);
}

void rut_gon(PHANSO& p) {
	int tempTu = abs(p.tu);
	int tempMau = abs(p.mau);

	int gcd = ucln(tempTu, tempMau);
	p.tu /= gcd;
	p.mau /= gcd;
}

PHANSO tong(PHANSO a, PHANSO b) {
	PHANSO kq;
	kq.tu = a.tu * b.mau + b.tu * a.mau;
	kq.mau = a.mau * b.mau;

	rut_gon(kq);
	return kq;
}

PHANSO hieu(PHANSO a, PHANSO b) {
	PHANSO kq;
	kq.tu = a.tu * b.mau - b.tu * a.mau;
	kq.mau = a.mau * b.mau;

	rut_gon(kq);
	return kq;
}

PHANSO tich(PHANSO a, PHANSO b) {
	PHANSO kq;
	kq.tu = a.tu * b.tu;
	kq.mau = a.mau * b.mau;
	rut_gon(kq);
	return kq;
}

PHANSO thuong(PHANSO a, PHANSO b) {
	PHANSO kq;
	kq.tu = a.tu * b.mau;
	kq.mau = a.mau * b.tu;
	rut_gon(kq);
	return kq;
}