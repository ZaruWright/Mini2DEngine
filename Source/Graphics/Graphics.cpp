#include "Graphics.h"
#include "OGL.h"



namespace Graphics{

	Graphics::Graphics(){

	}


	Graphics::~Graphics(){

	}

	bool Graphics::init(){
		
		gl = new OGL();
	
		// Create Our OpenGL Window
		return gl->CreateGLWindow("Hola Mundo", 640, 480, 16, false);
	}

	void Graphics::release(){
		delete gl;
		gl = nullptr;
	}

	bool Graphics::draw(){
		return gl->run();
	}

}

