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
void Xuat_tt(HOCSINH[], int);
void DiemTB(HOCSINH[], int);

int max_dtb(HOCSINH[], int);
int min_dtb(HOCSINH[], int);


int main() {
	int n;
	HOCSINH a[1000];
	Nhap_ds(a, n);

	DiemTB(a, n);
	int high = max_dtb(a, n);
	int low = min_dtb(a, n);
	cout << "Hoc sinh co diem trung binh cao nhat:" << endl;
	Xuat_tt(a, high);

	cout << "Hoc sinh co diem trung binh thap nhat:" << endl;
	Xuat_tt(a, low);
	
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

void Xuat_tt(HOCSINH a[], int i) {
	cout << "Hoc sinh thu " << i + 1 << ": " << endl;
	cout << "Diem Toan = " << a[i].toan << endl;
	cout << "Diem Van = " << a[i].van << endl;
	cout << "Diem Anh = " << a[i].anh << endl;
	cout << "Diem trung binh = " << a[i].dtb << endl;
}

void DiemTB(HOCSINH a[], int n) {
	for (int i = 0; i < n; i++)
		a[i].dtb = (a[i].toan + a[i].van + a[i].anh) / 3;
}

int max_dtb(HOCSINH a[], int n) {
	double max = a[0].dtb;
	int index = 0;
	for (int i = 1; i < n; i++)
		if (a[i].dtb > max) {
			max = a[i].dtb;
			index = i;
		}

	return index;
}

int min_dtb(HOCSINH a[], int n) {
	double min = a[0].dtb;
	int index = 0;
	for (int i = 1; i < n; i++)
		if (a[i].dtb < min) {
			min = a[i].dtb;
			index = i;
		}

	return index;
}