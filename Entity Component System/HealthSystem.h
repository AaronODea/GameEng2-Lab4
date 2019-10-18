#pragma once
#include "Entity.h"

class HealthSystem
{

	std::vector<Entity> entities;
public:
	void addEntity(Entity e) { entities.push_back(e); }
	void update()
	{
		//std::cout << "Health System Update" << std::endl;

		for (int i = 0; i < entities.size(); i++)
		{
		

			std::cout << "--------- "<< std::endl;
		
			std::vector<Component> components = entities[i].getComponents();
			for (int i = 0; i < components.size(); i++)
			{
				if (components[i].getID() == "health")
				{
				}
				else
				{

				}
			}

			

		}
	}


private:

};

