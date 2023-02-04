#pragma once

#ifdef OZ_PLATFORM_WINDOWS
	#ifdef OZ_BUILD_DLL
		#define OZZY_API __declspec(dllexport)
	#else
		#define OZZY_API __declspec(dllimport)
	#endif // OZ_BUILD_DLL
#else
	#error Ozzy only supports Windows for now.
#endif