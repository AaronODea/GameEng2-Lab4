#pragma once
class Component
{
public:
	
	Component() {};
	~Component() {};

	std::string getID() { return id; }
	void setID(std::string id) { this->id = id; };
private:
	std::string  id = "component";
};

