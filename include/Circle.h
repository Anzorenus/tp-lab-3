#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

class Circle
{
private:
	double radius, ference, area;
public:
	Circle(double radius);

	void setRadius(double radius);

	void setFerence(double ference);

	void setArea(double area);

	double getRadius();

	double getFerence();

	double getArea();


};