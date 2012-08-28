//
//  particle.cpp
//  Planetarium
//
//  Created by Dylan Turney on 21/08/12.
//
//

#include "particle.h"
#include "HashCell.h"

void particle::setup(float _x, float _y, PAR_TYPE myType){
    
	particle::myType = myType;
	radius = 2;
	speed = ofRandom(2, 4);
    pos.set(_x, _y);
	vel.set(ofRandom(-1, +1));
}

void particle::update()
{
    pos += (vel.normalize() * speed) * TimeManager::getTimeSeconds();
}

void particle::draw()
{
	ofSetColor(255, 255, 255);
	ofCircle(pos.x, pos.y, radius);
	cout << "I'm being drawn" << endl;
}

float particle::getX()
{
	return pos.x;
}

float particle::getY()
{
	return pos.y;
}
