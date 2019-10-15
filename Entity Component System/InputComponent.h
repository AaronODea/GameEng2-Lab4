#pragma once
#include "Component.h"

class InputComponent : public Component
{
public:

	InputComponent() : Input(100) {}

	/* Data only*/

	int getHInput() { return Input; }
	void setInput(int Input) { this->Input = Input; }

private:
	int Input;
};

