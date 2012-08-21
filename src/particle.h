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


class particle : public ofPoint{
    
private:
    ofVec2f pos;
    ofVec2f vel;
    
    int previousTime;
    float weight;
    float speed;
    
public:
    void setup(float x, float y);
    void update();
    void draw();
    
    void lookAtOtherPartical(particle & part);
    
    void updateTime();
    
    

    
};




#endif
