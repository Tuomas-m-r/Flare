#pragma once

// Platforms
#if _WIN64
#define PLATFORM_WINDOWS
#else
#error Flare only supports Windows!
#endif

// DLL import/export
#ifdef FLARE_BUILD_DLL
#define FLARE_API __declspec(dllexport)
#else
#define FLARE_API __declspec(dllimport)
#endif

// Start debugging if using MSVC and assertion fails
#if _MSC_VER
	#include <intrin.h>
	#define debugBreak() __debugBreak();
#else
	#define debugBreak() __asm { int 3 }
#endif

// Assertions
#ifdef DEBUG
	#include <cassert>
	#define ASSERT(expression) \
	{ \
		if (!(expression)) \
		{ \
			std::cerr << "Assertion failed at: " << __FILE__ << ":" << __LINE__; \
			std:cerr << "inside function: " << __FUNCTION__ << std::endl; \
			debugBreak(); \
		} \
	}
#else
	#define ASSERT(expression) (expression)
#endif