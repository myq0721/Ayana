#pragma once

//����building��DLL�ļ���������򵼳�
#ifdef AY_PLATFORM_WINDOWS
	#ifdef AY_BUILD_DLL
		#define AYANA_API __declspec(dllexport)
	#else
		#define AYANA_API __declspec(dllimport)
	#endif // AY_BUILD_DLL
#else
	#error Ayana only supports Windows!
#endif