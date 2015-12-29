#include "Entity.h"
#include "Graphics\OGL.h"
namespace Graphics{

	Entity::Entity(const Utils::Vector3<float> &pos){
		position = new Utils::Vector3<float>(pos);
	}

	bool Entity::init(){
		if (!position){
			position = new Utils::Vector3<float>();
		}

		return true;
	}

	void Entity::release(){
		delete position;
		position = nullptr;
	}

	bool Entity::draw(){
		return OGL::getInstance()->drawEntity(position->getXValue(), position->getYValue(), position->getZValue());
	}

}

