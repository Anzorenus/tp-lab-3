#include "DateTime.h"
#include <iostream>

using namespace std;

int main() {
	DateTime date1{ 5,2,2001 };
	DateTime date2{};

	cout << "������� " << date1.getToday() << endl;
	cout << "�������: " << date2.getToday() << endl;
	cout << "�������" << date1.getDifference(date2) << endl;
	cout << "������:" << date1.getTomorrow() << endl;
	cout << "���������� 25:" << date2.getPast(25) << endl;
	cout << endl;
	
}