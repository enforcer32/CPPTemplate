#pragma once

#include <string>
#include <spdlog/spdlog.h>

namespace Project
{
	class Logger
	{
	public:
		static void Init(const std::string& name = "Logger");
		inline static std::shared_ptr<spdlog::logger> GetLogger() { return s_Logger; }

	private:
		inline static std::shared_ptr<spdlog::logger> s_Logger;
	};
}

#define LOGGER_INFO(...)		Project::Logger::GetLogger()->info(__VA_ARGS__)
#define LOGGER_WARN(...)		Project::Logger::GetLogger()->warn(__VA_ARGS__)
#ifdef BUILD_DEBUG
#define LOGGER_DEBUG(...)		Project::Logger::GetLogger()->debug(__VA_ARGS__)
#else
#define LOGGER_DEBUG(...)
#endif
#define LOGGER_ERROR(...)		Project::Logger::GetLogger()->error(__VA_ARGS__)
#define LOGGER_CRITICAL(...)	Project::Logger::GetLogger()->critical(__VA_ARGS__)
#define LOGGER_TRACE(...)		Project::Logger::GetLogger()->trace(__VA_ARGS__)
