#include "CDaThuc.h"

CDaThuc::CDaThuc() {
	bac = 0;
	a = new float[1];
	a[0] = 0;
}

CDaThuc::CDaThuc(float* b, int n) {
	bac = n;
	a = new float[bac + 1];
	for (int i = 0; i <= n; i++)
		a[i] = b[i];
}

CDaThuc::CDaThuc(const CDaThuc& x) {
	bac = x.bac;
	a = new float[bac + 1];
	for (int i = 0; i <= bac; i++)
		a[i] = x.a[i];
}

CDaThuc::~CDaThuc() {
	delete[] a;
}

/* Dinh nghia toan tu nhap/xuat */
istream& operator>> (istream& inp, CDaThuc& dt) {
	inp >> dt.bac;

	delete[] dt.a;
	dt.a = new float[dt.bac + 1];

	for (int i = dt.bac; i >= 0; i--)
		inp >> dt.a[i];

	return inp;
}

ostream& operator<< (ostream& out, const CDaThuc& dt) {
	bool hasTerm = false;

	for (int i = dt.bac; i >= 0; i--) {
		if (dt.a[i] == 0) continue;

		if (!hasTerm) {
			if (dt.a[i] < 0) out << "-";
			out << (dt.a[i] < 0 ? -dt.a[i] : dt.a[i]);
			hasTerm = true;
		}
		else {
			if (dt.a[i] > 0) out << " + " << dt.a[i];
			else out << " - " << -dt.a[i];
		}

		if (i > 0) out << "x^" << i;
	}

	if (!hasTerm) out << 0;
	return out;
}

/* Dinh nghia toan tu so hoc */
CDaThuc CDaThuc::operator+ (CDaThuc x) {
	int n = max(bac, x.bac);
	float* kq = new float[n + 1]();

	for (int i = 0; i <= n; i++) {
		float a1 = (i <= bac) ? a[i] : 0;     // truong hop khong co he so a[i]
		float a2 = (i <= x.bac) ? x.a[i] : 0; // truong hop khong co he so x.a[i]
		kq[i] = a1 + a2;
	}

	CDaThuc res(kq, n);
	delete[] kq;
	return res;
}

CDaThuc CDaThuc::operator- (CDaThuc x) {
	int n = max(bac, x.bac);
	float* kq = new float[n + 1]();

	for (int i = 0; i <= n; i++) {
		float a1 = (i <= bac) ? a[i] : 0;
		float a2 = (i <= x.bac) ? x.a[i] : 0;
		kq[i] = a1 - a2;
	}

	CDaThuc res(kq, n);
	delete[] kq;
	return res;
}

CDaThuc CDaThuc::operator* (CDaThuc x) {
	int n = bac + x.bac;
	float* kq = new float[n + 1]();

	for (int i = 0; i <= bac; i++)
		for (int j = 0; j <= x.bac; j++)
			kq[i + j] += a[i] * x.a[j];

	CDaThuc res(kq, n);
	delete[] kq;
	return res;
}

CDaThuc CDaThuc::operator/ (CDaThuc x) {
	if (bac < x.bac || bac == 0) {
		float* kq = new float[1];
		kq[0] = 0;
		CDaThuc res(kq, 0);
		delete[] kq;
		return res;
	}

	CDaThuc temp = *this;
	int n = temp.bac - x.bac;
	float* kq = new float[n + 1]();

	while (temp.bac >= x.bac) {
		int k = temp.bac - x.bac;
		float HeSo = temp.a[temp.bac] / x.a[x.bac];
		kq[k] = HeSo;

		for (int i = 0; i <= x.bac; i++)
			temp.a[i + k] -= HeSo * x.a[i];

		while (temp.bac >= 0 && temp.a[temp.bac] == 0)
			temp.bac--;
	}

	CDaThuc res(kq, n);
	delete[] kq;
	return res;
}

CDaThuc& CDaThuc::operator+= (const CDaThuc& x) {
	int n = max(bac, x.bac);
	float* kq = new float[n + 1]();

	for (int i = 0; i <= n; i++) {
		float a1 = (i <= bac) ? a[i] : 0;
		float a2 = (i <= x.bac) ? x.a[i] : 0;
		kq[i] = a1 + a2;
	}

	CDaThuc temp(kq, n);
	delete[] kq;
	*this = temp;
	return *this;
}

CDaThuc& CDaThuc::operator-= (const CDaThuc& x) {
	int n = max(bac, x.bac);
	float* kq = new float[n + 1]();

	for (int i = 0; i <= n; i++) {
		float a1 = (i <= bac) ? a[i] : 0;
		float a2 = (i <= x.bac) ? x.a[i] : 0;
		kq[i] = a1 - a2;
	}

	CDaThuc temp(kq, n);
	delete[] kq;
	*this = temp;
	return *this;
}

CDaThuc& CDaThuc::operator*= (const CDaThuc& x) {
	int n = bac + x.bac;
	float* kq = new float[n + 1]();

	for (int i = 0; i <= bac; i++)
		for (int j = 0; j <= x.bac; j++)
			kq[i + j] += a[i] * x.a[j];

	CDaThuc temp(kq, n);
	delete[] kq;
	*this = temp;
	return *this;
}

CDaThuc& CDaThuc::operator/= (const CDaThuc& x) {
	if (bac < x.bac || bac == 0) {
		float* kq = new float[1];
		kq[0] = 0;
		CDaThuc tmp(kq, 0);
		delete[] kq;
		*this = tmp;
		return *this;
	}

	CDaThuc temp = *this;
	int n = temp.bac - x.bac;
	float* kq = new float[n + 1]();

	while (temp.bac >= x.bac) {
		int k = temp.bac - x.bac;
		float HeSo = temp.a[temp.bac] / x.a[x.bac];
		kq[k] = HeSo;

		for (int i = 0; i <= x.bac; i++)
			temp.a[i + k] -= HeSo * x.a[i];

		while (temp.bac >= 0 && temp.a[temp.bac] == 0)
			temp.bac--;
	}

	CDaThuc tmp(kq, n);
	delete[] kq;
	*this = tmp;
	return *this;
}

/* Dinh nghia toan tu so sanh */
bool CDaThuc::operator== (const CDaThuc& x) const {
	if (bac != x.bac) return false;
	for (int i = 0; i <= bac; i++)
		if (a[i] != x.a[i]) return false;
	return true;
}

bool CDaThuc::operator!= (const CDaThuc& x) const {
	if (bac != x.bac) return true;
	for (int i = 0; i <= bac; i++)
		if (a[i] != x.a[i]) return true;
	return false;
}

/* Dinh nghia toan tu gan */
CDaThuc& CDaThuc::operator= (const CDaThuc& x) {
	if (this == &x) return *this;

	delete[] a;

	bac = x.bac;
	a = new float[bac + 1];
	for (int i = 0; i <= bac; i++)
		a[i] = x.a[i];

	return *this;
}