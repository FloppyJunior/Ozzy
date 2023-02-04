#pragma once

#include <memory>

#include "core.h"
#include "spdlog/spdlog.h"

namespace ozzy {
	class OZZY_API log
	{
	public:
		static void init();

		inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return s_coreLogger;  }
		inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return s_clientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_coreLogger;
		static std::shared_ptr<spdlog::logger> s_clientLogger;
	};
}

// OZZY ENGINE LOGGING
#define OZ_CORE_CRITICAL(...) ::ozzy::log::getCoreLogger()->critical(__VA_ARGS__)
#define OZ_CORE_ERROR(...) ::ozzy::log::getCoreLogger()->error(__VA_ARGS__)
#define OZ_CORE_WARNING(...) ::ozzy::log::getCoreLogger()->warn(__VA_ARGS__)
#define OZ_CORE_INFO(...) ::ozzy::log::getCoreLogger()->info(__VA_ARGS__)
#define OZ_CORE_TRACE(...) ::ozzy::log::getCoreLogger()->trace(__VA_ARGS__)

// OZZY APPLICATION LOGGING
#define OZ_APP_CRITICAL(...) ::ozzy::log::getClientLogger()->critical(__VA_ARGS__)
#define OZ_APP_ERROR(...) ::ozzy::log::getClientLogger()->error(__VA_ARGS__)
#define OZ_APP_WARNING(...) ::ozzy::log::getClientLogger()->warn(__VA_ARGS__)
#define OZ_APP_INFO(...) ::ozzy::log::getClientLogger()->info(__VA_ARGS__)
#define OZ_APP_TRACE(...) ::ozzy::log::getClientLogger()->trace(__VA_ARGS__)