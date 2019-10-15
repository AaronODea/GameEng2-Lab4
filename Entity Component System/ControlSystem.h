#pragma once
#include <vector>
#include <iostream>
#include "Entity.h"

class ControlSystem
{

	std::vector<Entity> entities;
public:
	void addEntity(Entity e) { /* TBI */ }
	void update()
	{
		std::cout << "Control System Update" << std::endl;
		/* Loop through Entities with */
		/* HealthComponents and update*/
		/*TBI*/
	}


private:

};

