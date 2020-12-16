#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Chanel 
{
	class CHANEL_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() 
		{
			return s_CoreLogger;
		}

		inline static std::shared_ptr<spdlog::logger>& GetClientLogger()
		{
			return s_ClientLogger;
		}

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};

}

#define CH_CORE_TRACE(...)::Chanel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CH_CORE_INFO(...)::Chanel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CH_CORE_WARN(...)::Chanel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CH_CORE_ERROR(...)::Chanel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CH_CORE_FATAL(...)::Chanel::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define CH_TRACE(...)::Chanel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CH_INFO(...)::Chanel::Log::GetClientLogger()->info(__VA_ARGS__)
#define CH_WARN(...)::Chanel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CH_ERROR(...)::Chanel::Log::GetClientLogger()->error(__VA_ARGS__)
#define CH_FATAL(...)::Chanel::Log::GetClientLogger()->fatal(__VA_ARGS__)