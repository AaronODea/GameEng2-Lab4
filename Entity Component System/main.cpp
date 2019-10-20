#define SDL_MAIN_HANDLED


#include <SDL.h>
#include <iostream> 
#include <vector>

#include"Entity.h"

#include "HealthComponent.h"
#include "PositionComponent.h"
#include "InputComponent.h"

#include "AISystem.h"
#include "ControlSystem.h"
#include "RenderSystem.h"
#include "HealthSystem.h"

using namespace std;


int main(void*)
{


	std::string idPlayer = ("player");
	std::string idAlien = ("alien");
	std::string idDog = ("dog");
	std::string idCat = ("cat");


	std::string idHealth = ("health");
	std::string idPosititon = ("posititon");
	std::string idInput = ("input");



	Entity* player = new Entity(idPlayer);
	Entity* alien = new Entity(idAlien);
	Entity* dog = new Entity(idDog);
	Entity* cat = new Entity(idCat);


	player->addComponent(new HealthComponent(), idHealth); player->addComponent(new PositionComponent(), idPosititon); player->addComponent(new InputComponent(), idInput);
	alien->addComponent(new HealthComponent(), idHealth); alien->addComponent(new PositionComponent(), idPosititon);
	dog->addComponent(new HealthComponent(), idHealth); dog->addComponent(new PositionComponent(), idPosititon);
	cat->addComponent(new PositionComponent(), idPosititon);

	AISystem as; ControlSystem cs; RenderSystem rs; HealthSystem hs;
	as.addEntity(player); as.addEntity(alien); as.addEntity(dog); as.addEntity(cat);	//AI
	cs.addEntity(player); cs.addEntity(alien); cs.addEntity(dog); cs.addEntity(cat);    //Controle system	
	rs.addEntity(player); rs.addEntity(alien); rs.addEntity(dog); rs.addEntity(cat);	//render system
	hs.addEntity(player); hs.addEntity(alien); hs.addEntity(dog);				        //health system

	while(true)
	{
		as.update(); cs.update(); rs.update(); hs.update();

	}
return 0;
}