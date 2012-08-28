#pragma once

#include "ofMain.h"
#include <iostream>

#include "TimeManager.h"
#include "CollisionManager.h"
#include "ParticleManager.h"

class testApp : public ofBaseApp{

	public:
		CollisionManager collisionManager;
		ParticleManager particleManager;
	
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        int rotationCounter;
		
};
