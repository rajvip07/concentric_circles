#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

class Circle1
{
public:

	float cx;
	float cy;
	float cr;

	Circle1();
	Circle1(float cx_in, float cy_in, float cr_in);
	void print(string label);
	void set(float cx_in, float cy_in, float cr_in);
	float getArea();
	bool intersects(Circle1 other);
	bool inside(int cx, int cy);
	
};

