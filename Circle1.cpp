#include "Circle1.h"
#include <iostream>
#define PI 3.14

using namespace std;

/*  CIRCLE 3-ARG CONSTRUCTOR  */
Circle1::Circle1(float cx_in, float cy_in, float cr_in)
{
	cx = cx_in;
	cy = cy_in;
	cr = cr_in;
}

/*  CIRCLE NO-ARG CONSTRUCTOR  */
Circle1::Circle1()//user doesnt tell us any info
{
	cx = 0;   // Set to unit circle!
	cy = 0;
	cr = 1;
}

/*  PRINT  */
void Circle1::print(string label)
{
	printf("\nCircle Object: %s----------", label.c_str());
	printf("\n    x: %f", cx);
	printf("\n    y: %f", cy);
	printf("\n    r: %f", cr);
	/*
	 cout << "\n\nCircle: " << label << "------------";
	 cout << "\n        x: " << x;
	 cout << "\n        y: " << y;
	 cout << "\n        r: " << r;
	*/
}

/*  SET  */
void Circle1::set(float cx_in, float cy_in, float cr_in)
{
	cx = cx_in; //this can be called anytime, 3 arg one only called in declaration
	cy = cy_in;
	cr = cr_in;
}

/*  AREA  */
float Circle1::getArea()
{
	return(PI * cr * cr);
}

/*  INTERSECTS  */
bool Circle1::intersects(Circle1 other)
{
	float sum, dist;
	bool result;


	sum = (cx - other.cx)*(cx - other.cx) + (cy - other.cy)*(cy - other.cy);
	dist = sqrt(sum);


	if (dist < cr + other.cr) result = true;
	else result = false;

	return(result);
}

bool Circle1::inside(int cx, int cy)
{
	bool inside;
	if ((cx < (cx + cr)) && (cx >(cx - cr)))
	{
		if ((cy < (cy + cr)) && (cy > (cy - cr)))
		{
			inside = 1;
		}
	}
	return(inside);
}
