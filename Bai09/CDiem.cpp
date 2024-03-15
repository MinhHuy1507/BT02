#include "CDiem.h"
#include <iostream>

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