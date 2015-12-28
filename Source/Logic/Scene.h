#ifndef SCENE_H
#define SCENE_H

#include <vector>
#include "Entity.h"

namespace Logic{

	class Scene
	{
	public:
		Scene();
		~Scene();

		bool init();

		bool release();

		bool addEntity();

		bool removeEntity();

	private:
		std::vector<Logic::Entity> entities;
	};


}


#endif SCENE_H