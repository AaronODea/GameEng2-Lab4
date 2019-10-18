#pragma once
#include "Component.h"

class PositionComponent : public Component
{
public:

	PositionComponent() : postion{100,100,NULL,NULL} {}

	/* Data only*/

	SDL_Rect getPostion() { return postion; }
	void setPostion(SDL_Rect postion) { this->postion = postion; }

private:
	SDL_Rect postion;
};

#pragma once
