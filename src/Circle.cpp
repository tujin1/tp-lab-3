
#include <cmath>
#include "Circle.h"
double pi = 3.14;
Circle::Circle(double r)
{
	radius = r;
	ference = 2 * pi*r;
	area = pi * r*r;
}

void  Circle::setRadius(double r)
{
	radius = r;
	ference = 2 * pi*r;
	area = pi * r*r;

}

void  Circle::setFerence(double f)
{
	ference = f;
	radius = f / (2 * pi);
	area = f*f / (4 * pi);
}

void  Circle::setArea(double a)
{
	area = a;
	radius = sqrt(a / pi);
	ference = 2 * pi*radius;
}

double Circle::getRadius()
{
	return radius;
}

double  Circle::getFerence()
{
	return ference;
}

double  Circle::getArea()
{
	return area;
}