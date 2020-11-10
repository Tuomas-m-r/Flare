#pragma once

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>

#include "../Defines.h"

namespace Flare::Util {

	class FLARE_API Logger
	{
	public:
		static void Init();

		static std::shared_ptr<spdlog::logger>& GetLogger() { return flareLogger; }
		static void SetLevel(spdlog::level::level_enum level);

	private:
		static std::shared_ptr<spdlog::logger> flareLogger;
	};
}