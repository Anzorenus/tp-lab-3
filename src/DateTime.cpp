#include <iostream>
#include <ctime>
#include <string>
#include "DateTime.h"


std::string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
std::string weekday[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

DateTime::DateTime(int Day, int Month, int Year)
{
	time_t sec = time(NULL);
	date = *localtime(&sec);
	date.tm_mday = Day;
	date.tm_mon = Month - 1;
	date.tm_year = Year - 1900;
	mktime(&date);
};
DateTime::DateTime()
{
	time_t sec = time(NULL);
	date = *localtime(&sec);
};
DateTime::DateTime(const DateTime &other)
{
	this->date = other.date;
};

std::string printdate(tm &date2)
{
	std::string s = "";
	s += std::to_string(date2.tm_mday) + " " + months[date2.tm_mon] + " " + std::to_string(date2.tm_year + 1900) + ", " + weekday[date2.tm_wday];
	return s;
};

std::string DateTime::getToday()
{
	return printdate(date);
};

std::string DateTime::getFuture(unsigned int N)
{
	int day = date.tm_mday + N;
	int mon = date.tm_mon;
	int year = date.tm_year;
	while (day > daysInMonth[mon])
	{
		day -= daysInMonth[mon];
		mon++;
		if (mon == 12)
		{
			mon = 0;
			year++;
		}
	}
	time_t seconds = time(NULL);
	tm newdate = *localtime(&seconds);
	newdate.tm_mday = day;
	newdate.tm_mon = mon;
	newdate.tm_year = year;
	mktime(&newdate);
	return printdate(newdate);
}

std::string DateTime::getPast(unsigned int N)
{
	int day = date.tm_mday - N;
	int mon = date.tm_mon;
	int year = date.tm_year;
	while (day <= 0)
	{
		day += daysInMonth[mon - 1];
		mon--;
		if (mon == -1)
		{
			mon = 11;
			year--;
		}
	}
	time_t seconds = time(NULL);
	tm newdate = *localtime(&seconds);
	newdate.tm_mday = day;
	newdate.tm_mon = mon;
	newdate.tm_year = year;
	mktime(&newdate);
	return printdate(newdate);
}

std::string DateTime::getTomorrow()
{
	return getFuture(1);
}

std::string DateTime::getYesterday()
{
	return getPast(1);
}

unsigned int DateTime::getDifference(DateTime& newdate)
{
	return abs(mktime(&(this->date)) - mktime(&newdate.date)) / 86400;
}
