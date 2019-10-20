#pragma once
#include "Entity.h"

class HealthSystem
{

	std::vector<Entity*> entities;
	std::vector<HealthComponent*> components;

public:
	void addEntity(Entity* e)
	{
	
		entities.push_back(e); 
		std::cout << "--------- " << std::endl;

		std::vector<Component*> temp = e->getComponents();
		for (int i = 0; i < temp.size(); i++)
		{

			if (temp[i]->getID() == "health")
			{
				std::cout << " health for health system " << std::endl;
				components.push_back(static_cast<HealthComponent*>(temp[i]));
			}
			
		}
		for (int i = 0; i < entities.size(); i++)
		{

			if (entities[i]->getID() == "player")
			{
				components[i]->setHealth(2000);
			}
			else if (entities[i]->getID() == "alien")
			{
				components[i]->setHealth(1500);
			}
			else if (entities[i]->getID() == "dog")
			{
				components[i]->setHealth(1000);
			}
			else if (entities[i]->getID() == "cat")
			{
				components[i]->setHealth(500);
			}
			else
			{
				std::cout << "error" << std::endl;
			}

		}

	
	}
	

	void update()
	{
		std::cout << "------------------------------------------ " << std::endl;

		std::cout << "Health System Update" << std::endl;
		
		for (int i = 0; i < components.size(); i++)
		{
				std::cout << entities[i]->getID() << std::endl;
			std::cout << components[i]->getHealth() << std::endl;
		
		}

	}

	
private:

};

