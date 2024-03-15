#include "CDiem.h"
#include <iostream>
#include <cmath>

using namespace std;

void CDiem::Nhap()
{
	cout << "\nNhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
}

void CDiem::Xuat()
{
	cout << "(" << x << ", " << y << ")";
}

float CDiem::KhoangCach(CDiem P)
{
	return sqrt((x - P.x)* (x - P.x) + (y - P.y) * (y - P.y));
}