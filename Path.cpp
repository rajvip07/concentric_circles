#include "Path.h"
#include <iostream>

using namespace std;

Path::Path()
{
	n = 0;
	x = nullptr;
	y = nullptr;
}
Path::Path(int n_in, int x_in[], int y_in[])
{
	n = n_in;

	//allocate space to x and y since they are pointer
	x = new int[n];
	y = new int[n];

	for (int i = 0; i < n; i++)
	{
		x[i] = x_in[i];
		y[i] = y_in[i];
	}
}
Path::Path(int n_in, int xmin, int xmax, int ymin, int ymax)
{
	n = n_in;

	x = new int[n];
	y = new int[n];

	for (int i = 0; i < n; i++)
	{
		x[i] = xmin + rand() % (xmax - xmin + 1);
		y[i] = ymin + rand() % (ymax - ymin + 1);
	}
}
void Path::print(string label)
{
	cout << "\n\nPath Object:  " << label;
	cout << "\n            n:  " << n;

	cout << "\n            x:  ";
	for (int i = 0; i < n; i++)
	{
		cout << x[i] << " ";
	}

	cout << "\n            y:  ";
	for (int i = 0; i < n; i++)
	{
		cout << y[i] << " ";
	}
}
void Path::setRandPath(int n_in, int xmin, int xmax, int ymin, int ymax)
{
	n = n_in;

	x = new int[n];
	y = new int[n];

	for (int i = 0; i < n; i++)
	{
		x[i] = xmin + rand() % (xmax - xmin + 1);
		y[i] = ymin + rand() % (ymax - ymin + 1);
	}
}
