#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

class Rectangle1
{
public:
	//member vars
	int x;
	int y;
	int width;
	int height;

	//prototypes of our methods 
	Rectangle1();
	Rectangle1(int x_in, int y_in, int width_in, int height_in);

	void print(string label);
	void set(int x_in, int y_in, int width_in, int height_in);

	int getArea();

	bool intersects(Rectangle1 other);
};
