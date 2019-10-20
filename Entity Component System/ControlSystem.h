#pragma once
#include "Entity.h"

class ControlSystem
{

	std::vector<Entity*> entities;

	std::vector<InputComponent*> INcomponents;
	std::vector<PositionComponent*> Poscomponents;
public:
	void addEntity(Entity* e) 
	{
		entities.push_back(e);
	
		std::cout << "--------- " << std::endl;

		std::vector<Component*> temp = e->getComponents();
		for (int i = 0; i < temp.size(); i++)
		{

			if (temp[i]->getID() == "input")
			{
				std::cout << "input for control system" << std::endl;
				INcomponents.push_back(static_cast<InputComponent*>(temp[i]));
			}
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
			std::cout << "Control System Update" << std::endl;

			for (int i = 0; i < INcomponents.size(); i++)
			{
				std::cout << entities[i]->getID() << std::endl;
				std::cout << INcomponents[i]->getHInput() << std::endl;

			}
			for (int i = 0; i < Poscomponents.size(); i++)
			{
				std::cout << entities[i]->getID() << std::endl;
				std::cout << Poscomponents[i]->getPostion().x << "," << Poscomponents[i]->getPostion().y << std::endl;
			}

			//check for button presses / event and based on the event move the entity
			for (int i = 0; i < INcomponents.size(); i++)
			{
			 //move by button input
				std::cout << "controlling the " << entities[i]->getID()<<std::endl;
			}
	}


private:

};

