#pragma once

#ifdef TA_PLATFORM_WINDOWS
#ifdef TA_BUILD_DLL
#define TEMPURA_API _declspec(dllexport)
#else
#define TEMPURA_API _declspec(dllimport)
#endif
#else
#error Tempura only supports windows

#endif // TA_PLATFORM_WINDOWS


