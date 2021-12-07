#include "Rectangle1.h"

Rectangle1::Rectangle1()
{
	x = 0;
	y = 0;
	width = 100;
	height = 100;
}
Rectangle1::Rectangle1(int x_in, int y_in, int width_in, int height_in)
{
	x = x_in;
	y = y_in;
	width = width_in;
	height = height_in;

}

void Rectangle1::print(string label)
{
	cout << "\n\nRectangle Object: " << label;
	cout << "\n                 x: " << x;
	cout << "\n                 y: " << y;
	cout << "\n             width: " << width;
	cout << "\n            height: " << height;
}
void Rectangle1::set(int x_in, int y_in, int width_in, int height_in)
{
	x = x_in;
	y = y_in;
	width = width_in;
	height = height_in;
}

int Rectangle1::getArea()
{
	return(width*height);
}

bool Rectangle1::intersects(Rectangle1 other)
{
	bool result = false;
	if ((x <= other.x) && (x + width >= other.x))
	{
		if ((y <= other.y) && (y + height >= other.y))
		{
			result = true;
		}
	}
	return (result);
}
