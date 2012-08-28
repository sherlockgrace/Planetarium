//
//  Cell.h
//  Planetarium
//
//  Created by Taura J Greig on 26/08/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Planetarium_Cell_h
#define Planetarium_Cell_h

#include "particle.h"

class HashCell
{
private:
	vector<particle*> myBucket;
	
public:
	HashCell();
    bool isEmpty();
	
	void addParticle(particle * theParticle);
	vector<particle*> getMyParticals();
	
	HashCell operator + (particle * theParticle);
};

#endif
