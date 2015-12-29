#include "Graphics.h"
#include "OGL.h"
#include "Logic\Scene.h"


namespace Graphics{

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
		bool updateWindow = gl->updateWindow();
		if (updateWindow){

			// Clear the window
			gl->windowClear();

			// Draw our entities
			auto iterator = Logic::Scene::getEntities()->begin();
			while (iterator != Logic::Scene::getEntities()->end()){
				iterator->draw();
				iterator++;
			}

			// End Drawing
			gl->endDrawing();
		}
		else{
			gl->KillGLWindow();
		}
		return !updateWindow;
	}

}

