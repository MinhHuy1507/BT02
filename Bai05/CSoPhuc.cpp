#include "CSoPhuc.h"
#include <iostream>

using namespace std;

void CSoPhuc::Nhap()
{
	cout << "\nNhap phan thuc: ";
	cin >> Thuc;
	cout << "Nhap phan ao: ";
	cin >> Ao;
}

void CSoPhuc::Xuat()
{
	cout << "\nThuc = " << Thuc;
	cout << "\nAo = " << Ao<<endl;
}

CSoPhuc CSoPhuc::Tong(CSoPhuc sp)
{
	CSoPhuc temp{};
	temp.Thuc = Thuc + sp.Thuc;
	temp.Ao = Ao + sp.Ao;
	return temp;
}

CSoPhuc CSoPhuc::Hieu(CSoPhuc sp)
{
	CSoPhuc temp{};
	temp.Thuc = Thuc - sp.Thuc;
	temp.Ao = Ao - sp.Ao;
	return temp;
}

CSoPhuc CSoPhuc::Tich(CSoPhuc sp)
{
	CSoPhuc temp{};
	temp.Thuc = Thuc * sp.Thuc - Ao * sp.Ao;
	temp.Ao = Thuc * sp.Ao + Ao * sp.Thuc;
	return temp;
}