/*
 *  ofxSDLJoyEventArgs.h
 *  ofxSDL
 *
 *  Created by Lee Byron on 1/30/10.
 *  Copyright 2010 Experimental Design Lab. All rights reserved.
 *
 */

#pragma once
#include "ofEvents.h"

class ofxSDLJoyButtonEventArgs : public ofEventArgs {
public:
  int   device;
  int   button;
};

class ofxSDLJoyAxisEventArgs : public ofEventArgs {
public:
  int   device;
  int   axis;
  float position;
};

class ofxSDLCoreEvents {
public:
  ofEvent<ofxSDLJoyButtonEventArgs>   joyButtonPressed;
  ofEvent<ofxSDLJoyButtonEventArgs>   joyButtonReleased;
  ofEvent<ofxSDLJoyAxisEventArgs>     joyAxisMoved;
};

extern ofxSDLCoreEvents ofxSDLEvents;
