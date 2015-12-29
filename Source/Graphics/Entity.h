#ifndef GRAPHIC_ENTITY_H
#define GRAPHIC_ENTITY_H

#include "Utils\Vector3.h"
#include "Graphics.h"

namespace Graphics{

	class Entity
	{
	public:
		// Default constructor
		Entity() = default;

		// Default Destructor
		~Entity() = default;

		// Create a Graphic entity with position
		Entity(const Utils::Vector3<float> &pos);

		// Init the Graphic Entity
		bool init();

		// Release the Graphic Entity
		void release();

		// Draw the Entity
		bool draw();

	private:
		Utils::Vector3<float> *position = nullptr;
	};

}



#endif GRAPHIC_ENTITY_H