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

int main(void*)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	std::string idPlayer = ("player");
	std::string idAlien = ("alien");
	std::string idDog = ("dog");
	std::string idCat = ("cat");


	std::string idHealth = ("health");
	std::string idPosititon = ("posititon");
	std::string idInput = ("input");



	Entity player(idPlayer);
	Entity alien(idAlien);
	Entity dog(idDog);
	Entity cat(idCat);
	
	//std::unique_ptr<Component> hcp = std::make_unique<HealthComponent>();

	HealthComponent hc; PositionComponent pc; InputComponent ic;
	player.addComponent(hc, idHealth); player.addComponent(pc, idPosititon); player.addComponent(ic, idInput);

	alien.addComponent(hc,idHealth); alien.addComponent(pc, idPosititon);
	dog.addComponent(hc, idHealth); dog.addComponent(pc, idPosititon);
	cat.addComponent(pc, idPosititon);

	AISystem as; ControlSystem cs; RenderSystem rs; HealthSystem hs;
	as.addEntity(player); as.addEntity(alien); as.addEntity(dog); as.addEntity(cat);	//AI
	cs.addEntity(player); cs.addEntity(alien); cs.addEntity(dog); cs.addEntity(cat);//Controle system	
	rs.addEntity(player); rs.addEntity(alien); rs.addEntity(dog); rs.addEntity(cat);	//render system
	hs.addEntity(player); hs.addEntity(alien); hs.addEntity(dog);					//health system
 

	

	while (true) {
		as.update(); cs.update(); rs.update(); hs.update();
	}



return 0;
}