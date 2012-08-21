//
//  ParticleManager.h
//  Planetarium
//
//  Created by Dylan Turney on 21/08/12.
//
//

#ifndef Planetarium_ParticleManager_h
#define Planetarium_ParticleManager_h

#include "particle.h"

class ParticleManager
{
    private:
      vector<particle> particles;
      
public:
    void setup();
    void update();
    void draw();
    
private:
    void checkCollision();
    void updateParGravity();
    
    
    
};

#endif
