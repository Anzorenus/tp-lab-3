#include <iostream>
#include "DateTime.h"

int main() 
{
	int day = 25, mon = 1, year = 2007;
	DateTime date;
	DateTime date2(day, mon, year);
	std::cout << date.getDifference(date2);
	std::cout << date.getFuture(6);
	std::cout << date.getPast(18);


	return 0;
}