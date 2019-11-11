#include <ctime>
#include <string>

#ifndef DATETIME_H
#define DATETIME_H
class DateTime {
	struct tm* dt;
public:
	DateTime(int day, int month, int year);
	DateTime();
	DateTime(const DateTime &origin);
	std::string getToday(); // ����������� ������� ���� � ���� ������, � ��������� ��� ������ � �������� ������(�������� 07 november 2018, wednesday)
	std::string getYesterday(); // -����������� ���� ���������� ��� � ���� �����.
	std::string getTomorrow(); // -����������� ���� ����������� ��� � ���� ������
	std::string getFuture(unsigned int n); // -����������� ���� ����� N ���� � �������
	std::string getPast(unsigned int n); // - ����������� ���� ����� N ���� � �������
	int getDifference(DateTime& target); // - ��� ������� �������(� ����) ����� ����� ������
};
#endif