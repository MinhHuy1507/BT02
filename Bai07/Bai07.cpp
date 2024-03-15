#include <iostream>
#include "CNgay.h"

using namespace std;

int main()
{
	CNgay x{};
	x.Nhap();
	x.Xuat();

	cout << "\nNgay hom qua la: ";
	x.TimNgayHomQua().Xuat();
	return 0;
}