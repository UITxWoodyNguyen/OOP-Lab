#include "CDaThucDong.h"

CDaThucDong::CDaThucDong() {
	n = 0;
	a = new float[1];
	a[0] = 0;

	cout << "Phuong thuc khoi tao mac dinh duoc goi" << endl;
}

CDaThucDong::CDaThucDong(float* b, int m) {
	n = m;
	a = new float[n + 1];
	for (int i = 0; i <= n; i++)
		a[i] = b[i];

	cout << "Phuong thuc khoi tao khi biet he so duoc goi" << endl;
}

CDaThucDong::CDaThucDong(const CDaThucDong& dt) {
	n = dt.n;
	a = new float[n + 1];
	for (int i = 0; i <= n; i++)
		a[i] = dt.a[i];
	cout << "Phuong thuc khoi tao sao chep duoc goi" << endl;
}

CDaThucDong::~CDaThucDong() {
	delete[] a;
	// cout << "Phuong thuc huy duoc goi" << endl;
}

void CDaThucDong::Nhap() {
	cout << "Nhap bac cua da thuc: ";
	cin >> n;
	delete[] a;
	a = new float[n + 1];
	for (int i = n; i >= 0; i--) {
		cout << "Nhap he so a[" << i << "]: ";
		cin >> a[i];
	}
}

void CDaThucDong::Xuat() {
	if (a == nullptr) {
		cout << 0 << endl;
		return;
	}

	bool hasTerm = false; // xac dinh xem co da thuc khong, va da xuat he so nao chua
	for (int i = n; i >= 0; i--) {
		if (a[i] == 0) continue;

		if (!hasTerm) {
			if (a[i] < 0) cout << "-";
			cout << (a[i] < 0 ? -a[i] : a[i]);
			hasTerm = true;
		}
		else {
			if (a[i] > 0) cout << " + " << a[i];
			else cout << " - " << -a[i];
		}

		if (i > 0) cout << "x^" << i;
	}

	if (!hasTerm) cout << 0;
	cout << endl;
}