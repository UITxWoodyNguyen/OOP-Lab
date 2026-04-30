#pragma once
#include <iostream>
#include "CPhanSo.h"
using namespace std;


class CHonSo {
	private:
		int phanNguyen;
		int tu;
		int mau;

	public:
		CHonSo();	// default constructor
		CHonSo(int, int, int);		// constuctor co tham so
		CPhanSo ChuyenSangPhanSo() const;	// chuyen doi: HonSo --> PhanSo

		friend ostream& operator<< (ostream&, const CHonSo&);	// output operator
		friend istream& operator>> (istream&, CHonSo&);		// input operator

		/*Math Operator*/
		CHonSo operator+ (CHonSo);
		CHonSo operator- (CHonSo);
		CHonSo operator* (CHonSo);
		CHonSo operator/ (CHonSo);

		CHonSo& operator+= (const CHonSo&);
		CHonSo& operator-= (const CHonSo&);
		CHonSo& operator*= (const CHonSo&);
		CHonSo& operator/= (const CHonSo&);

		CHonSo& operator++ ();
		CHonSo& operator-- ();
		CHonSo operator++ (int);
		CHonSo operator-- (int);

		/*Comparing Operator*/
		bool operator> (CHonSo&) const;
		bool operator>= (CHonSo&) const;
		bool operator< (CHonSo&) const;
		bool operator<= (CHonSo&) const;
		bool operator== (CHonSo&) const;
		bool operator!= (CHonSo&) const;

		/*Overloading*/
		CHonSo& operator= (CHonSo&);
};

