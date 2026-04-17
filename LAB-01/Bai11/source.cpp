#include <iostream>
using namespace std;

struct Hocsinh {
	double toan;
	double van;
	double anh;
	double dtb;
};
typedef struct Hocsinh HOCSINH;

void Nhap_ds(HOCSINH[], int&);
void Xuat_ds(HOCSINH[], int);
void DiemTB(HOCSINH[], int);

int main() {
	int n;
	HOCSINH a[1000];
	Nhap_ds(a, n);

	DiemTB(a, n);
	cout << "Diem trung binh cua cac hoc sinh la: " << endl;
	Xuat_ds(a, n);
	return 0;
}

void Nhap_ds(HOCSINH a[], int& n) {
	cout << "Nhap so luong hoc sinh n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin cua hoc sinh thu " << i + 1 << endl;
		cout << "Diem Toan = ";
		cin >> a[i].toan;
		cout << "Diem Van = ";
		cin >> a[i].van;
		cout << "Diem Anh = ";
		cin >> a[i].anh;
	}
}

void Xuat_ds(HOCSINH a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Hoc sinh thu " << i + 1 << ": " << endl;
		//cout << "Diem Toan = " << a[i].toan << endl;
		//cout << "Diem Van = " << a[i].van << endl;
		//cout << "Diem Anh = " << a[i].anh << endl;
		cout << "Diem trung binh = " << a[i].dtb << endl;
	}
}

void DiemTB(HOCSINH a[], int n) {
	for (int i = 0; i < n; i++)
		a[i].dtb = (a[i].toan + a[i].van + a[i].anh) / 3;
}