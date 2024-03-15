#include <iostream>
#include "CDiem.h"
#include "CDuongTron.h"

using namespace std;

int main()
{
	CDuongTron C{};
	C.Nhap();
	C.Xuat();

	cout << "\nChu vi duong tron: ";
	cout << C.ChuVi();

	cout << "\nDien tich duong tron: ";
	cout << C.DienTich();

	return 0;
}