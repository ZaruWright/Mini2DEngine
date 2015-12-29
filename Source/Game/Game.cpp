#include "Game.h"
#include <iostream>
#include "Graphics\Graphics.h"

namespace Game{

	bool Game::init(){
		std::cout << "Init Game.\n";

		std::cout << "Init Graphics...\n";
		_graphics = new Graphics::Graphics();
		_graphics->init();

		
		Utils::Vector3<float> v3 (-1.5, 0.0f, -6.0f);
		Logic::Entity ent(v3);

		Utils::Vector3<float> v4(1.5, 0.0f, -6.0f);
		Logic::Entity ent2(v4);
		_scene = new Logic::Scene();
		_scene->init();
		_scene->addEntity(ent);
		_scene->addEntity(ent2);

		return true;
	}

	bool Game::run(){
		std::cout << "Main loop.\n";

		while (!finish){
			finish = _graphics->draw();
			//_scene->run();
		}

		return true;
	}

	void Game::release(){
		std::cout << "Release Game.\n";

		std::cout << "Release Graphics.\n";
		_graphics->release();
		delete[] _graphics;
		_graphics = nullptr;

		_scene->release();
		delete[] _scene;
		_scene = nullptr;


	}
}