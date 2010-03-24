/*
 *  ofxSDL.h
 *  ofxSDL
 *
 *  ofxSDL overrides the windowing system of openFrameworks to use SDL rather than
 *  GLUT. There are a handful of benefits from using SDL including:
 *
 *  * Events from Joysticks and Controllers
 *  * Events from Mouse scroll wheel
 *  * Unicode Keyboard support (TODO)
 *
 *  This ofxSDL addOn was designed to be used with the v006 branch of openFrameworks
 *
 *  Created by Lee Byron on 1/29/10.
 *  Copyright 2010 Experimental Design Lab. All rights reserved.
 *
 */

#include <SDL/SDL.h>

#include "ofxSDLEvents.h"
#include "ofxSDLApp.h"
#include "ofxSDLAppWindow.h"
