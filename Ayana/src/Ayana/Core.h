#pragma once

//根据building的DLL文件决定导入或导出
#ifdef AY_PLATFORM_WINDOWS
	#ifdef AY_BUILD_DLL
		#define AYANA_API __declspec(dllexport)
	#else
		#define AYANA_API __declspec(dllimport)
	#endif // AY_BUILD_DLL
#else
	#error Ayana only supports Windows!
#endif