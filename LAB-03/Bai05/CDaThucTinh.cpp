#include "CDaThucTinh.h"

CDaThucTinh::CDaThucTinh() {
	n = 0;
	a[0] = 0;

	cout << "Phuong thuc khoi tao mac dinh duoc goi!" << endl;
}

CDaThucTinh::CDaThucTinh(float b[], int m) {
	n = m;
	for(int i = n; i >= 0; i--) {
		a[i] = b[i];
	}

	cout << "Phuong thuc khoi tao co tham so duoc goi!" << endl;
}

CDaThucTinh::CDaThucTinh(const CDaThucTinh& dt) {
	n = dt.n;
	for (int i = n; i >= 0; i--) {
		a[i] = dt.a[i];
	}

	cout << "Phuong thuc khoi tao sao chep duoc goi!" << endl;
}

CDaThucTinh::~CDaThucTinh() {

}

void CDaThucTinh::Nhap() {
	cout << "Nhap bac cua da thuc: ";
	cin >> n;
	for (int i = n; i >= 0; i--) {
		cout << "Nhap he so a[" << i << "]: ";
		cin >> a[i];
	}
}

void CDaThucTinh::Xuat() {
	cout << a[n] << "x^" << n;
	for (int i = n - 1; i > 0; i--) {
		if (a[i] > 0) {
			cout << " + " << a[i] << "x^" << i;
		} else if (a[i] < 0) {
			cout << " - " << -a[i] << "x^" << i;
		}
	}

	if (a[0] > 0) {
		cout << " + " << a[0];
	} else if (a[0] < 0) {
		cout << " - " << -a[0];
	}

	cout << endl;
}