#include <iostream>
#include "CDiem.h"
#include "CTamGiac.h"

using namespace std;

int main()
{
	CTamGiac x{};
	x.Nhap();
	x.Xuat();

	cout << "\nChu vi tam giac: ";
	cout << x.ChuVi();

	cout << "\nDien tich tam giac: ";
	cout << x.DienTich();
}