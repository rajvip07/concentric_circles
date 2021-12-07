#include "ofApp.h"


//--------------------------------------------------------------


void ofApp::drawCircle1(Circle1 circle, Fill fill, Stroke stroke)
{
	ofNoFill();
	ofSetColor(stroke.red, stroke.green, stroke.blue);
	ofSetLineWidth(stroke.width);
	ofDrawCircle(circle.cx, circle.cy, circle.cr);
}

int cr[100];
void ofApp::setup()
{
	ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update()
{

}

//--------------------------------------------------------------
void ofApp::draw()
{
	ofNoFill();

	int r[100];

	for (int j = 0; j < 10; j++)
	{
		r[j] = 10 * (j + 1);
	}

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			ofSetColor(rand() % 256, rand() % 256, rand() % 256);
			ofDrawCircle(xcoord[i], ycoord[i], r[j]);
		}
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
	xcoord[count] = x;
	ycoord[count] = y;
	count = count + 1;
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
