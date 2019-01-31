#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup() {
	image.load("TwitterLogo.jpg");
	image2.load("search.png");
	
	font.load("Montserrat-Bold.otf", 12);

	
	/*gui.setup();
	gui.add(button.setup("button"));*/
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	
	ofSetColor(255, 255, 255);
	ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());

	image.draw(40, 10, 100, 100);
	image2.draw(10, 110, 30, 30);

	ofSetColor(29, 161, 242);
	ofDrawRectangle(0, 150, ofGetWidth(), ofGetHeight());

	font.drawString("common searches", 270, 15);

	ofDrawRectRounded(175, 30, 110, 30, 10);
	ofDrawRectRounded(300, 30, 110, 30, 10);
	ofDrawRectRounded(425, 30, 110, 30, 10);
	ofDrawRectRounded(175, 70, 110, 30, 10);
	ofDrawRectRounded(300, 70, 110, 30, 10);
	ofDrawRectRounded(425, 70, 110, 30, 10);
	ofDrawRectRounded(175, 110, 110, 30, 10);
	ofDrawRectRounded(300, 110, 110, 30, 10);
	ofDrawRectRounded(425, 110, 110, 30, 10);

	ofDrawRectRounded(50, 110, 110, 30, 10);
    ofSetColor(255, 255, 255);
	ofDrawRectRounded(55, 115, 100, 20, 7);
	ofDrawRectRounded(10, 160, ofGetWidth()-20, ofGetHeight()-20, 10);

	font.drawString("All", 220, 50);
	font.drawString("Uber", 335, 50);
	font.drawString("Dreamworks", 425, 50);
	font.drawString("Paris", 205, 90);
	font.drawString("politics", 320, 90);
	font.drawString("money", 450, 90);
	font.drawString("dog", 210, 130);
	font.drawString("Twitter", 320, 130);
	font.drawString("cat", 465, 130);
	
     //gui.draw();

}