#pragma once
#include "Component.h"


class Entity
{
	std::string id;
public:
	Entity(std::string idEntity ) { this->id = idEntity; };
	~Entity() {};
	

	void addComponent(Component c, std::string id) { c.setID(id), components.push_back(c);  }
	void removeComponent(Component c, std::string id) { /*TBI*/ }



	std::vector<Component> getComponents() { return components; }

private:
	std::vector<Component> components;
};

