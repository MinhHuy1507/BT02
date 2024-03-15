#include <iostream>
#include "CDiemKhongGian.h"

using namespace std;

int main()
{
	CDiemKhongGian A{}, B{};
	cout << "Nhap diem A: ";
	A.Nhap();
	A.Xuat();
	cout << "\nNhap diem B: ";
	B.Nhap();
	B.Xuat();
	float kq = A.KhoangCach(B);
	cout << "\nKhoang cach giua 2 diem trong khong gian: " << kq;
	
	return 0;
}