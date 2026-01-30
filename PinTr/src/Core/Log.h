#pragma once
#include <memory>

#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace PinTr 
{
	class Log {
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define PT_CORE_TRACE(...)    ::PinTr::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PT_CORE_INFO(...)     ::PinTr::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PT_CORE_WARN(...)     ::PinTr::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PT_CORE_ERROR(...)    ::PinTr::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PT_CORE_CRITICAL(...) ::PinTr::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define PT_TRACE(...)         ::PinTr::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PT_INFO(...)          ::PinTr::Log::GetClientLogger()->info(__VA_ARGS__)
#define PT_WARN(...)          ::PinTr::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PT_ERROR(...)         ::PinTr::Log::GetClientLogger()->error(__VA_ARGS__)
#define PT_CRITICAL(...)      ::PinTr::Log::GetClientLogger()->critical(__VA_ARGS__)