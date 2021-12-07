#pragma once

#include "ofMain.h"
#include "../Rectangle1.h"
#include "../Fill.h"
#include "../Stroke.h"
#include "../Path.h"
#include "../Line.h"
#include "../Point.h"
#include "../Circle1.h"


class ofApp : public ofBaseApp{

	
	public:

	//member vars
	Rectangle1 rect[10];
	Fill fill[100];
	Line line[20];
	Point points[20];
	Circle1 circle[100];

	int xcoord[2000];
	int ycoord[2000];

	Stroke stroke;
	int count = 0;

	//Circle1 bigCircle;

	void drawCircle1(Circle1 circle, Fill fill, Stroke stroke);
	//void drawRectangle1(Rectangle1 rectangle, Fill fill, Stroke stroke);
	//void drawLine(Line line, Stroke stroke);


		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
