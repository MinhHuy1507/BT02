#include <iostream>
#include "CSoPhuc.h"

using namespace std;

int main()
{
	CSoPhuc sp1{};
	cout << "Nhap so phuc thu 1: ";
	sp1.Nhap();
	sp1.Xuat();

	CSoPhuc sp2{};
	cout << "\nNhap so phuc thu 2: ";
	sp2.Nhap();
	sp2.Xuat();

	cout << "\nTong 2 so phuc la = ";
	sp1.Tong(sp2).Xuat();
	cout << "\nHieu 2 so phuc la = ";
	sp1.Hieu(sp2).Xuat();
	cout << "\nTich 2 so phuc la = ";
	sp1.Tich(sp2).Xuat();

	return 0;
}