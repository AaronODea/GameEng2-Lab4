#pragma once
#include "Entity.h"

class AISystem
{

	std::vector<Entity*> entities;
	std::vector<HealthComponent*> HPcomponents;
	std::vector<PositionComponent*> Poscomponents;

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
				std::cout << "health for ai system" << std::endl;
				HPcomponents.push_back(static_cast<HealthComponent*>(temp[i]));
			}
			if (temp[i]->getID() == "posititon")
			{
				std::cout << " postion for ai system  " << std::endl;
				Poscomponents.push_back(static_cast<PositionComponent*>(temp[i]));
			}
		}




	}
	void update()
	{
		std::cout << "------------------------------------------ " << std::endl;
		std::cout << "AI System Update" << std::endl;


		for (int i = 0; i < entities.size(); i++)
		{

			if (entities[i]->getID() == "player")
			{
				std::cout << "Moveing Player" << std::endl;
				Poscomponents[i]->move(SDL_Rect{ 100,100 });
			}
			else if (entities[i]->getID() == "alien")
			{
				std::cout << "Moveing alien" << std::endl;
				Poscomponents[i]->move(SDL_Rect{ 300,300 });

			}
			else if (entities[i]->getID() == "dog")
			{
				std::cout << "Moveing dog" << std::endl;
				Poscomponents[i]->move(SDL_Rect{ 50,50 });

			}
			else if (entities[i]->getID() == "cat")
			{
				std::cout << "Moveing cat" << std::endl;
				Poscomponents[i]->move(SDL_Rect{ 120,120 });

			}
			else
			{
				std::cout << "error" << std::endl;
			}


		}
		for (int i = 0; i < HPcomponents.size(); i++)
		{
			if (HPcomponents[i]->getHealth() >= 0)
			{
				HPcomponents[i]->setHealth(HPcomponents[i]->getHealth() - 1);
			}
		}


	}


private:

};

