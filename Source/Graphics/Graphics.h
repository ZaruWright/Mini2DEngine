#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "OGL.h"


namespace Graphics{

	class Graphics{
	public:
		// Default Graphics Contructor
		Graphics();

		// Default Graphics Destructor
		~Graphics();

		// Init the Graphics Engine
		bool init();

		// Release the Graphic Engine
		void release();

		// Draw all on the window created.
		bool draw();


	private:

		OGL *gl; // GL instance.
	};

}
#endif GRAPHICS_H

