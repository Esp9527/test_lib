#pragma once

#ifdef _WIN32_
    #ifdef LIB_EXPORT
    #define LIB_API __declspec(dllexport)
    #else
    #define LIB_API __declspec(dllimport)
    #endif
#else
    #define LIB_API 
#endif