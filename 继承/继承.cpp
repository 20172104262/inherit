// �̳�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;

class CDate
{
protected:
	int year;
	int month;
	int day;
public:

	CDate();
	CDate(int ty, int tm, int td);
	void display();
	~CDate();
};

CDate::CDate()
{
	year = 2017;
	month = 12;
	day = 1;
	cout << "����Ĭ�Ϲ��캯��" << year << "��" << month << "��" << day << "��" << endl;
}
CDate::CDate(int ty, int tm, int td)
{
	year = ty;
	month = tm;
	day = td;
	cout << "���๹�캯��" << year << "��" << month << "��" << day << "��" << endl;
}
void CDate::display()
{
	cout << "����dispaly" << year << "��" << month << "��" << day << "��" << endl;
}
CDate::~CDate(void)
{
	cout << "������������" << year << "��" << month << "��" << day << "��" << endl;
}

class Cmydate :public CDate
{
public:
	Cmydate(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}

};
int main()
{
	Cmydate omydatal(2018, 6, 4);
	omydatal.display();
	return 0;
    
	return 0;
}

