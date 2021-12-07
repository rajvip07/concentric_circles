#include "Point.h"
#include <iostream>

using namespace std;

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int x_in, int y_in)
{
	x = x_in;
	y = y_in;
}

void Point::set(int x_in, int y_in)
{
	x = x_in;
	y = y_in;
}

void Point::print(string label)
{
	cout << "\n\nPoint: " << label;
	cout << "\n  x: " << x;
	cout << "\n  y: " << y;
}

Point Point::getMidpoint(Point other) //this return a point object
{
	Point midPoint;
	midPoint.x = (x + other.x) / 2;
	midPoint.y = (y + other.y) / 2;

	return (midPoint);
}