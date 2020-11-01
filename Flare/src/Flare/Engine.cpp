#include "Engine.h"
#include <iostream>

namespace Flare {

	Engine::Engine()
	{

	}

	Engine::~Engine()
	{

	}

	void Engine::Run()
	{
		std::cout << "Engine started!" << std::endl;
		while (true);
	}
}