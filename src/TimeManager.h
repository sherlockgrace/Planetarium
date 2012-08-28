//
//  TimeManager.h
//  Planetarium
//
//  Created by Taura J Greig on 27/08/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Planetarium_TimeManager_h
#define Planetarium_TimeManager_h

#include "ofMain.h"
#include <iostream>

class TimeManager
{
private:
	static int timeMillisLast;
	
	static int timeMillisSinceLast;
	static float timeSecondsSinceLast;
	
public:
	static void initialize();
	static void update();
	
	static int getTimeMillis();
	static float getTimeSeconds();
	
	
};

#endif
