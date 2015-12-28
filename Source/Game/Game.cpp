#include "Game.h"
#include <iostream>
#include "Graphics\Graphics.h"

namespace Game{

	Game::Game(){
		std::cout << "Game Constructor.\n";
	}

	Game::~Game(){
		std::cout << "Game Destructor.\n";
	}

	bool Game::init(){
		std::cout << "Init Game.\n";

		std::cout << "Init Graphics...\n";
		_graphics = new Graphics::Graphics();
		_graphics->init();

		return true;
	}

	bool Game::run(){
		std::cout << "Main loop.\n";

		while (!finish){
			finish = _graphics->draw();
		}

		return true;
	}

	void Game::release(){
		std::cout << "Release Game.\n";

		std::cout << "Release Graphics.\n";
		_graphics->release();
		delete _graphics;
		_graphics = nullptr;


	}
}