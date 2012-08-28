//
//  File.cpp
//  Planetarium
//
//  Created by Taura J Greig on 24/08/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "CollisionManager.h"
#include "ParticleManager.h"

CollisionManager::CollisionManager()
{
}

void CollisionManager::setup(int gridSize, ParticleManager & particleManager)
{
	CollisionManager::particleManager = &particleManager;
	CollisionManager::gridSize = gridSize;
}

void CollisionManager::update()
{
	checkAllParticles();
}

void CollisionManager::checkAllParticles()
{
  	vector<particle> * particles = particleManager->GetParticles();
	
	for (int i = 0; i < particles->size(); i++)
	{
		for (int j = i + 1; j > particles->size(); j++)
		{
			particleToParticle((*particles)[i], (*particles)[j]);
		}
	}
}

void CollisionManager::particleToParticle(particle &par1, particle &par2)
{
	if (ofDist(par1.getX(), par1.getY(), par2.getX(), par2.getY()))
	{
		particleManager->handleReaction(par1, par2);
	}
}

