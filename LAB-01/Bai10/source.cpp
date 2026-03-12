#include <iostream>
using namespace std;

struct Phanso {
	int tu;
	int mau;
};
typedef struct Phanso PHANSO;

void Nhap_ps(PHANSO&);
void Xuat_ps(PHANSO);
void Nhap_ds(PHANSO[], int&);
bool ss_tang(PHANSO, PHANSO);
bool ss_giam(PHANSO, PHANSO);
void Xuat_ds(PHANSO[], int);
void Sort_ds_tang(PHANSO[], int, int);
void Sort_ds_giam(PHANSO[], int, int);

int main() {
	int n;
	PHANSO ps[1000];
	Nhap_ds(ps, n);

	cout << "Danh sach phan so vua nhap:" << endl;
	Xuat_ds(ps, n);

	cout << "Danh sach phan so sau khi sap xep tang dan: " << endl;
	Sort_ds_tang(ps, 0, n - 1);
	Xuat_ds(ps, n);

	cout << "Danh sach phan so sau khi sap xep giam dan: " << endl;
	Sort_ds_giam(ps, 0, n - 1);
	Xuat_ds(ps, n);

	return 0;
}

void Nhap_ps(PHANSO& ps) {
	cout << "tu = ";
	cin >> ps.tu;
	cout << "mau = ";
	cin >> ps.mau;
}

void Nhap_ds(PHANSO a[], int& n) {
	cout << "Nhap so luong phan so n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan so thu " << i + 1 << endl;
		Nhap_ps(a[i]);
	}
}

void Xuat_ps(PHANSO ps) {
	cout << ps.tu << "/" << ps.mau << endl;
}

void Xuat_ds(PHANSO a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "ps[" << i + 1 << "] = ";
		Xuat_ps(a[i]);
	}
}

bool ss_tang(PHANSO a, PHANSO b) {
	return (a.tu * b.mau) < (a.mau * b.tu);
}

void Sort_ds_tang(PHANSO a[], int left, int right) {
	int i = left, j = right;
	PHANSO pivot = a[(i + j) >> 1];

	while (i <= j) {
		while (ss_tang(a[i], pivot)) i++;
		while (ss_tang(pivot, a[j])) j--;

		if (i <= j) {
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}

	if (left < j) Sort_ds_tang(a, left, j);
	if (i < right) Sort_ds_tang(a, i, right);
}

bool ss_giam(PHANSO a, PHANSO b) {
	return (a.tu * b.mau) > (a.mau * b.tu);
}

void Sort_ds_giam(PHANSO a[], int left, int right) {
	int i = left, j = right;
	PHANSO pivot = a[(i + j) >> 1];

	while (i <= j) {
		while (ss_giam(a[i], pivot)) i++;
		while (ss_giam(pivot, a[j])) j--;
		if (i <= j) {
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}

	if (left < j) Sort_ds_giam(a, left, j);
	if (i < right) Sort_ds_giam(a, i, right);
}