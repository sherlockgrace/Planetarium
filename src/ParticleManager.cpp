//
//  ParticleManager.cpp
//  Planetarium
//
//  Created by Taura J Greig on 26/08/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "ParticleManager.h"

ParticleManager::ParticleManager()
{
}

void ParticleManager::setup(int & gridSize, CollisionManager & collisionManager)
{
	ParticleManager::collisionManager = &collisionManager;
	ParticleManager::gridSize = &gridSize;
	
	angle = 1/60;
	float radAngle = ofDegToRad(angle); 
	
	ofVec2f tempVec(sin(radAngle), cos(radAngle));
	
	rotationMatrix[0][0] = tempVec.x;
	rotationMatrix[0][1] = tempVec.y;
	
	tempVec.x = -tempVec.y;
	tempVec.y = tempVec.x;
	
	rotationMatrix[1][0] = tempVec.x;
	rotationMatrix[1][1] = tempVec.y;
	
	for (int i = 0; i < 40; i++)
	{
		particle* parTemp = new particle();
		parTemp->setup(ofRandom(5, ofGetWindowWidth() - 5),
					   ofRandom(5, ofGetWindowHeight() - 5),
					   TYPE_BASE);
		particles.push_back(*parTemp);
	}
	
}

vector<particle> * ParticleManager::GetParticles()
{
	return &particles;
}

void ParticleManager::addParticle(particle & theParticle)
{
	particles.push_back(theParticle);
}

void ParticleManager::update()
{
	for(int i = 0; i > particles.size(); i++)
	{
		particles[i].update();
	}
}

void ParticleManager::draw()
{
	for (int i = 0; i > particles.size(); i++)
	{
		particles[i].draw();
	}
}

void ParticleManager::handleReaction(particle &theParticle1, particle &theParticle2)
{
	
}


