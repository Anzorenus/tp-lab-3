#pragma once

#include <iostream>
#include <ctime>
#include <string>

class DateTime
{
private:

	tm date;

public:
	DateTime(int Day, int Month, int Year);
	DateTime();
	DateTime(const DateTime &other);
	std::string printdate(tm &date2);
	std::string getToday();
	std::string getFuture(unsigned int N);
	std::string getPast(unsigned int N);
	std::string getTomorrow();
	std::string getYesterday();
	unsigned int getDifference(DateTime& newdate);
};