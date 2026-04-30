#include "CHonSo.h"

CHonSo::CHonSo() {
	phanNguyen = 0;
	tu = 0;
	mau = 1;
}

CHonSo::CHonSo(int phanNguyen, int tu, int mau) {
	this->phanNguyen = phanNguyen;
	this->tu = tu;
	this->mau = mau;
}

/* Dinh nghia toan tu Nhap/Xuat */
istream& operator>> (istream& inp, CHonSo& hs) {
	char op;
	inp >> hs.phanNguyen >> hs.tu >> op >> hs.mau;
	return inp;
}

ostream& operator<< (ostream& out, const CHonSo& hs) {
	out << hs.phanNguyen << " " << hs.tu << "/" << hs.mau << endl;
	return out;
}

CPhanSo CHonSo::ChuyenSangPhanSo() const {
	CPhanSo temp(phanNguyen * mau + tu, mau);
	return temp;
}

/* Dinh nghia toan tu so hoc */
CHonSo CHonSo::operator+ (CHonSo x) {
	CPhanSo val_1 = ChuyenSangPhanSo();
	CPhanSo val_2 = x.ChuyenSangPhanSo();
	CPhanSo temp = val_1 + val_2;
	return temp.ChuyenSangHonSo();
}

CHonSo CHonSo::operator- (CHonSo x) {
	CPhanSo val_1 = ChuyenSangPhanSo();
	CPhanSo val_2 = x.ChuyenSangPhanSo();
	CPhanSo temp = val_1 - val_2;
	return temp.ChuyenSangHonSo();
}

CHonSo CHonSo::operator* (CHonSo x) {
	CPhanSo val_1 = ChuyenSangPhanSo();
	CPhanSo val_2 = x.ChuyenSangPhanSo();
	CPhanSo temp = val_1 * val_2;
	return temp.ChuyenSangHonSo();
}

CHonSo CHonSo::operator/ (CHonSo x) {
	CPhanSo val_1 = ChuyenSangPhanSo();
	CPhanSo val_2 = x.ChuyenSangPhanSo();
	CPhanSo temp = val_1 / val_2;
	return temp.ChuyenSangHonSo();
}

CHonSo& CHonSo::operator+= (const CHonSo& x) {
	CPhanSo val_1 = ChuyenSangPhanSo();
	CPhanSo val_2 = x.ChuyenSangPhanSo();
	CPhanSo temp = val_1 + val_2;
	
	CHonSo hs_temp = temp.ChuyenSangHonSo();
	*this = hs_temp;
	return *this;
}

CHonSo& CHonSo::operator-= (const CHonSo& x) {
	CPhanSo val_1 = ChuyenSangPhanSo();
	CPhanSo val_2 = x.ChuyenSangPhanSo();
	CPhanSo temp = val_1 - val_2;

	CHonSo hs_temp = temp.ChuyenSangHonSo();
	*this = hs_temp;
	return *this;
}

CHonSo& CHonSo::operator*= (const CHonSo& x) {
	CPhanSo val_1 = ChuyenSangPhanSo();
	CPhanSo val_2 = x.ChuyenSangPhanSo();
	CPhanSo temp = val_1 * val_2;

	CHonSo hs_temp = temp.ChuyenSangHonSo();
	*this = hs_temp;
	return *this;
}

CHonSo& CHonSo::operator/= (const CHonSo& x) {
	CPhanSo val_1 = ChuyenSangPhanSo();
	CPhanSo val_2 = x.ChuyenSangPhanSo();
	CPhanSo temp = val_1 / val_2;

	CHonSo hs_temp = temp.ChuyenSangHonSo();
	*this = hs_temp;
	return *this;
}

CHonSo& CHonSo::operator++ () {		// prefix (tang truoc, return sau): ++a
	phanNguyen += 1;
	return *this;
}

CHonSo& CHonSo::operator-- () {
	phanNguyen -= 1;
	return *this;
}

CHonSo CHonSo::operator++ (int) {	// postfix (return truoc, tang sau): a++
	CHonSo temp = *this;
	phanNguyen++;
	return temp;
}

CHonSo CHonSo::operator-- (int) {
	CHonSo temp = *this;
	phanNguyen--;
	return temp;
}

/* Dinh nghia toan tu so sanh */
bool CHonSo::operator> (CHonSo& x) const {
	CPhanSo val_1 = ChuyenSangPhanSo();
	CPhanSo val_2 = x.ChuyenSangPhanSo();

	int tu1 = val_1.getTu() * val_2.getMau();
	int tu2 = val_1.getMau() * val_2.getTu();

	return tu1 > tu2;
}

bool CHonSo::operator>= (CHonSo& x) const {
	CPhanSo val_1 = ChuyenSangPhanSo();
	CPhanSo val_2 = x.ChuyenSangPhanSo();

	int tu1 = val_1.getTu() * val_2.getMau();
	int tu2 = val_1.getMau() * val_2.getTu();

	return tu1 >= tu2;
}

bool CHonSo::operator< (CHonSo& x) const {
	CPhanSo val_1 = ChuyenSangPhanSo();
	CPhanSo val_2 = x.ChuyenSangPhanSo();

	int tu1 = val_1.getTu() * val_2.getMau();
	int tu2 = val_1.getMau() * val_2.getTu();

	return tu1 < tu2;
}

bool CHonSo::operator<= (CHonSo& x) const {
	CPhanSo val_1 = ChuyenSangPhanSo();
	CPhanSo val_2 = x.ChuyenSangPhanSo();

	int tu1 = val_1.getTu() * val_2.getMau();
	int tu2 = val_1.getMau() * val_2.getTu();

	return tu1 <= tu2;
}

bool CHonSo::operator== (CHonSo& x) const {
	CPhanSo val_1 = ChuyenSangPhanSo();
	CPhanSo val_2 = x.ChuyenSangPhanSo();

	int tu1 = val_1.getTu() * val_2.getMau();
	int tu2 = val_1.getMau() * val_2.getTu();

	return tu1 == tu2;
}

bool CHonSo::operator!= (CHonSo& x) const {
	CPhanSo val_1 = ChuyenSangPhanSo();
	CPhanSo val_2 = x.ChuyenSangPhanSo();

	int tu1 = val_1.getTu() * val_2.getMau();
	int tu2 = val_1.getMau() * val_2.getTu();

	return tu1 != tu2;
}

/* Dinh nghia toan tu gan */
CHonSo& CHonSo::operator= (CHonSo& x) {
	if (this == &x) return *this;

	phanNguyen = x.phanNguyen;
	tu = x.tu;
	mau = x.mau;

	return *this;
}