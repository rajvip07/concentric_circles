#include "Line.h"
#include <iostream>

using namespace std;
Line::Line()  //no-arg constructor
{
	x1 = 1;
	y1 = 8;
	x2 = 5;
	y2 = 0;
}

Line::Line(int x1_in, int y1_in, int x2_in, int y2_in)  //4-arg constructor
{
	x1 = x1_in;
	y1 = y1_in;
	x2 = x2_in;
	y2 = y2_in;
}

float Line::getDist(int px, int py, int qx, int qy)
{
	float sum, dist;
	sum = (px - qx) *(px - qx) + (py - qy)*(py - qy);
	dist = sqrt(sum);
	return (dist);
}

void Line::setLine(int x1_in, int y1_in, int x2_in, int y2_in)
{
	x1 = x1_in;
	y1 = y1_in;
	x2 = x2_in;
	y2 = y2_in;
}

/*Point Line::getMidPoint(Line other)
{
	Point midPoint;

}*/

float Line::getSlope()
{
	float m;
	m = (float)(y2 - y1) / (x2 - x1);
	return (m);
}

void Line::print(string label)
{
	cout << "\n\nLine: " << label;
	cout << "\n    x1: " << x1;
	cout << "\n    y1: " << y1;
	cout << "\n    x2: " << x2;
	cout << "\n    y2: " << y2;
}
