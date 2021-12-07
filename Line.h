#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

class Line
{
public:

	//member vars
	int x1;
	int y1;
	int x2;
	int y2;

	//members functions 
	Line();  //no-arg constructor
	Line(int x1_in, int y1_in, int x2_in, int y2_in);  //4-arg constructor
	float getDist(int px, int py, int qx, int qy);
	void print(string label);
	void setLine(int x1_in, int y1_in, int x2_in, int y2_in);
	//Point getMidPoint(Line other);
	float getSlope();



};


