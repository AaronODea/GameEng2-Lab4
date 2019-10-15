#pragma once
#include "Component.h"
#include <vector>


class PositionComponent : public Component
{
public:

	PositionComponent() : postion(100) {}

	/* Data only*/

	int getPostion() { return postion; }
	void setPostion(int postion) { this->postion = postion; }

private:
	int postion;
};

#pragma once
