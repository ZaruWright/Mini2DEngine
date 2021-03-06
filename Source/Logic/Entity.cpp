#include "Entity.h"

namespace Logic {

	Entity::Entity(const Utils::Vector3<float> &pos){
		position = new Utils::Vector3<float>(pos);
		graphicEntity = new Graphics::Entity(pos);
	}

	bool Entity::init(){
		if (!position){
			position = new Utils::Vector3<float>();
			graphicEntity = new Graphics::Entity();
		}

		graphicEntity->init();

		return true;
	}

	void Entity::release(){

		delete position;
		position = nullptr;

		graphicEntity->release();
		delete[] graphicEntity;
		graphicEntity = nullptr;
	}

	void Entity::draw(){
		graphicEntity->draw();
	}

}


