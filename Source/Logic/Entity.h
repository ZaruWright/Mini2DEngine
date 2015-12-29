#ifndef LOGIC_ENTITY_H
#define LOGIC_ENTITY_H

#include "Utils\Vector3.h"
#include "Graphics\Entity.h"


namespace Logic {

	class Entity{
	public:
		// Default Constructor
		Entity() = default;

		// Default Destructor
		~Entity() = default;

		// Init the Entity
		bool init();

		// Release the Entity
		void release();

		// Constructor with position
		Entity(const Utils::Vector3<float> &pos);

		// Draw the entity
		void draw();

	protected:
		Utils::Vector3<float> *position = nullptr; // Entity position
		Graphics::Entity *graphicEntity = nullptr; // Graphic reference
	};


}

#endif LOGIC_ENTITY_H