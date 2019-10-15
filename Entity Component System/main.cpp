#include <iostream> 
#include"Entity.h"

#include "HealthComponent.h"
#include "PositionComponent.h"
#include "InputComponent.h"

#include "AISystem.h"
#include "ControlSystem.h"
#include "RenderSystem.h"

int main(void*)
{
	Entity player;
	Entity alien;
	Entity dog;
	Entity cat;

	HealthComponent hc; PositionComponent pc; InputComponent ic;
	player.addComponent(hc); player.addComponent(pc); player.addComponent(ic);
	alien.addComponent(hc); alien.addComponent(pc);
	dog.addComponent(hc); dog.addComponent(pc);
	cat.addComponent(pc); 

	AISystem as; ControlSystem cs; RenderSystem rs;
	as.addEntity(player);as.addEntity(alien);as.addEntity(dog);
	cs.addEntity(player);
	rs.addEntity(player);rs.addEntity(alien);rs.addEntity(dog);rs.addEntity(cat);


	while (true) {
		as.update(); cs.update(); rs.update();
	}



return 0;
}