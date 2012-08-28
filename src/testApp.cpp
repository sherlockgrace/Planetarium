#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){

	collisionManager.setup(10, particleManager);
	particleManager.setup(collisionManager.gridSize, collisionManager);
	
	TimeManager::initialize();
	
    ofEnableAlphaBlending();
    
    rotationCounter = 0;
    
    ofSetColor(255);
    
    ofSetFrameRate(60);

}

//--------------------------------------------------------------
void testApp::update(){

	TimeManager::update();
	collisionManager.update();
	particleManager.update();
	
	
	cout << TimeManager::getTimeSeconds() << endl;
	cout << ofGetElapsedTimeMillis() << endl;	
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(0, 0, 0 );
    ofRect(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	
	particleManager.draw();
    
//    stars.draw(0,0, ofGetWindowWidth(), ofGetWindowHeight());
    
//    ofPushMatrix();
//    ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
//    ofRotateZ(rotationCounter);
//    planet.draw(-planet.width/2,-planet.height/2);
//    ofPopMatrix();
    
    rotationCounter++;

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}