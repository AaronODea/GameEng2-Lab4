#pragma once
#include "Entity.h"

class AISystem
{

	std::vector<Entity> entities;
public:
	void addEntity(Entity e) { entities.push_back(e); }
	void update()
	{
		//std::cout << "AI System Update" << std::endl;

		for (int i = 0; i < entities.size(); i++)
		{
		//	std::cout << i + 1 << std::endl;
		}
	

	}


private:

};

