#include "Logger.h"

namespace Flare::Util {

	std::shared_ptr<spdlog::logger> Logger::flareLogger;

	void Logger::Init()
	{
		spdlog::set_pattern("%^[%H:%M:%S] [%n] [%l]:%$ %v");
		flareLogger = spdlog::stdout_color_mt("Flare");
	}

	void Logger::SetLevel(spdlog::level::level_enum level)
	{
		spdlog::set_level(level);
	}
}