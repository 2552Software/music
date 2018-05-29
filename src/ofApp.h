#pragma once
#include "ofMain.h"
#include "ofxGui.h"
#include "ofxPS3EyeGrabber.h"

// key use this http://zadig.akeo.ie/

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

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

        void keyPressed(int key);
        std::vector<std::shared_ptr<ofVideoGrabber>> grabbers;
        int totalHeight = 0;
        int camWidth = 640;
        int camHeight = 480;
        int camFrameRate = 30;
};
