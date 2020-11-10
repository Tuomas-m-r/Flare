#include "Engine.h"
#include "../Defines.h"
#include "../Util/Logger.h"

#include <iostream>

namespace Flare {

	Engine::Engine()
	{
		Flare::Util::Logger::Init();
		Flare::Util::Logger::SetLevel(spdlog::level::trace);
		FLARE_INFO("Logger initialized!");
	}

	Engine::~Engine()
	{

	}

	void Engine::Run()
	{
		FLARE_INFO("Engine started!");
		while (true);
	}
}