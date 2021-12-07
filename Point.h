#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

class Point
{
public:
	int x;
	int y;

	Point();
	Point(int x_in, int y_in);
	void set(int x_in, int y_in);
	void print(string label);
	Point getMidpoint(Point other);
};

