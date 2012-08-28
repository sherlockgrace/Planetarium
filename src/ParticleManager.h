//
//  ParticleManager.h
//  Planetarium
//
//  Created by Dylan Turney on 21/08/12.
//
//

#ifndef Planetarium_ParticleManager_h
#define Planetarium_ParticleManager_h

#include "ofMain.h"
#include "particle.h"
#include "CollisionManager.h"
#include "math.h"

class ParticleManager
{
    
private:
	CollisionManager * collisionManager;
	vector<particle> particles;
	float angle; //In degrees
    float rotationMatrix[2][2];
	int * gridSize;
    
public:
	ParticleManager();
	void setup(int & gridSize, CollisionManager & collisionManager);
	void update();
	void draw();
	void addParticle(particle & theParticle);
	void handleReaction(particle & theParticle1, particle & theParticle2);
	vector<particle>* GetParticles();
private:
	void rotateAllParticles();
	void updateParGravity();
	bool checkisInSameCell(particle& theParticle);
    
    
    
};

#endif
