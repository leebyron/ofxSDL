/*
 *  ofxSDLApp.h
 *  ofxSDL
 *
 *  Created by Lee Byron on 1/29/10.
 *  Copyright 2010 Experimental Design Lab. All rights reserved.
 *
 */

#pragma once
#include "ofMain.h"

class ofxSDLApp : public ofBaseApp {	
public:

  virtual void joyButtonPressed(int device, int button) {};
  virtual void joyButtonReleased(int device, int button) {};
  virtual void joyAxisMoved(int device, int axis, float position) {};
  
};
