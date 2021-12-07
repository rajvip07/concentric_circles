#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Path
{
public:

	//member vars
	int n;
	int *x;
	int *y;

	//methods
	Path();
	Path(int n_in, int x_in[], int y_in[]);
	Path(int n_in, int xmin, int xmax, int ymin, int ymax);
	void print(string label);
	void setRandPath(int n_in, int xmin, int xmax, int ymin, int ymax);

};

