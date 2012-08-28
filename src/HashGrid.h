//
//  HashGrid.h
//  Planetarium
//
//  Created by Taura J Greig on 24/08/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Planetarium_HashGrid_h
#define Planetarium_HashGrid_h

#include <iostream>
#include <map>
#include "ofMain.h"
#include "particle.h"

using namespace std;

struct key
{
	int x;
	int y;
};

class HashGrid
{
private:
    int & gridSize;
    map<key, Cell> theMap;
	
public:
	HashGrid();
	
	void setup(int & gridSize);
	
    HashGrid operator + (particle * a);
    
    
};

#endif
