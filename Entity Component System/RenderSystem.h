#pragma once
#include <vector>
#include <iostream>
#include "Entity.h"

class RenderSystem
{

	std::vector<Entity> entities;
public:
	void addEntity(Entity e) { /* TBI */ }
	void update()
	{
		std::cout << "Render System Update" << std::endl;
		/* Loop through Entities with */
		/* HealthComponents and update*/
		/*TBI*/
	}


private:

};

