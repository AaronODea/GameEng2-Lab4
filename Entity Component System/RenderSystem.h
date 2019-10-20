#pragma once
#include "Entity.h"

class RenderSystem
{

	std::vector<Entity*> entities;
	std::vector<PositionComponent*> Poscomponents;

public:
	void addEntity(Entity* e) 
	{
		entities.push_back(e);
	
		std::cout << "--------- " << std::endl;

		std::vector<Component*> temp = e->getComponents();
		for (int i = 0; i < temp.size(); i++)
		{
			if (temp[i]->getID() == "posititon")
			{
				std::cout << " postion for control system  " << std::endl;
				Poscomponents.push_back(static_cast<PositionComponent*>(temp[i]));
			}
		}
	
	}
	void update()
	{
		std::cout << "------------------------------------------ " << std::endl;
		std::cout << "Render System Update" << std::endl;

		for (int i = 0; i < Poscomponents.size(); i++)
		{
			std::cout << entities[i]->getID() << std::endl;
			std::cout << Poscomponents[i]->getPostion().x << "," << Poscomponents[i]->getPostion().y << std::endl;
		}

		for (int i = 0; i < entities.size(); i++)
		{
			//draw entities here useing a common draw funtion in entity 
			//entity holds a pointer to the window of the screen;
			SDL_Rect m_position;
			m_position.x = Poscomponents[i]->getPostion().x;
			m_position.y = Poscomponents[i]->getPostion().y;

			entities[i]->draw(entities[i]->getID() , m_position);

			std::cout << "drawing"<< entities[i]->getID() << std::endl;
		}
	}


private:

};

