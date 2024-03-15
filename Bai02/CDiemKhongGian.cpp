#include "CDiemKhongGian.h"
#include <iostream>
#include <cmath>

using namespace std;

void CDiemKhongGian::Nhap()
{
	cout << "\nNhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
	cout << "Nhap cao do: ";
	cin >> z;
}

void CDiemKhongGian::Xuat()
{
	cout << "(" << x << ", " << y << ", " << z << ")";
}

float CDiemKhongGian::KhoangCach(CDiemKhongGian P)
{
	return sqrt((x - P.x) * (x - P.x) + (y - P.y) * (y - P.y) + (z - P.z) * (z - P.z));
}
