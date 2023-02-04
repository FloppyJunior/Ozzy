#include "log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace ozzy {
	std::shared_ptr<spdlog::logger> log::s_coreLogger;
	std::shared_ptr<spdlog::logger> log::s_clientLogger;

	void log::init(void) {
		spdlog::set_pattern("%^[%T] %n: %v%$");

		s_coreLogger = spdlog::stdout_color_mt("OZZY_ENGINE");
		s_coreLogger->set_level(spdlog::level::trace);

		s_clientLogger = spdlog::stdout_color_mt("OZZY_APPLICATION");
		s_clientLogger->set_level(spdlog::level::trace);
	}
}