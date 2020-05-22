#include "task1.h"
#include "Circle.h"

double calcDelta()
{
	Circle first(6378100.0);
	double radius1 = first.getRadius();
	double ference1 = first.getFerence();
	first.setFerence(ference1 + 1);
	double radius2 = first.getRadius();

	return radius2 - radius1;
}

double calcCost()
{
	int RadiusWithDor = 4;
	int RdiusWat = 3;

	Circle WithDor(4);
	Circle Wat(3);

	double Dor = WithDor.getArea() - Wat.getArea();
	Dor *= 1000;
	double Ograd = WithDor.getFerence();
	Ograd *= 2000;
	double Sum = Dor + Ograd;

	return Sum;
}

