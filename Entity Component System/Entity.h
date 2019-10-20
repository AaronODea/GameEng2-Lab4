#pragma once
#include "Component.h"


class Entity
{
	std::string id;
public:
	Entity(std::string idEntity ) { this->id = idEntity; };
	~Entity() {};
	

	void addComponent(Component* c, std::string id) { c->setID(id), components.push_back(c);  }
	void removeComponent(Component* c, std::string id) { /*TBI*/ }


	std::string getID() { return id; }
	void setID(std::string id) { this->id = id; };

	void draw(std::string t_entity, SDL_Rect t_postion)
	{
		//use pointer stored in entity to draw entity 

		if (t_entity == "player")
		{
			//draw cat image useing passed in posititon
		}
		else if (t_entity == "alien")
		{
			//draw alien image useing passed in posititon
		}
		else if (t_entity == "dog")
		{
			//draw dog image useing passed in posititon
		}
		else if (t_entity == "cat")
		{
			//draw cat image useing passed in posititon
		}
	}

	std::vector<Component*> getComponents() { return components; }

private:
	std::vector<Component*> components;
};

