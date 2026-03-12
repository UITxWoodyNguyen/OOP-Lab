#include <iostream>
using namespace std;

struct so_phuc {
	float thuc;
	float ao;
};
typedef struct so_phuc SO_PHUC;

void Nhap(SO_PHUC&);
void Xuat(SO_PHUC);
SO_PHUC tong(SO_PHUC, SO_PHUC);
SO_PHUC hieu(SO_PHUC, SO_PHUC);
SO_PHUC tich(SO_PHUC, SO_PHUC);
SO_PHUC thuong(SO_PHUC, SO_PHUC);

int main() {
	SO_PHUC a, b;
	cout << "Nhap so phuc a: " << endl;
	Nhap(a);
	cout << "Nhap so phuc b: " << endl;
	Nhap(b);

	SO_PHUC kq_tong = tong(a, b);
	SO_PHUC kq_hieu = hieu(a, b);
	SO_PHUC kq_tich = tich(a, b);
	SO_PHUC kq_thuong = thuong(a, b);

	cout << "a + b = ";
	Xuat(kq_tong);
	cout << "a = b = ";
	Xuat(kq_hieu);
	cout << "a * b = ";
	Xuat(kq_tich);
	cout << "a / b = ";
	Xuat(kq_thuong);
	
	return 0;
}

void Nhap(SO_PHUC& p) {
	cout << "Phan thuc = ";
	cin >> p.thuc;
	cout << "Phan ao = ";
	cin >> p.ao;
}

void Xuat(SO_PHUC p) {
	cout << p.thuc << " + " << p.ao << "i" << endl;
}

SO_PHUC tong(SO_PHUC z1, SO_PHUC z2) {
	SO_PHUC kq;
	kq.thuc = z1.thuc + z2.thuc;
	kq.ao = z1.ao + z2.ao;
	return kq;
}

SO_PHUC hieu(SO_PHUC z1, SO_PHUC z2) {
	SO_PHUC kq;
	kq.thuc = z1.thuc - z2.thuc;
	kq.ao = z1.ao - z2.ao;
	return kq;
}

SO_PHUC tich(SO_PHUC z1, SO_PHUC z2) {
	SO_PHUC kq;
	kq.thuc = z1.thuc * z2.thuc - z1.ao * z2.ao;
	kq.ao = z1.thuc * z2.ao + z1.ao * z2.thuc;
	return kq;
}

SO_PHUC thuong(SO_PHUC z1, SO_PHUC z2) {
	SO_PHUC kq;
	float mau = z2.thuc * z2.thuc + z2.ao * z2.ao;

	if (mau == 0) return { 0,0 };

	kq.thuc = (z1.thuc * z2.thuc + z1.ao * z2.ao) / mau;
	kq.ao = (z1.ao * z2.thuc - z1.thuc * z2.ao) / mau;
	return kq;
}