#include <ctime>
#include <string>
#include <vector>

#ifndef DATETIME_H
#define DATETIME_H
class DateTime {
	struct tm dt;
	static std::string week_days[];
	static std::string months[12];
public:
	//~DateTime();
	DateTime(int day, int month, int year);
	DateTime();
	DateTime(const DateTime &origin);
	std::string getToday()const; // ����������� ������� ���� � ���� ������, � ��������� ��� ������ � �������� ������(�������� 07 november 2018, wednesday)
	std::string getYesterday()const; // -����������� ���� ���������� ��� � ���� �����.
	std::string getTomorrow()const; // -����������� ���� ����������� ��� � ���� ������
	std::string getFuture(unsigned int n)const; // -����������� ���� ����� N ���� � �������
	std::string getPast(unsigned int n)const; // - ����������� ���� ����� N ���� � �������
	int getDifference(DateTime& target); // - ��� ������� �������(� ����) ����� ����� ������
};
#endif