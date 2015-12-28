#ifndef GAME_H
#define GAME_H

#include "Graphics\Graphics.h"

namespace Game{

	class Game{
	public:

		// Game Constructor
		Game();

		// Game Destructor
		~Game();

		// Init the main parameters of the Game, stuff like
		// graphics, physics, logic etc...
		bool init();

		// This is the main loop of the Game. In this loop
		// we update all the entities of the game.
		bool run();

		// Release the main parameters of the Game, stuff like
		// graphics, physics, logic etc...
		void release();

	private:

		bool finish = false; // Init the Game without finish.

		Graphics::Graphics *_graphics; // Graphic engine instance.
	};

}
#endif GAME_H

