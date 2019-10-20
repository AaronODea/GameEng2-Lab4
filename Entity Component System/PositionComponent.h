#pragma once
#include "Component.h"

class PositionComponent : public Component
{
public:

	PositionComponent() : postion{100,100,NULL,NULL} {}

	/* Data only*/

	SDL_Rect getPostion() { return postion; }
	void setPostion(SDL_Rect postion) { this->postion = postion; }
	void move(SDL_Rect speedVEctor) { postion.x += speedVEctor.x; postion.y += speedVEctor.y;}


private:
	SDL_Rect postion;
};

#pragma once
