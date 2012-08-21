//
//  particle.cpp
//  Planetarium
//
//  Created by Dylan Turney on 21/08/12.
//
//

#include "particle.h"


void particle::setup(float _x, float _y){
    
    pos.set(_x, _y);
    previousTime = ofGetElapsedTimeMillis();
    
}

void particle::update()
{
    pos += (vel.normalize() * speed);

}
