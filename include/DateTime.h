
#ifndef _DATETIME_H
#define _DATETIME_H_
#include <iostream>

class DateTime
{
private:
	int day;
	int mon;
	int year;

public:
	DateTime(int  _day, int _mon,int _year);//����������� � ����� ��������� �����������(����, �����, ���);
	DateTime();//����������� ��� ����������(������ ���������� ������� ����);
	DateTime(const DateTime& a);//����������� �����������(������ ����� ������� �������);
	std::string getToday();// - ����������� ������� ���� � ���� ������, � ��������� ��� ������ � �������� ������(�������� 07 november 2018, wedensday);
	std::string getYesterday();// - ����������� ���� ���������� ��� � ���� ������.
	std::string getTomorrow(); //- ����������� ���� ����������� ��� � ���� ������.
	std::string getFuture(unsigned int N); //- ����������� ���� ����� N ���� � �������;
	std::string getPast(unsigned int N); //- ����������� ���� ����� N ���� � �������;
	int getDifference(DateTime&);// - ��� ������� �������(� ����) ����� ����� ������
};
#endif
