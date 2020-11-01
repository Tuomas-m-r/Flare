#pragma once

#include "../Defines.h"

namespace Flare {

	class FLARE_API Engine
	{
	public:
		Engine();
		virtual ~Engine();

		void Run();

	private:
		static Engine* _engine;
	};
}