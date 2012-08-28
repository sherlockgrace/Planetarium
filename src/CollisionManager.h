//
//  CollisionManager.h
//  Planetarium
//
//  Created by Taura J Greig on 24/08/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Planetarium_CollisionManager_h
#define Planetarium_CollisionManager_h

#include "ofMain.h"
#include "particle.h"
class ParticleManager;

class CollisionManager
{
private:
	ParticleManager * particleManager;
    
	void checkAllParticles();
	
	void particleToParticle(particle & particle1, particle & particle2);
public:
	int gridSize;
	
	CollisionManager();
	
	void update();
	void setup(int gridSize, ParticleManager & particleManager);
	int CallKey(int x, int y);


};

#endif
