#include <iostream>
using namespace std;

struct phan_so {
	int tu;
	int mau;
};
typedef struct phan_so PHANSO;

void Nhap_PS(PHANSO&);
void Xuat_PS(PHANSO);
int Kiemtra(PHANSO);

int main() {
	PHANSO p;
	Nhap_PS(p);
	int res = Kiemtra(p);

	switch (res) {
		case 1:
			cout << "Phan so duong" << endl;
			break;
		case -1:
			cout << "Phan so am" << endl;
			break;
		case 0:
			cout << "Phan so bang 0" << endl;
			break;
	}
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

int Kiemtra(PHANSO p) {
	if (p.tu * p.mau > 0) return 1;
	else if (p.tu * p.mau < 0) return -1;
	else return 0;
}