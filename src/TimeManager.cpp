//
//  TimeManager.cpp
//  Planetarium
//
//  Created by Taura J Greig on 28/08/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "TimeManager.h"

int TimeManager::timeMillisLast = 0;
int TimeManager::timeMillisSinceLast = 0;
float TimeManager::timeSecondsSinceLast = 0;

void TimeManager::initialize()
{
	timeMillisLast = ofGetElapsedTimeMillis();
	timeMillisSinceLast = ofGetElapsedTimeMillis() - timeMillisLast;
	timeSecondsSinceLast = (ofGetElapsedTimeMillis() - timeMillisLast) / 1000.f;
}

void TimeManager::update()
{
	timeMillisSinceLast = ofGetElapsedTimeMillis() - timeMillisLast;
	timeSecondsSinceLast = (ofGetElapsedTimeMillis() - timeMillisLast) / 1000.f;
	timeMillisLast = ofGetElapsedTimeMillis();
}

int TimeManager::getTimeMillis()
{
	return timeMillisSinceLast;	
}

float TimeManager::getTimeSeconds()
{
	return timeSecondsSinceLast;	
}
