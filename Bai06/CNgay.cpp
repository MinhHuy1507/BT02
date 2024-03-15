#include "CNgay.h"
#include <iostream>

using namespace std;

void CNgay::Nhap()
{
	cout << "Nhap ngay: ";
	cin >> Ngay;
	cout << "Nhap thang: ";
	cin >> Thang;
	cout << "Nhap nam: ";
	cin >> Nam;
}

void CNgay::Xuat()
{
	cout << Ngay << "/" << Thang << "/" << Nam;
}

int CNgay::KtNamNhuan()
{
	if (Nam % 4 == 0 && Nam % 100 != 0)
		return 1;
	if (Nam % 400 == 0)
		return 1;
	return 0;
}

int CNgay::STTTrongNam()
{
	int thang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int stt = 0;
	if (KtNamNhuan())
		thang[1] = 29;
	for (int i = 0; i < Thang - 1; i++)
		stt = stt + thang[i];
	return stt + Ngay;
}

long CNgay::SoThuTu()
{
	long stt = 0;
	for (int i = 1; i < Nam; i++)
	{
		stt += 365;
		CNgay x{};
		x.Nam = i;
		if (x.KtNamNhuan())
			stt++;
	}
	return stt + STTTrongNam();
}

CNgay CNgay::TimNgay(long stt)
{
	int SoNgay = 365;
	int nam = 1;
	while (stt - SoNgay > 0)
	{
		stt = stt - SoNgay;
		nam++;
		CNgay x{};
		x.Nam = nam;
		if (x.KtNamNhuan())
			SoNgay = 366;
		else
			SoNgay = 365;
	}
	return TimNgay(nam, stt);
}

CNgay CNgay::TimNgay(int nam, int stt)
{
	int thang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	CNgay temp{};
	temp.Nam = nam;
	if (temp.KtNamNhuan())
		thang[1] = 29;
	temp.Thang = 1;
	while (stt - thang[temp.Thang - 1] > 0)
	{
		stt = stt - thang[temp.Thang - 1];
		temp.Thang++;
	}
	temp.Ngay = stt;
	return temp;
}

CNgay CNgay::TimNgayKeTiep()
{
	long stt = SoThuTu();
	stt++;
	return TimNgay(stt);
}
