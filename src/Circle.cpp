#include "Circle.h"

Circle::Circle(double radius)
{
	this->radius = radius;
	ference = radius * 2 * M_PI;
	area = radius * radius * M_PI;
};

void Circle::setRadius(double radius)
{
	this->radius = radius;
	ference = radius * 2 * M_PI;
	area = radius * radius * M_PI;
};

void Circle::setFerence(double ference)
{
	this->ference = ference;
	radius = ference / (2 * M_PI);
	area = radius * radius * M_PI;
};

void Circle::setArea(double area)
{
	this->area = area;
	radius = sqrt(area / M_PI);
	ference = radius * 2 * M_PI;
};

double Circle::getRadius()
{
	return radius;
};

double Circle::getFerence()
{
	return ference;
};

double Circle::getArea()
{
	return area;
};