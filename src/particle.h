//
//  particle.h
//  Planetarium
//
//  Created by Dylan Turney on 21/08/12.
//
//

#ifndef Planetarium_particle_h
#define Planetarium_particle_h

#include "ofMain.h"
#include "TimeManager.h"

class HashCell;

enum PAR_TYPE {TYPE_BASE, 
               TYPE_SEED, 
               TYPE_SOIL, 
               TYPE_WATER, 
               TYPE_OXEYGEN,
               TYPE_CARBON,
               TYPE_ROCK};

class particle{
    
private:
    ofVec2f pos;
    ofVec2f vel;
    
    float weight;
    float speed;
    float radius;
    int gridKey[2]; // this will be using with the hashGrid to see if the 
	HashCell * myCell;
    
public:
    PAR_TYPE myType;
    
    void setup(float _x, float _y, PAR_TYPE myType);
    void update();
    void draw();
    
    void lookAtOtherPartical(particle & part);
    void updateTime();
    
    float getX();
    float getY();
    
};




#endif
