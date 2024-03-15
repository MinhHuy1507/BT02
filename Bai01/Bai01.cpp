#include <iostream>
#include "CPhanSo.h"

using namespace std;

int main()
{
	CPhanSo ps{};
	ps.Nhap();
	ps.Xuat();
	cout << endl;
	int kq = ps.KtPhanSo();
	switch (kq)
	{
	case 1 : 
		cout << "Phan so duong";
		break;
	case 2 : 
		cout << "Phan so am";
		break;
	case 3 :
		cout << "Phan so bang 0";
		break;
	}
	return 0;
}