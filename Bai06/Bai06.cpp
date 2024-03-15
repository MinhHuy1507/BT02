#include <iostream>
#include "CNgay.h"

using namespace std;

int main()
{
	CNgay x{};
	x.Nhap();
	x.Xuat();

	cout << "\nNgay ke tiep la: ";
	x.TimNgayKeTiep().Xuat();
	return 0;
}