#include <iostream>
using namespace std;

struct phan_so {
	int tu;
	int mau;
};
typedef struct phan_so PHANSO;

void Nhap_PS(PHANSO&);
void Xuat_PS(PHANSO);
PHANSO tim_max(PHANSO, PHANSO);

int main() {
	PHANSO a, b;
	cout << "Nhap phan so thu nhat: " << endl;
	Nhap_PS(a);
	cout << "Nhap phan so thu hai: " << endl;
	Nhap_PS(b);
	
	PHANSO val = tim_max(a, b);
	cout << "Phan so lon nhat la: ";
	Xuat_PS(val);

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

PHANSO tim_max(PHANSO a, PHANSO b) {
	PHANSO maxValue;
	int tempA = a.tu * b.mau;
	int tempB = b.tu * a.mau;

	if (tempA > tempB) maxValue = a;
	else maxValue = b;

	return maxValue;
}