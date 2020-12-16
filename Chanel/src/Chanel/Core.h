#pragma once

#ifdef CH_PLATFORM_WINDOWS
	#ifdef CH_BUILD_DLL
		#define CHANEL_API __declspec(dllexport)
	#else
		#define CHANEL_API __declspec(dllimport)
	#endif
#else
	#error OS not supported
#endif // CH_PLATFORM_WINDOWS
