#ifndef OGL_H
#define OGL_H

#include <windows.h>		// Header File For Windows
#include <gl\gl.h>			// Header File For The OpenGL32 Library
#include <gl\glu.h>			// Header File For The GLu32 Library
#include "GLAux.h"		    // Header File For The Glaux Library

namespace Graphics{

	// Handle For This Window
	static LRESULT	CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

	class OGL {
	public:
		bool	keys[256];			// Array Used For The Keyboard Routine
		bool	active = true;		// Window Active Flag Set To TRUE By Default

		// Default OpenGl Constructor
		OGL();

		// Default OpenGl Destructor
		~OGL();

		// Get Gl instance.
		static OGL *getInstance();

		// Resize and initialize the Gl window
		GLvoid ReSizeGLScene(GLsizei width, GLsizei height);

		/*	This Code Creates Our OpenGL Window.  Parameters Are:					*
		*	title			- Title To Appear At The Top Of The Window				*
		*	width			- Width Of The GL Window Or Fullscreen Mode				*
		*	height			- Height Of The GL Window Or Fullscreen Mode				*
		*	bits			- Number Of Bits To Use For Color (8/16/24/32)			*
		*	fullscreenflag	- Use Fullscreen Mode (TRUE) Or Windowed Mode (FALSE)	*/
		BOOL CreateGLWindow(char* title, int width, int height, int bits, bool fullscreenflag);

		// Manage the events from the window
		BOOL updateWindow();

		// Properly Kill The Window
		GLvoid KillGLWindow(GLvoid);

		// Clear the window
		GLvoid windowClear();

		// Draw an entity 
		BOOL drawEntity(GLfloat xPos, GLfloat yPos, GLfloat zPos);

		// End drawing the scene
		GLvoid endDrawing();

	private:

		// All setup for OpenGL
		int InitGL(GLvoid);

		HDC			hDC = NULL;		// Private GDI Device Context
		HGLRC		hRC = NULL;		// Permanent Rendering Context
		HWND		hWnd = NULL;	// Holds Our Window Handle
		HINSTANCE	hInstance;		// Holds The Instance Of The Application

		bool	fullscreen = FALSE;		// Fullscreen Flag Set To Fullscreen Mode By Default
		static OGL *_instance;
		
	};

}

#endif OGL_H

