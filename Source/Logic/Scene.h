#ifndef SCENE_H
#define SCENE_H

#include <vector>
#include "Entity.h"

namespace Logic{

	class Scene
	{
	public:
		// Default Constructor
		Scene() = default;

		// Default Destructor
		~Scene() = default;

		// Init the scene 
		bool init();

		// Release the scene
		void release();

		// Add an entity to the scene
		bool addEntity(Logic::Entity &entity);

		// Remove an entity from the scene
		bool removeEntity();

		// Get entities
		static std::vector<Logic::Entity>* getEntities();

	private:
		static std::vector<Logic::Entity> *entities;

	};


}


#endif SCENE_H