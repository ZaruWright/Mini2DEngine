#include "Scene.h"

namespace Logic {

	std::vector<Logic::Entity> *Scene::entities = nullptr;

	bool Scene::init(){
		entities = new std::vector<Logic::Entity>();

		return true;
	}

	void Scene::release(){
		auto iterator = entities->begin();
		while (iterator != entities->end()){
			iterator->release();
			iterator++;
		}

		delete entities;
		entities = nullptr;
	}

	bool Scene::addEntity(Logic::Entity &entity){
		entity.init();
		entities->push_back(entity);
		return true;
		// Pruebas
	}

	std::vector<Logic::Entity>* Scene::getEntities(){
		return entities;
	}
}

