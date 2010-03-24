/*
 *  ofxSDLAppWindow.h
 *  ofxSDL
 *
 *  Created by Lee Byron on 1/29/10.
 *  Copyright 2010 Experimental Design Lab. All rights reserved.
 *
 */

#pragma once
#include <SDL/SDL.h>
#include "ofAppBaseWindow.h"

class ofPoint;
class ofBaseApp;

void PrintKeyInfo( SDL_KeyboardEvent *key );
void PrintModifiers( SDLMod mod );

class ofxSDLAppWindow : public ofAppBaseWindow {
  
public:
  
	ofxSDLAppWindow();
	~ofxSDLAppWindow(){}
  
  // INITIALIZATION AND RUNTIME
	void setupOpenGL(int w, int h, int screenMode);
	void initializeWindow();
	void runAppViaInfiniteLoop(ofBaseApp* appPtr);
  static void exitApp();

  // CURSORS
	void hideCursor();
	void showCursor();

  // DISPLAY SIZING
	ofPoint		getWindowSize();
	ofPoint		getScreenSize(); 
  /*ofPoint		getWindowPosition();  // TODO these
	int       getWindowMode();
  void      setWindowTitle(string title);
  void      setWindowPosition(int x, int y);
  void      setWindowShape(int w, int h);
  void      setFullscreen(bool fullScreen);
  void      toggleFullscreen();
  */
  
  // FRAME RATE
	int			getFrameNum();
	float		getFrameRate();
	double	getLastFrameTime();
	void		setFrameRate(float targetRate);
  
  // SETUP SCREEN
	void		enableSetupScreen();
	void		disableSetupScreen();
  
  // JOYSTICK INFORMATION
  int     getControllerCount();
  string  getControllerName(int num);
  int     getControllerNumButtons(int num);
  int     getControllerNumAxes(int num);
  
  
protected:
  
  // EVENT HANDLERS
  void    joyDownHandler(SDL_Event* evt);
  void    joyUpHandler(SDL_Event* evt);
  void    joyMovedHandler(SDL_Event* evt);
  void    mouseDownHandler(SDL_Event* evt);
  void    mouseUpHandler(SDL_Event* evt);
  void    keyDownHandler(SDL_Event* evt);
  void    keyUpHandler(SDL_Event* evt);
};

